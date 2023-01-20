package sample;

import javafx.fxml.FXML;
import javafx.scene.control.TextArea;

public class Tab3Controller {

    private MainController main;

    @FXML
    public TextArea tab3TextArea1;

    public void init(MainController mainController) {
        main = mainController;
    }
}
