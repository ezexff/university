package sample;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Alert;
import javafx.scene.control.ButtonBar;
import javafx.scene.control.ButtonType;
import javafx.scene.control.TextInputDialog;
import javafx.stage.Stage;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.Locale;
import java.util.Optional;
import java.util.Random;

public class Main extends Application {

    private static final String DRIVER_CLASS = "oracle.jdbc.driver.OracleDriver";
    //private static final String URL = "jdbc:oracle:thin:@127.0.0.1:1521:xe";
    //private static final String USER = "student";
    //private static final String PASSWORD = "student";
    private static final String URL = "jdbc:oracle:thin:@192.168.50.33:1521:xe";
    private static final String USER = "Qtm";
    private static final String PASSWORD = "qwe";

    String STREET_NAME = "";
    boolean needClose = false;

    @Override
    public void start(Stage primaryStage) throws Exception{
        //Parent root = FXMLLoader.load(getClass().getResource("sample.fxml"));
        //primaryStage.setTitle("Hello World");
        //primaryStage.setScene(new Scene(root, 300, 275));
        //primaryStage.show();

        while(!needClose) {

            Alert alert = new Alert(Alert.AlertType.CONFIRMATION);
            alert.setTitle("3 ЛР");
            alert.setHeaderText(
                    "123213");
            alert.setContentText("Выберите ваш вариант:");

            ButtonType buttonTypeOne = new ButtonType("Переименовать улицу");
            ButtonType buttonTypeTwo = new ButtonType("Розыгрыш");
            ButtonType buttonTypeCancel = new ButtonType("Отмена", ButtonBar.ButtonData.CANCEL_CLOSE);

            alert.getButtonTypes().setAll(buttonTypeOne, buttonTypeTwo, buttonTypeCancel);

            Optional<ButtonType> result = alert.showAndWait();
            if (result.get() == buttonTypeOne) {
                // ... user chose "One"

                TextInputDialog dialog = new TextInputDialog("Энгельса");
                dialog.setTitle("Изменение названия улицы");
                dialog.setHeaderText("Подтверждение");
                dialog.setContentText("Переименовать улицу: ");

                // Traditional way to get the response value.
                Optional<String> resultDialog = dialog.showAndWait();
                if (resultDialog.isPresent()) {
                    System.out.println("Переименовать улицу в Милютина: " + resultDialog.get());
                    STREET_NAME = resultDialog.get();
                    STREET_NAME = "Энгельса";

                    try {
                        Locale.setDefault(Locale.ENGLISH);
                        Class.forName(DRIVER_CLASS);
                        Connection con = DriverManager.getConnection(URL, USER, PASSWORD);
                        Statement stmt = con.createStatement();

                        String streetId = "";
                        ResultSet rs = stmt.executeQuery("select id from streets where name='"+STREET_NAME+"'");
                        while (rs.next()) {
                             streetId = rs.getString("ID");
                            System.out.println("Найдена улица в БД под STREET_ID="+streetId);
                        }

                        stmt.executeUpdate("UPDATE STREETS SET NAME='Милютина' WHERE ID='"+streetId+"'");
                        System.out.println("Улица "+ STREET_NAME + " переименована в ул. Милютина");

                        stmt.executeUpdate("UPDATE HOUSES SET HOUSE_NUMBER=(HOUSE_NUMBER-50) WHERE STREET_ID='"+streetId+"'");
                        System.out.println("Номер улицы уменьшен на 50 для STREET_ID="+streetId);

                        stmt.executeUpdate("UPDATE PERSON SET HOUSE_ID=22 WHERE STREET_ID='"+streetId+"' AND HOUSE_ID IS NULL AND FLAT_ID IS NULL");
                        System.out.println("Люди без дома и квартиры были прописаны в доме №22 (приют) для STREET_ID="+streetId);

                        stmt.close();
                        con.commit();
                        con.close();
                    } catch (Exception e) {
                        System.out.println(e);
                    }
                }
                //result = alert.showAndWait();
            } else if (result.get() == buttonTypeTwo) {
                // ... user chose "Two"

                int m = 0; // макс номер дома
                int n = 0; // макс номер квартиры

                String MAX_HOUSE_NUMBER = "";
                String MAX_FLAT_NUMBER = "";

                try {
                    Locale.setDefault(Locale.ENGLISH);
                    Class.forName(DRIVER_CLASS);
                    Connection con = DriverManager.getConnection(URL, USER, PASSWORD);
                    Statement stmt = con.createStatement();

                    ResultSet rs = stmt.executeQuery("SELECT MAX(HOUSE_NUMBER) AS RESULT FROM STUDENTS3");
                    while (rs.next()) {
                        MAX_HOUSE_NUMBER = rs.getString("RESULT");
                        System.out.println("MAX HOUSE_NUMBER M="+MAX_HOUSE_NUMBER);
                    }

                    rs = stmt.executeQuery("SELECT MAX(FLAT_NUMBER) AS RESULT  FROM STUDENTS3");
                    while (rs.next()) {
                        MAX_FLAT_NUMBER = rs.getString("RESULT");
                        System.out.println("MAX_FLAT_NUMBER N="+MAX_FLAT_NUMBER);
                    }

                    stmt.close();
                    con.commit();
                    con.close();
                } catch (Exception e) {
                    System.out.println(e);
                }

                m = Integer.parseInt(MAX_HOUSE_NUMBER);
                n = Integer.parseInt(MAX_FLAT_NUMBER);

                int[][] matrixA;
                matrixA = new int[m][n];

                // Инициализируем генератор
                Random rnd = new Random(System.currentTimeMillis());
                // Получаем случайное число в диапазоне от min до max (включительно)
                int min = 0;
                int max = 100;
                //int number = min + rnd.nextInt(max - min + 1);

                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < n; j++) {
                        matrixA[i][j] = min + rnd.nextInt(max - min + 1);
                        System.out.print(matrixA[i][j] + "\t");
                    }
                    System.out.println();
                }

                int winnerM = 1 + rnd.nextInt(m - 1);
                int winnerN = 1 + rnd.nextInt(n - 1);
                int winnerX = matrixA[winnerM][winnerN];
                System.out.println("winnerM=" + winnerM + " winnerN=" + winnerN + " winnerX=" + winnerX);

                try {
                    Locale.setDefault(Locale.ENGLISH);
                    Class.forName(DRIVER_CLASS);
                    Connection con = DriverManager.getConnection(URL, USER, PASSWORD);
                    Statement stmt = con.createStatement();

                    ResultSet rs = stmt.executeQuery("SELECT NAME FROM STUDENTS3 WHERE HOUSE_NUMBER='"+winnerM+"' AND FLAT_NUMBER='"+winnerN+"'");

                    // результат запроса пустой
                    if (!rs.isBeforeFirst()) {
                        System.out.println("РЕЗУЛЬТАТ РОЗЫГРЫША: Победителя нет :(");
                        stmt.executeUpdate("UPDATE STUDENTS3 SET SCHOLARSHIP=(SCHOLARSHIP+("+winnerX+"/(SELECT COUNT(*) FROM STUDENTS3)))");
                        System.out.println("Выигрыш "+winnerX+" распределен между всеми студентами");
                        return;
                    } else
                    { }

                    String winnerName = "";

                    while (rs.next()) {
                        winnerName = rs.getString(1);
                    }
                    System.out.println("РЕЗУЛЬТАТ РОЗЫГРЫША: Победил(а) "+winnerName+"!!!!! :)");

                    stmt.executeUpdate("UPDATE STUDENTS3 SET SCHOLARSHIP=(SCHOLARSHIP+"+winnerX+") WHERE NAME='"+winnerName+"'");
                    System.out.println("Стипендия победителя увеличена на "+winnerX);

                    stmt.close();
                    con.commit();
                    con.close();
                } catch (Exception e) {
                    System.out.println(e);
                }

            } else {
                // ... user chose CANCEL or closed the dialog
                needClose = true;
            }
        }
    }

    public static void main(String[] args) {
        launch(args);
    }
}