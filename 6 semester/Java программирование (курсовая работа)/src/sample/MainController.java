package sample;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.MenuItem;
import javafx.scene.control.TabPane;
import javafx.stage.FileChooser;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class MainController {
    private MainController main;

    @FXML
    private MenuItem menu1btn1; // load 1 file

    @FXML
    private MenuItem menu1btn2; // load 2 file

    @FXML
    private MenuItem menu1btn3; // save result in file

    @FXML
    private MenuItem menu2btn1; // info about program

    @FXML
    public TabPane tabPane;


    @FXML private void menu1btn1Clicked(ActionEvent event){
        System.out.println("menu1btn1Clicked!");
        FileChooser fc = new FileChooser();
        fc.setInitialDirectory(new File("./"));
        fc.getExtensionFilters().addAll( new FileChooser.ExtensionFilter("TXT files (*.txt)", "*.txt"));
        fc.setTitle("Открыть исходный текст");
        File selectedFile = fc.showOpenDialog(null);

        if (selectedFile != null){
            String filePath = selectedFile.getAbsolutePath();

            try{
                Scanner input = new Scanner(new File (filePath));
                tab1Controller.tab1TextArea1.setText("");
                while (input.hasNext()){
                    tab1Controller.tab1TextArea1.appendText(input.nextLine());
                    tab1Controller.tab1TextArea1.appendText("\n");
                }

                Main.msgalert("Уведомление", "Файл " + selectedFile.getName() + " успешно открыт");
            }catch(Exception e){
                Main.msgalert("Ошибка", "Не удалось открыть файл " + e);
            }
            chooseTab1();

        } else { }
    }

    @FXML private void menu1btn2Clicked(ActionEvent event){
        System.out.println("menu1btn2Clicked!");
        FileChooser fc = new FileChooser();
        fc.setInitialDirectory(new File("./"));
        fc.getExtensionFilters().addAll( new FileChooser.ExtensionFilter("Text Files", "*.txt"));
        fc.setTitle("Открыть текст для скрытия");
        File selectedFile = fc.showOpenDialog(null);

        if (selectedFile != null){
            String filePath = selectedFile.getAbsolutePath();

            try{
                Scanner input = new Scanner(new File (filePath));
                tab2Controller.tab2TextArea1.setText("");
                while (input.hasNext()){

                    tab2Controller.tab2TextArea1.appendText(input.nextLine());
                    tab2Controller.tab2TextArea1.appendText("\n");
                }
                Main.msgalert("Уведомление", "Файл " + selectedFile.getName() + " успешно открыт");
            }catch(Exception e){
                Main.msgalert("Ошибка", "Не удалось открыть файл " + e);
            }
            chooseTab2();

        } else { }
    }

    @FXML private void menu1btn3Clicked(ActionEvent event){
        System.out.println("menu1btn3Clicked!");
        FileChooser fileChooser = new FileChooser();

        fileChooser.setInitialDirectory(new File("./"));
        FileChooser.ExtensionFilter extFilter = new FileChooser.ExtensionFilter("TXT files (*.txt)", "*.txt");
        fileChooser.getExtensionFilters().add(extFilter);

        File file = fileChooser.showSaveDialog(null);

        String s = loadTextFromTab3();

        if(file != null){
            try {
                FileWriter fileWriter = null;

                fileWriter = new FileWriter(file);
                fileWriter.write(s);
                fileWriter.close();
                Main.msgalert("Уведомление", "Файл " + file.getName() + " успешно сохранён");
            } catch (IOException ex) {

            }
        }
    }

    @FXML private void menu2btn1Clicked(ActionEvent event){
        System.out.println("menu2btn1Clicked!");
        Main.msgalert("О программе", "Курсовая работа по Java - программированию\nКлимов А.Г.\n1ИВТпб-01-31оп");
    }


    @FXML Tab1Controller tab1Controller;
    @FXML Tab2Controller tab2Controller;
    @FXML Tab3Controller tab3Controller;

    @FXML public void initialize(){
        System.out.println("Application started");
        tab1Controller.init(this);
        tab2Controller.init(this);
        tab3Controller.init(this);
    }

    public String loadTextFromTab1(){
        return tab1Controller.tab1TextArea1.getText();
    }

    public String loadTextFromTab2(){
        return tab2Controller.tab2TextArea1.getText();
    }

    public String loadTextFromTab3(){
        return tab3Controller.tab3TextArea1.getText();
    }

    public void loadTextToTab3(String text){
        tab3Controller.tab3TextArea1.setText(text);
    }

    public void chooseTab1() {
        tabPane.getSelectionModel().select(0);
    }

    public void chooseTab2() {
        tabPane.getSelectionModel().select(1);
    }

    public void chooseTab3() {
        tabPane.getSelectionModel().select(2);
    }



}
