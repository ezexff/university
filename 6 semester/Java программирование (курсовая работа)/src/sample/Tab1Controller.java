package sample;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Alert;
import javafx.scene.control.Button;
import javafx.scene.control.ButtonType;
import javafx.scene.control.TextArea;

import java.util.Optional;

import static sample.Main.unhide;

public class Tab1Controller {

    private MainController main;

    @FXML
    private Button tab1btn1;

    @FXML
    private Button tab1btn2;

    @FXML
    private Button tab1btn3;

    @FXML
    public TextArea tab1TextArea1;



    @FXML private void tab1btn1Clicked(ActionEvent event){
        System.out.println("tab1btn1Clicked!");

        String inputText = tab1TextArea1.getText();
        if (inputText.length() >= 1) {
            String outputText = unhide(inputText);
            main.loadTextToTab3(outputText);

            main.chooseTab3();
            Main.msgalert("Уведомление", "Процесс извлечения скрытых данных завершён");
        } else {
            Main.msgalert("Ошибка", "Поле для ввода текста пустое");
        }
    }

    @FXML private void tab1btn2Clicked(ActionEvent event){
        System.out.println("tab1btn2Clicked!");
        String inputText1 = tab1TextArea1.getText();

        if (inputText1.length() >= 1) {
            int spacecounter = 0;
            int count = 0;
            for (int i = 0; i < inputText1.length(); i++) {
                char symbol = inputText1.charAt(i);
                if (symbol == ' ') {
                    count++;
                }
                if (symbol != ' ' && count > 1) {
                    System.out.println("Обнаружен двойной пробел!");
                }
                if (symbol != ' ' && count > 0) {
                    spacecounter++;
                    count = 0;
                }
            }

            System.out.println(spacecounter);

            if (spacecounter < 16) {
                Main.msgalert("Ошибка", "Недастаточно пробелов в тексте (меньше 16)");
            } else {

                int symbolscounter = (spacecounter - 8) / 8;
                Main.msgalert("Число пробелов", "Количество пробелов в тексте " + spacecounter
                        + "\nКоличество символов, которое возможно скрыть " + symbolscounter);
            }
        } else {
            Main.msgalert("Ошибка", "Поле для ввода текста пустое");
        }
    }

    @FXML private void tab1btn3Clicked(ActionEvent event){
        System.out.println("tab1btn3Clicked!");
        String inputText1 = tab1TextArea1.getText();

        if (inputText1.length() >= 1) {
            int count = 0;
            int current_symbol = 0;
            Alert alert = new Alert(Alert.AlertType.CONFIRMATION);
            alert.setTitle("Уведомление");
            alert.setHeaderText("Удалить лишние пробелы");
            alert.setContentText("Вы уверены?");
            Optional<ButtonType> result = alert.showAndWait();
            if (result.get() == ButtonType.OK) {
                // ... user chose OK
                for (int i = 0; i < inputText1.length(); i++) {
                    char symbol = inputText1.charAt(i);
                    current_symbol++;
                    if (symbol == ' ') {
                        count++;
                    }
                    if (symbol != ' ' && count > 1) {
                        System.out.println("Обнаружен двойной пробел! - " + count);
                        String newstr = inputText1;
                        newstr = newstr.substring(0, current_symbol - count - 1) + " " + newstr.substring(current_symbol - 1);
                        inputText1 = newstr;
                        System.out.println("i - " + i);
                        System.out.println("current_symbol - " + current_symbol);
                        System.out.println("count - " + count);
                        i = i - count;
                        current_symbol = current_symbol - count;
                        count = 0;
                    }
                    if (symbol != ' ') {
                        count = 0;
                    }
                }
                tab1TextArea1.setText(inputText1);

            } else {
                // ... user chose CANCEL or closed the dialog
            }
        } else {
            Main.msgalert("Ошибка", "Поле для ввода текста пустое");
        }
    }

    public  void init(MainController mainController) {
        main = mainController;
    }

}
