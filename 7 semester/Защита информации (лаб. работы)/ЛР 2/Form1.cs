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
        public string inputString; //входная строка

        public Form1()
        {
            InitializeComponent();

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            inputString = textBox1.Text;

            // а) входные данные дополняются справа числом в текстовом представлении, означающим длину данных
            inputString = inputString + inputString.Length;

            // б) получившийся набор данных расширяется циклическим повтором до длины в 128 байт
            string extendedString = "";

            while (extendedString.Length < 128)
                for (int i = 0; i < inputString.Length; i++)
                {
                    if (extendedString.Length < 128)
                        extendedString += inputString[i];
                    else break;
                }

            // в) исходный набор из 24 байт хеш-суммы h[0]..h[23] заполняется нулями, и затем обрабатывается по схеме (рис.1)

            byte[][] h = new byte[25][];
            h[0] = new byte[2];
            h[0][0] = h[0][1] = 1;

            // заполняем 1-ый столбец G
            for (int i = 1; i < 25; i++)
            {
                h[i] = new byte[2];
                h[i][0] = h[i][1] = G(0, h[i - 1][0]);
            }

            // заполняем остальные столбцы T
            for (int i = 0; i < 128; i++)
            {
                byte[][] htmp = new byte[25][];
                htmp[0] = new byte[2];
                htmp[0][0] = htmp[0][1] = (byte)extendedString[i];
                for (int j = 1; j < 25; j++)
                {
                    htmp[j] = T(h[j][1], h[j - 1][0], htmp[j - 1][0]);
                }
                h = htmp;
            }

            // заполняем переменную результатом хеш-суммы из последнего столбца
            uint hsum = 0;
            for (int i = 1; i < 25; i++)
                hsum += h[i][1];

            textBox2.Text = hsum.ToString();
        }

        static byte G(byte h, byte g)
        {
            byte temp = (byte)(g + 23);
            temp = shl(temp, 3);
            return (byte)(temp + h);
        }

        static byte[] T(byte h, byte t, byte s)
        {
            var temp1 = (byte)(t ^ 165);
            var temp2 = shl(s, 3);
            temp2 ^= h;
            byte[] res = new byte[2];
            res[0] = temp2;
            res[1] = (byte)(temp1 + temp2);

            return res;
        }

        static byte shl(byte value, int size)
        {
            size %= 8;
            return (byte)((value << size) | (value >> (8 - size)));
        }
    }
}
