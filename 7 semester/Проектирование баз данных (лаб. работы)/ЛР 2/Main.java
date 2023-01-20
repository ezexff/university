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
import java.util.Optional;

public class Main extends Application {

    private static final String DRIVER_CLASS = "oracle.jdbc.driver.OracleDriver";
    private static final String URL = "jdbc:oracle:thin:@192.168.50.33:1521:xe";
    private static final String USER = "Qtm";
    private static final String PASSWORD = "qwe";

    String CASH = "";

    @Override
    public void start(Stage primaryStage) throws Exception{
        //Parent root = FXMLLoader.load(getClass().getResource("sample.fxml"));
        //primaryStage.setTitle("Hello World");
        //primaryStage.setScene(new Scene(root, 300, 275));
        //primaryStage.show();

        Alert alert = new Alert(Alert.AlertType.CONFIRMATION);
        alert.setTitle("Начисление стипендии");
        alert.setHeaderText(
                "Рассчитать среднюю оценку по трем дисциплинам.\n" +
                "Начислить стипендию каждому студенту (в отдельном поле),\n" +
                "исходя из следующего принципа: если средний балл >4.5,\n" +
                "стипендия увеличивается на 50%, если 3.5< ср.балл < 4.5,\n" +
                "то стипендия увеличивается на 25%, если 2.5< ср.балл < 3.5,\n" +
                "то стипендия не меняется, если ср.балл < 2.5, то стипендия не начисляется.");
        alert.setContentText("Выберите ваш вариант:");

        ButtonType buttonTypeOne = new ButtonType("Начислить");
        ButtonType buttonTypeTwo = new ButtonType("+25%:");
        ButtonType buttonTypeThree = new ButtonType("+50%");
        ButtonType buttonTypeCancel = new ButtonType("Отмена", ButtonBar.ButtonData.CANCEL_CLOSE);

        alert.getButtonTypes().setAll(buttonTypeOne, buttonTypeTwo, buttonTypeThree, buttonTypeCancel);

        Optional<ButtonType> result = alert.showAndWait();
        if (result.get() == buttonTypeOne){
            // ... user chose "One"

            TextInputDialog dialog = new TextInputDialog("2000");
            dialog.setTitle("Размер стипендии");
            dialog.setHeaderText("Начисление стипендии");
            dialog.setContentText("Введите размер стипендии:");

            // Traditional way to get the response value.
            Optional<String> resultDialog = dialog.showAndWait();
            if (result.isPresent()){
                System.out.println("Введённый размер стипендии: " + resultDialog.get());
                CASH = resultDialog.get();
            }

            try{
                Class.forName(DRIVER_CLASS);
                Connection con = DriverManager.getConnection(URL, USER, PASSWORD);
                Statement stmt = con.createStatement();
                //stmt.executeUpdate("INSERT INTO USER_TABLE (LOGIN, PASSWORD, OFFICIAL_ID) VALUES('123', '444', 55)");
                stmt.executeUpdate("UPDATE STUDENTS2 SET \"СТИПЕНДИЯ\" ="+ CASH +" WHERE (((\"МАТЕМАТИКА\" + \"ИНФОРМАТИКА\" + \"ИН._ЯЗЫК\") / 3) > 2.5);");
                stmt.close();
                con.commit();
                con.close();
            }catch(Exception e){ System.out.println(e);}
            //result = alert.showAndWait();
        } else if (result.get() == buttonTypeTwo) {
            // ... user chose "Two"
            try{
                Class.forName(DRIVER_CLASS);
                Connection con = DriverManager.getConnection(URL, USER, PASSWORD);
                Statement stmt = con.createStatement();
                //stmt.executeUpdate("INSERT INTO USER_TABLE (LOGIN, PASSWORD, OFFICIAL_ID) VALUES('123', '444', 55)");
                stmt.executeUpdate("UPDATE STUDENTS2 SET \"СТИПЕНДИЯ\" = (СТИПЕНДИЯ + СТИПЕНДИЯ * 0.25) WHERE (((\"МАТЕМАТИКА\" + \"ИНФОРМАТИКА\" + \"ИН._ЯЗЫК\") " +
                        "/ 3) > 3.5) AND (((\"МАТЕМАТИКА\" + \"ИНФОРМАТИКА\" + \"ИН._ЯЗЫК\") / 3)  < 4.5);");
                stmt.close();
                con.commit();
                con.close();
            }catch(Exception e){ System.out.println(e);}
        } else if (result.get() == buttonTypeThree) {
            // ... user chose "Three"
            try{
                Class.forName(DRIVER_CLASS);
                Connection con = DriverManager.getConnection(URL, USER, PASSWORD);
                Statement stmt = con.createStatement();
                //stmt.executeUpdate("INSERT INTO USER_TABLE (LOGIN, PASSWORD, OFFICIAL_ID) VALUES('123', '444', 55)");
                stmt.executeUpdate("UPDATE STUDENTS2 SET \"СТИПЕНДИЯ\" = (СТИПЕНДИЯ + СТИПЕНДИЯ * 0.5) WHERE ((\"МАТЕМАТИКА\" + \"ИНФОРМАТИКА\" + \"ИН._ЯЗЫК\") / 3) > 4.5;");
                stmt.close();
                con.commit();
                con.close();
            }catch(Exception e){ System.out.println(e);}
        } else {
            // ... user chose CANCEL or closed the dialog
        }
    }


    public static void main(String[] args) {
        launch(args);
    }
}

// https://code.makery.ch/blog/javafx-dialogs-official/
            /*try {
                // проверка на существующий файл
                    Class.forName(DRIVER_CLASS);
                    Connection con = DriverManager.getConnection(URL, USER, PASSWORD);
                    Statement stmt = con.createStatement();
                    ResultSet rs = stmt.executeQuery("select defection_id, defection_label, defection_name from s_defection");

                    while (rs.next()) {
                        //bw.write(rs.getString(3));
                        //bw.write(rs.getString(1) + "|" + rs.getString(2) + "\n");

                        //defection_id.add(rs.getString(1));
                        //defection_label.add(rs.getString(2));
                        //defection_name.add(rs.getString(3));
                    }
                    stmt.close();
                    rs.close();
                    con.close();
            } catch (Exception e) {
                System.out.println(e);
            }*/