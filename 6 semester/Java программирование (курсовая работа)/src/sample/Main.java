package sample;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Alert;
import javafx.stage.Stage;

public class Main extends Application {

    @Override
    public void start(Stage primaryStage) throws Exception{
        Parent root = FXMLLoader.load(getClass().getResource("main.fxml"));
        primaryStage.setTitle("Курсовая работа");
        primaryStage.setScene(new Scene(root));
        primaryStage.show();
        primaryStage.setResizable(false);
    }


    public static void main(String[] args) {
        launch(args);
    }

    public static void msgalert(String title, String str){
        Alert alert = new Alert(Alert.AlertType.INFORMATION);
        alert.setTitle(title);
        alert.setHeaderText(null);
        alert.setContentText(str);
        alert.showAndWait();
    }



    public static String hide(String str1, String str2){
        System.out.print("Строка, которую нужно спрятать: "+str2 + "\n");
        int count = 0;
        String result = textToBin(str2);
        System.out.print("Строка (в двоичном коде), которую нужно спрятать: "+result + "\n");
        int current_symbol = 0;
        for(int i = 0; i < result.length(); i++){
            char symbol = result.charAt(i);
            if(symbol == '0'){
                for(int j = current_symbol; j < str1.length(); j++){
                    symbol = str1.charAt(j);
                    current_symbol++;
                    if(symbol == ' '){
                        count++;
                    }
                    if(symbol != ' ' && count == 1){
                        count = 0;
                        break;
                    }
                }
            }

            if(symbol == '1'){
                for(int j = current_symbol; j < str1.length(); j++){
                    symbol = str1.charAt(j);
                    current_symbol++;
                    if(symbol == ' '){
                        count++;
                    }
                    if(symbol != ' ' && count == 1){
                        if (count == 1){
                            String newstr = str1;
                            newstr = newstr.substring(0, current_symbol - 1) + " " + newstr.substring(current_symbol - 1);
                            str1 = newstr;
                        }
                        count = 0;
                        break;
                    }
                }
            }
        }

        System.out.print("Текст со спрятанным словом: "+str1 + "\n");
        return str1;

    }

    public static String unhide (String str1){
        String check = "";
        String result = "";
        int count = 0;

        for(int i = 0; i < str1.length(); i++){
            char symbol = str1.charAt(i);
            if(symbol == ' '){
                check += symbol;
                count++;
            }
            if(symbol != ' ' && (count == 1 || count == 2)){
                if (count == 1){result+=0;}
                if (count == 2){result+=1;}
                count = 0;
                check = "";
            }
        }

        System.out.print("Двоичный код из строки: "+result + "\n");
        result = binToText(result);
        System.out.print("Строка из текста: " + result);

        return result;
    }


    public static String binToText(String s){
        String text = "";

        for(int i = 0; i < s.length(); i=i+8) {

            String symbol = s.substring(i, i+8);
            System.out.print(symbol + " - " + i + "\n");
            if (symbol.equals("00000000") && i == 0) msgalert("Ошибка", "Спрятанных данных не найдено!");
            if (symbol.equals("00000000") || symbol .equals("00000001"))break;

            switch (symbol) {
                case "00000001":
                    return text;
                case "00000000":
                    return text;
                case "00001010":
                    text += "\n";
                    break;
                case "00001101":
                    text += "\n";
                    break;
                case "00100000":
                    text += " ";
                    break;
                case "00100001":
                    text += "!";
                    break;
                case "00100010":
                    text += "\"";
                    break;
                case "00100011":
                    text += "#";
                    break;
                case "00100100":
                    text += "$";
                    break;
                case "00100101":
                    text += "%";
                    break;
                case "00100110":
                    text += "&";
                    break;
                case "00100111":
                    text += "'";
                    break;
                case "00101000":
                    text += "(";
                    break;
                case "00101001":
                    text += ")";
                    break;
                case "00101010":
                    text += "*";
                    break;
                case "00101011":
                    text += "+";
                    break;
                case "00101100":
                    text += ",";
                    break;
                case "00101101":
                    text += "-";
                    break;
                case "00101110":
                    text += ".";
                    break;
                case "00101111":
                    text += "/";
                    break;
                case "00110000":
                    text += "0";
                    break;
                case "00110001":
                    text += "1";
                    break;
                case "00110010":
                    text += "2";
                    break;
                case "00110011":
                    text += "3";
                    break;
                case "00110100":
                    text += "4";
                    break;
                case "00110101":
                    text += "5";
                    break;
                case "00110110":
                    text += "6";
                    break;
                case "00110111":
                    text += "7";
                    break;
                case "00111000":
                    text += "8";
                    break;
                case "00111001":
                    text += "9";
                    break;
                case "00111010":
                    text += ":";
                    break;
                case "00111011":
                    text += ";";
                    break;
                case "00111100":
                    text += "<";
                    break;
                case "00111101":
                    text += "=";
                    break;
                case "00111110":
                    text += ">";
                    break;
                case "00111111":
                    text += "?";
                    break;



                case "01000000":
                    text += "@";
                    break;


                case "01011011":
                    text += "[";
                    break;
                case "01011100":
                    text += "\\";
                    break;
                case "01011101":
                    text += "]";
                    break;
                case "01011110":
                    text += "^";
                    break;
                case "01011111":
                    text += "_";
                    break;


                case "11000000":
                    text += "А";
                    break;
                case "11000001":
                    text += "Б";
                    break;
                case "11000010":
                    text += "В";
                    break;
                case "11000011":
                    text += "Г";
                    break;
                case "11000100":
                    text += "Д";
                    break;
                case "11000101":
                    text += "Е";
                    break;
                case "11000110":
                    text += "Ж";
                    break;
                case "11000111":
                    text += "З";
                    break;
                case "11001000":
                    text += "И";
                    break;
                case "11001001":
                    text += "Й";
                    break;
                case "11001010":
                    text += "К";
                    break;
                case "11001011":
                    text += "Л";
                    break;
                case "11001100":
                    text += "М";
                    break;
                case "11001101":
                    text += "Н";
                    break;
                case "11001110":
                    text += "О";
                    break;
                case "11001111":
                    text += "П";
                    break;
                case "11010000":
                    text += "Р";
                    break;
                case "11010001":
                    text += "С";
                    break;
                case "11010010":
                    text += "Т";
                    break;
                case "11010011":
                    text += "У";
                    break;
                case "11010100":
                    text += "Ф";
                    break;
                case "11010101":
                    text += "Х";
                    break;
                case "11010110":
                    text += "Ц";
                    break;
                case "11010111":
                    text += "Ч";
                    break;
                case "11011000":
                    text += "Ш";
                    break;
                case "11011001":
                    text += "Щ";
                    break;
                case "11011010":
                    text += "Ъ";
                    break;
                case "11011011":
                    text += "Ы";
                    break;
                case "11011100":
                    text += "Ь";
                    break;
                case "11011101":
                    text += "Э";
                    break;
                case "11011110":
                    text += "Ю";
                    break;
                case "11011111":
                    text += "Я";
                    break;
                case "11100000":
                    text += "а";
                    break;
                case "11100001":
                    text += "б";
                    break;
                case "11100010":
                    text += "в";
                    break;
                case "11100011":
                    text += "г";
                    break;
                case "11100100":
                    text += "д";
                    break;
                case "11100101":
                    text += "е";
                    break;
                case "11100110":
                    text += "ж";
                    break;
                case "11100111":
                    text += "з";
                    break;
                case "11101000":
                    text += "и";
                    break;
                case "11101001":
                    text += "й";
                    break;
                case "11101010":
                    text += "к";
                    break;
                case "11101011":
                    text += "л";
                    break;
                case "11101100":
                    text += "м";
                    break;
                case "11101101":
                    text += "н";
                    break;
                case "11101110":
                    text += "о";
                    break;
                case "11101111":
                    text += "п";
                    break;
                case "11110000":
                    text += "р";
                    break;
                case "11110001":
                    text += "с";
                    break;
                case "11110010":
                    text += "т";
                    break;
                case "11110011":
                    text += "у";
                    break;
                case "11110100":
                    text += "ф";
                    break;
                case "11110101":
                    text += "х";
                    break;
                case "11110110":
                    text += "ц";
                    break;
                case "11110111":
                    text += "ч";
                    break;
                case "11111000":
                    text += "ш";
                    break;
                case "11111001":
                    text += "щ";
                    break;
                case "11111010":
                    text += "ъ";
                    break;
                case "11111011":
                    text += "ы";
                    break;
                case "11111100":
                    text += "ь";
                    break;
                case "11111101":
                    text += "э";
                    break;
                case "11111110":
                    text += "ю";
                    break;
                case "11111111":
                    text += "я";
                    break;


                case "00010101":
                    text += "\n";
                    break;

                default:
                    msgalert("Ошибка", "Обнаружен неизвестный символ. Извлечение данных приостановлено");
                    System.out.println("TEXT");
                    System.out.println(text);
                    throw new IllegalArgumentException("Invalid symbol: " + symbol);
            }
        }
        return text;
    }

    public static String textToBin(String s){
        String text = "";

        for(int i = 0; i < s.length(); i++) {

            String symbol = s.substring(i, i + 1);
            System.out.print(s.substring(i, i + 1) + " - "+symbol + " - " + i + "\n");

            switch (symbol) {
                case "\n":
                    text += "00001010";
                    break;
                case "\r":
                    text += "00001010";
                    break;
                case " ":
                    text += "00100000";
                    break;
                case "!":
                    text += "00100001";
                    break;
                case "\"":
                    text += "00100010";
                    break;
                case "#":
                    text += "00100011";
                    break;
                case "$":
                    text += "00100100";
                    break;
                case "%":
                    text += "00100101";
                    break;
                case "&":
                    text += "00100110";
                    break;
                case "'":
                    text += "00100111";
                    break;
                case "(":
                    text += "00101000";
                    break;
                case ")":
                    text += "00101001";
                    break;
                case "*":
                    text += "00101010";
                    break;
                case "+":
                    text += "00101011";
                    break;
                case ",":
                    text += "00101100";
                    break;
                case "-":
                    text += "00101101";
                    break;
                case ".":
                    text += "00101110";
                    break;
                case "/":
                    text += "00101111";
                    break;
                case "0":
                    text += "00110000";
                    break;
                case "1":
                    text += "00110001";
                    break;
                case "2":
                    text += "00110010";
                    break;
                case "3":
                    text += "00110011";
                    break;
                case "4":
                    text += "00110100";
                    break;
                case "5":
                    text += "00110101";
                    break;
                case "6":
                    text += "00110110";
                    break;
                case "7":
                    text += "00110111";
                    break;
                case "8":
                    text += "00111000";
                    break;
                case "9":
                    text += "00111001";
                    break;
                case ":":
                    text += "00111010";
                    break;
                case ";":
                    text += "00111011";
                    break;
                case "<":
                    text += "00111100";
                    break;
                case "=":
                    text += "00111101";
                    break;
                case ">":
                    text += "00111110";
                    break;
                case "?":
                    text += "00111111";
                    break;

                case "@":
                    text += "01000000";
                    break;

                case "[":
                    text += "01011011";
                    break;
                case "\\":
                    text += "01011100";
                    break;
                case "]":
                    text += "01011101";
                    break;
                case "^":
                    text += "01011110";
                    break;
                case "_":
                    text += "01011111";
                    break;



                case "{":
                    text += "01111011";
                    break;
                case "|":
                    text += "01111100";
                    break;
                case "}":
                    text += "01111101";
                    break;
                case "~":
                    text += "01111110";
                    break;


                case "А":
                    text += "11000000";
                    break;
                case "Б":
                    text += "11000001";
                    break;
                case "В":
                    text += "11000010";
                    break;
                case "Г":
                    text += "11000011";
                    break;
                case "Д":
                    text += "11000100";
                    break;
                case "Е":
                    text += "11000101";
                    break;
                case "Ж":
                    text += "11000110";
                    break;
                case "З":
                    text += "11000111";
                    break;
                case "И":
                    text += "11001000";
                    break;
                case "Й":
                    text += "11001001";
                    break;
                case "К":
                    text += "11001010";
                    break;
                case "Л":
                    text += "11001011";
                    break;
                case "М":
                    text += "11001100";
                    break;
                case "Н":
                    text += "11001101";
                    break;
                case "О":
                    text += "11001110";
                    break;
                case "П":
                    text += "11001111";
                    break;
                case "Р":
                    text += "11010000";
                    break;
                case "С":
                    text += "11010001";
                    break;
                case "Т":
                    text += "11010010";
                    break;
                case "У":
                    text += "11010011";
                    break;
                case "Ф":
                    text += "11010100";
                    break;
                case "Х":
                    text += "11010101";
                    break;
                case "Ц":
                    text += "11010110";
                    break;
                case "Ч":
                    text += "11010111";
                    break;
                case "Ш":
                    text += "11011000";
                    break;
                case "Щ":
                    text += "11011001";
                    break;
                case "Ъ":
                    text += "11011010";
                    break;
                case "Ы":
                    text += "11011011";
                    break;
                case "Ь":
                    text += "11011100";
                    break;
                case "Э":
                    text += "11011101";
                    break;
                case "Ю":
                    text += "11011110";
                    break;
                case "Я":
                    text += "11011111";
                    break;
                case "а":
                    text += "11100000";
                    break;
                case "б":
                    text += "11100001";
                    break;
                case "в":
                    text += "11100010";
                    break;
                case "г":
                    text += "11100011";
                    break;
                case "д":
                    text += "11100100";
                    break;
                case "е":
                    text += "11100101";
                    break;
                case "ё":
                    text += "11100101";
                    break;
                case "ж":
                    text += "11100110";
                    break;
                case "з":
                    text += "11100111";
                    break;
                case "и":
                    text += "11101000";
                    break;
                case "й":
                    text += "11101001";
                    break;
                case "к":
                    text += "11101010";
                    break;
                case "л":
                    text += "11101011";
                    break;
                case "м":
                    text += "11101100";
                    break;
                case "н":
                    text += "11101101";
                    break;
                case "о":
                    text += "11101110";
                    break;
                case "п":
                    text += "11101111";
                    break;
                case "р":
                    text += "11110000";
                    break;
                case "с":
                    text += "11110001";
                    break;
                case "т":
                    text += "11110010";
                    break;
                case "у":
                    text += "11110011";
                    break;
                case "ф":
                    text += "11110100";
                    break;
                case "х":
                    text += "11110101";
                    break;
                case "ц":
                    text += "11110110";
                    break;
                case "ч":
                    text += "11110111";
                    break;
                case "ш":
                    text += "11111000";
                    break;
                case "щ":
                    text += "11111001";
                    break;
                case "ъ":
                    text += "11111010";
                    break;
                case "ы":
                    text += "11111011";
                    break;
                case "ь":
                    text += "11111100";
                    break;
                case "э":
                    text += "11111101";
                    break;
                case "ю":
                    text += "11111110";
                    break;
                case "я":
                    text += "11111111";
                    break;



                default:
                    msgalert("Ошибка", "Обнаружен неизвестный символ. Скрытие данных приостановлено");
                    System.out.println("TEXT");
                    System.out.println(text);
                    throw new IllegalArgumentException("Invalid symbol: " + symbol + " N - "+ i);
            }

        }
        text+="00000001";
        return text;
    }
}
