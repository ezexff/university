package sample;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Alert;
import javafx.scene.control.Button;
import javafx.scene.control.TextArea;
import static sample.Main.hide;
import static sample.Main.msgalert;

import sample.MainController;

public class Tab2Controller {

    private MainController main;

    @FXML
    private Button tab2btn1;

    @FXML
    private Button tab2btn2;

    @FXML
    public TextArea tab2TextArea1;

    @FXML private void tab2btn1Clicked(ActionEvent event){
        System.out.println("tab2btn1Clicked!");
        String inputText1 = main.loadTextFromTab1(); //Текст, в котором нужно скрыть данные
        String inputText2 = tab2TextArea1.getText(); //Данные, которые нужно скрыть
        if (inputText1.length() >= 1 &&inputText2.length() >= 1) {
            int count = 0;
            int spacecounter = 0;
            for (int i = 0; i < inputText1.length(); i++) {
                char symbol = inputText1.charAt(i);
                if (symbol == ' ') {
                    count++;
                }
                if (symbol != ' ' && count > 1) {
                    msgalert("Ошибка", "Обнаружен двойной пробел в исходном тексте! Скрытие данных приостановлено");
                    throw new IllegalArgumentException("Обнаружен двойной пробел!");
                }
                if (symbol != ' ' && count > 0) {
                    spacecounter++;
                    count = 0;
                }
            }

            int strlength = inputText2.length();
            strlength = strlength * 8 + 8; //Нужно символов, чтобы спрятать строку

            if (spacecounter < strlength) {

                Main.msgalert("Ошибка", "В исходном тексте недостаточно одиночных пробелов!");
            } else {

                String outputText = hide(inputText1, inputText2); //Текст со скрытыми данными
                main.loadTextToTab3(outputText);
                Main.msgalert("Уведомление", "Скрытие данных прошло успешно!\nТекст находится в отдельной вкладе");
                main.chooseTab3();
            }
        } else {
            Main.msgalert("Ошибка", "Одно из полей для ввода текста не заполнено");
        }
    }

    @FXML private void tab2btn2Clicked(ActionEvent event) {
        System.out.println("tab2btn1Clicked!");


        String inputText2 = tab2TextArea1.getText(); //Данные, которые нужно скрыть
        if (inputText2.length() >= 1) {

            int spacecounter = inputText2.length();
            spacecounter = spacecounter * 8 + 8; //Нужно пробелов, чтобы спрятать строку
            Main.msgalert("Уведомление", "Необходимо пробелов для скрытия " + spacecounter
                    + "\nКоличество символов в тексте " + inputText2.length());
        } else {
            Main.msgalert("Ошибка", "Поле для ввода текста пустое");
        }
    }


    public void init(MainController mainController) {
        main = mainController;
    }
}
