using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LR_3
{
    public partial class Form1 : Form
    {
        private const int sizeOfBlock = 64;
        private const int sizeOfChar = 8;
        private const int shiftKey = 3;
        private const int quantityOfRounds = 12;
        string[] Blocks;
        string[] OldBlocks;

        byte[] Table;

        private string EncryptResult;

        private int currentBlock = 0;

        //string INIT_VECTOR = "0000000000000000000000000000000000000000000000000010011010101010"; // 9898 вектор инициализации
        string INIT_VECTOR = "0100100011000101010001111000010000100000010001000010011010101010"; // 5243675973945403050 вектор инициализации
        string INIT_VECTOR1 = "1101000101010111000101101110110000101110010101000110001001001000";

        public Form1()
        {
            InitializeComponent();

            Table = new byte[256];

            for (int i = 0; i <= 255; i++)
            {
                Table[i] = Convert.ToByte((i * (i + 1) >> 1) % 256);
            }

            comboBox1.SelectedIndex = 0;

            richTextBox1.Text = "hello Bob";
            textBoxEncodeKeyWord.Text = "ffff";
        }

        //зашифровать
        private void buttonEncrypt_Click(object sender, EventArgs e)
        {
            if (textBoxEncodeKeyWord.Text.Length > 0)
            {
                //string s = "Text";
                string s = richTextBox1.Text;

                Debug.WriteLine("Текст для шифорования: " + s);

                string key = textBoxEncodeKeyWord.Text;

                s = StringToRightLength(s);

                CutStringIntoBlocks(s);

                key = CorrectKeyWord(key, s.Length / (2 * Blocks.Length));
                textBoxEncodeKeyWord.Text = key;
                key = StringToBinaryFormat(key);

                string tmp_key = INIT_VECTOR;

                switch (comboBox1.SelectedIndex)
                {
                    //ECB
                    case 0:
                        {
                            for (int j = 0; j < quantityOfRounds; j++)
                            {
                                //Debug.WriteLine(Blocks[0] + "\n");
                                for (int i = 0; i < Blocks.Length; i++)
                                {
                                    currentBlock = i;

                                    Blocks[i] = EncodeOneRound(Blocks[i], key);
                                }

                                key = KeyToNextRound(key);
                            }

                            key = KeyToPrevRound(key);
                        }
                        break;

                    //CBC
                    case 1:
                        {


                            //for (int j = 0; j < quantityOfRounds; j++)
                            //{
                                Blocks[0] = XOR(Blocks[0], INIT_VECTOR); // складываем 1-ый блок с вектором инициализации
                                Blocks[0] = EncodeOneRound(Blocks[0], key); // выполняем шифрование 1-го блока

                                for (int i = 1; i < Blocks.Length; i++)
                                {
                                    currentBlock = i;

                                    Blocks[i] = EncodeOneRound(Blocks[i], key);

                                    Blocks[i] = XOR(Blocks[i - 1], Blocks[i]); // шифруем очередной блок, с использованием предыдущего зашифрованного

                                }

                                //key = KeyToNextRound(key);
                            //}
                        }
                        break;

                    //CFB
                    case 2:
                        {
                            Blocks[0] = EncodeOneRound(Blocks[0], key); // выполняем шифрование 1-го блока
                            Blocks[0] = XOR(Blocks[0], INIT_VECTOR); // складываем 1-ый блок с вектором инициализации

                            for (int i = 1; i < Blocks.Length; i++)
                            {
                                currentBlock = i;

                                Blocks[i] = XOR(Blocks[i - 1], Blocks[i]); // шифруем очередной блок, с использованием предыдущего зашифрованного

                                Blocks[i] = EncodeOneRound(Blocks[i], key);
                            }
                        }
                        break;

                    //IGE
                    case 3:
                        {
                            Blocks[0] = EncodeOneRound(Blocks[0], key); // выполняем шифрование 1-го блока
                            Blocks[0] = XOR(Blocks[0], INIT_VECTOR1); // складываем 1-ый блок с вектором инициализации

                            for (int i = 1; i < Blocks.Length; i++)
                            {
                                currentBlock = i;

                                Blocks[i] = XOR(Blocks[i - 1], Blocks[i]); // шифруем очередной блок, с использованием предыдущего зашифрованного

                                Blocks[i] = EncodeOneRound(Blocks[i], key);
                            }
                        }
                        break;
                }

                for (int i = 0; i < Blocks.Length; i++)
                {
                    //Debug.WriteLine("B["+i+"]!  " + Blocks[i]);
                }
                //

                textBoxDecodeKeyWord.Text = StringFromBinaryToNormalFormat(key);

                string result = "";

                for (int i = 0; i < Blocks.Length; i++)
                    result += Blocks[i];

                richTextBox2.Text = StringFromBinaryToNormalFormat(result);
                Debug.WriteLine("Зашифрованный текст: " + StringFromBinaryToNormalFormat(result) + "\n");
                EncryptResult = StringFromBinaryToNormalFormat(result);
            }
            else
                MessageBox.Show("Введите ключ!");
        }

        //расшифровать
        private void buttonDecipher_Click(object sender, EventArgs e)
        {
            if (textBoxDecodeKeyWord.Text.Length > 0)
            {
                string s = EncryptResult;

                string key = StringToBinaryFormat(textBoxDecodeKeyWord.Text);

                string tmp_key = INIT_VECTOR; // 9898 вектор инициализации

                s = StringToBinaryFormat(s);

                CutBinaryStringIntoBlocks(s);

                int counter = Blocks.Length - 1;
                int blocks_length = Blocks.Length - 1;

                switch (comboBox1.SelectedIndex)
                {
                    //ECB
                    case 0:
                        {
                            for (int j = 0; j < quantityOfRounds; j++)
                            {
                                for (int i = 0; i < Blocks.Length; i++)
                                {
                                    currentBlock = i;

                                    Blocks[i] = DecodeOnRound(Blocks[i], key);
                                }

                                key = KeyToPrevRound(key);
                            }
                        }
                        break;

                    //CBC
                    case 1:
                        {
                            //for (int j = 0; j < quantityOfRounds; j++)
                            //{
                            for (int i = 1; i < Blocks.Length; i++)
                            {
                                currentBlock = i;

                                Blocks[i] = XOR(Blocks[i - 1], Blocks[i]);

                                Blocks[i] = DecodeOnRound(Blocks[i], key);

                                 // расшифровываем очередной блок, с использованием предыдущег

                            }

                            Blocks[0] = DecodeOnRound(Blocks[0], key); // выполняем шифрование 1-го блока
                            Blocks[0] = XOR(Blocks[0], INIT_VECTOR); // складываем 1-ый блок с вектором инициализации
                                                                     //key = KeyToPrevRound(key);
                                                                     //}
                            //key = KeyToNextRound(key);
                        }
                        break;

                    //CFB
                    case 2:
                        {
                            for (int i = 1; i < Blocks.Length; i++)
                            {
                                currentBlock = i;

                                Blocks[i] = DecodeOnRound(Blocks[i], key);

                                Blocks[i] = XOR(Blocks[i - 1], Blocks[i]); // шифруем очередной блок, с использованием предыдущего зашифрованного

                            }

                            Blocks[0] = XOR(Blocks[0], INIT_VECTOR); // складываем 1-ый блок с вектором инициализации
                            Blocks[0] = DecodeOnRound(Blocks[0], key); // выполняем шифрование 1-го блока
                        }
                        break;

                    //OFB
                    case 3:
                        {
                            for (int i = 1; i < Blocks.Length; i++)
                            {
                                currentBlock = i;

                                Blocks[i] = DecodeOnRound(Blocks[i], key);

                                Blocks[i] = XOR(Blocks[i - 1], Blocks[i]); // шифруем очередной блок, с использованием предыдущего зашифрованного

                            }

                            Blocks[0] = XOR(Blocks[0], INIT_VECTOR1); // складываем 1-ый блок с вектором инициализации
                            Blocks[0] = DecodeOnRound(Blocks[0], key); // выполняем шифрование 1-го блока
                        }
                        break;
                }

                textBoxEncodeKeyWord.Text = StringFromBinaryToNormalFormat(key);

                string result = "";

                for (int i = 0; i < Blocks.Length; i++)
                    result += Blocks[i];

                richTextBox3.Text = StringFromBinaryToNormalFormat(result);
                Debug.WriteLine("Расшифорованный текст: " + StringFromBinaryToNormalFormat(result));
            }
            else
                MessageBox.Show("Введите ключ!");
        }

        //выполняем подстановку значений из таблицы
        private string EncryptSubstitution(String s, int n)
        {
            String A = s.Substring(0, 8);
            String B = s.Substring(8, 8);
            String C = s.Substring(16, 8);
            String D = s.Substring(24, 8);

            String output = "";

            int a = Convert.ToInt32(A, 2);
            output += Convert.ToString(Table[a], 2).PadLeft(8, '0');

            int b = Convert.ToInt32(B, 2);
            output += Convert.ToString(Table[b], 2).PadLeft(8, '0');

            int c = Convert.ToInt32(C, 2);
            output += Convert.ToString(Table[c], 2).PadLeft(8, '0');

            int d = Convert.ToInt32(D, 2);
            output += Convert.ToString(Table[d], 2).PadLeft(8, '0');

            return output;
        }

        //доводим строку до размера, чтобы делилась на sizeOfBlock
        private string StringToRightLength(string input)
        {
            while (((input.Length * sizeOfChar) % sizeOfBlock) != 0)
                input += "#";

            return input;
        }

        //разбиение обычной строки на блоки
        private void CutStringIntoBlocks(string input)
        {
            Blocks = new string[(input.Length * sizeOfChar) / sizeOfBlock];
            OldBlocks = new string[(input.Length * sizeOfChar) / sizeOfBlock];

            int lengthOfBlock = input.Length / Blocks.Length;

            for (int i = 0; i < Blocks.Length; i++)
            {
                Blocks[i] = input.Substring(i * lengthOfBlock, lengthOfBlock);
                Blocks[i] = StringToBinaryFormat(Blocks[i]);

                OldBlocks[i] = input.Substring(i * lengthOfBlock, lengthOfBlock);
                OldBlocks[i] = StringToBinaryFormat(OldBlocks[i]);
            }
        }

        //разбиение двоичной строки на блоки
        private void CutBinaryStringIntoBlocks(string input)
        {
            Blocks = new string[input.Length / sizeOfBlock];
            OldBlocks = new string[input.Length / sizeOfBlock];

            int lengthOfBlock = input.Length / Blocks.Length;

            for (int i = 0; i < Blocks.Length; i++) {
                Blocks[i] = input.Substring(i * lengthOfBlock, lengthOfBlock);
                OldBlocks[i] = input.Substring(i * lengthOfBlock, lengthOfBlock);
            }
        }

        //перевод строки в двоичный формат
        private string StringToBinaryFormat(string input)
        {
            string output = "";

            for (int i = 0; i < input.Length; i++)
            {
                string char_binary = Convert.ToString(input[i], 2);

                while (char_binary.Length < sizeOfChar)
                    char_binary = "0" + char_binary;

                output += char_binary;
            }

            return output;
        }

        //доводим длину ключа до нужной
        private string CorrectKeyWord(string input, int lengthKey)
        {
            if (input.Length > lengthKey)
                input = input.Substring(0, lengthKey);
            else
                while (input.Length < lengthKey)
                    input = "0" + input;

            return input;
        }

        //шифрование один раунд
        private string EncodeOneRound(string input, string key)
        {
            string L = input.Substring(0, input.Length / 2);
            //L = EncryptSubstitution(L, currentBlock);
            string R = input.Substring(input.Length / 2, input.Length / 2);

            return (R + XOR(L, f(R, key)));
        }

        //расшифровка один раунд
        private string DecodeOnRound(string input, string key)
        {
            string L = input.Substring(0, input.Length / 2);
            //L = DecipherSubstitution(L, currentBlock);
            string R = input.Substring(input.Length / 2, input.Length / 2);

            return (XOR(f(L, key), R) + L);
        }

        //XOR двух строк с двоичными данными
        private string XOR(string s1, string s2)
        {
            string result = "";

            for (int i = 0; i < s1.Length; i++)
            {
                bool a = Convert.ToBoolean(Convert.ToInt32(s1[i].ToString()));
                bool b = Convert.ToBoolean(Convert.ToInt32(s2[i].ToString()));

                if (a ^ b)
                    result += "1";
                else
                    result += "0";
            }
            return result;
        }

        //XOR двух строк с двоичными данными
        private string XOR_(string s1, string s2)
        {
            string result = "";
            string extended_key = "00000000000000000000000000000000" + s2;

            for (int i = 0; i < s1.Length; i++)
            {
                bool a = Convert.ToBoolean(Convert.ToInt32(s1[i].ToString()));
                bool b = Convert.ToBoolean(Convert.ToInt32(extended_key[i].ToString()));

                if (a ^ b)
                    result += "1";
                else
                    result += "0";
            }
            return result;
        }

        //шифрующая функция f. в данном случае это XOR
        private string f(string r_or_l, string k)
        {
            //r_or_l = EncryptSubstitution(r_or_l, currentBlock);
            //return XOR(r_or_l, k);

            r_or_l = EncryptSubstitution(r_or_l, currentBlock);
            string result = XOR(r_or_l, k);
            result = KeyToNextRound(result);
            result = EncryptSubstitution(result, currentBlock);
            return result;
        }

        //вычисление ключа для следующего раунда шифрования. циклический сдвиг >> 3
        private string KeyToNextRound(string key)
        {
            for (int i = 0; i < shiftKey; i++)
            {
                key = key[key.Length - 1] + key;
                key = key.Remove(key.Length - 1);
            }

            return key;
        }

        //вычисление ключа для следующего раунда расшифровки. циклический сдвиг << 3
        private string KeyToPrevRound(string key)
        {
            for (int i = 0; i < shiftKey; i++)
            {
                key = key + key[0];
                key = key.Remove(0, 1);
            }

            return key;
        }

        //переводим строку с двоичными данными в символьный формат
        private string StringFromBinaryToNormalFormat(string input)
        {
            string output = "";

            while (input.Length > 0)
            {
                string char_binary = input.Substring(0, sizeOfChar);
                input = input.Remove(0, sizeOfChar);

                int a = 0;
                int degree = char_binary.Length - 1;

                foreach (char c in char_binary)
                    a += Convert.ToInt32(c.ToString()) * (int)Math.Pow(2, degree--);

                output += ((char)a).ToString();
            }

            return output;
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void buttonСlear_Click(object sender, EventArgs e)
        {
            richTextBox1.Clear();
            richTextBox2.Clear();
            richTextBox3.Clear();
            textBoxDecodeKeyWord.Clear();
            textBoxEncodeKeyWord.Clear();
        }
    }
}
