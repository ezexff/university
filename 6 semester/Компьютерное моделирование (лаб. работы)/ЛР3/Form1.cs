using System;
using System.IO;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        bool flag = false;
        int step,min;
        
        public Form1()
        {
            InitializeComponent();
            mainGrid.Rows.Add(4);
            secondGrid.Rows.Add(4);
            b_next.Enabled = false;
        }
        bool check_table()
        {
            bool f = true;
            for (int i = 0; i < mainGrid.Rows.Count; i++)
                for (int j = 0; j < mainGrid.Columns.Count; j++)
                    if (mainGrid.Rows[i].Cells[j].Value == null)
                        f = false;
            return f;
        }
        private void b_start_Click(object sender, EventArgs e)
        {
            if (check_table())
            {
                if (!flag)
                {
                    b_load.Enabled = false;
                    b_next.Enabled = true;
                    b_start.Text = "Стоп";
                    //b_start.BackColor = Color.LightCoral;
                    flag = true;
                    step = 0;
                    for (int i = 0; i < mainGrid.Rows.Count; i++)
                        for (int j = 0; j < mainGrid.Columns.Count; j++)
                            secondGrid.Rows[i].Cells[j].Value = mainGrid.Rows[i].Cells[j].Value;
                }
                else if (flag)
                {
                    b_load.Enabled = true;
                    b_next.Enabled = false;
                    b_start.Text = "Запустить";
                    //b_start.BackColor = Color.LightGreen;
                    flag = false;
                    secondGrid.Rows.Clear();
                    secondGrid.Rows.Add(4);
                }
            }
            else MessageBox.Show("Матрица заполнена не полностью");
        }
        private void b_load_Click(object sender, EventArgs e)
        {
            mainGrid.Rows.Clear();
            //StreamReader fs = new StreamReader("Матрица.txt");
            //string temp;
            //while ((temp = fs.ReadLine()) != null)
            //    mainGrid.Rows.Add(temp.Split('\t'));     
            string @in = new System.IO.StreamReader(@"Матрица1.txt").ReadToEnd();

            var L = @in
                    .Split(new string[] { Environment.NewLine }, StringSplitOptions.None)
                    .Select(s => s.Split(' '))
                    .ToList();

            mainGrid.ColumnCount = L.First().Count();
            mainGrid.RowCount = L.Count();

            for (int x = 0; x < mainGrid.ColumnCount; x++)
                for (int y = 0; y < mainGrid.RowCount; y++)
                    mainGrid[x, y].Value = L[y][x];
        }
        private void b_next_Click(object sender, EventArgs e)
        {
            switch (step)
            {
                //Вычитание по строкам
                case 0:     
                    {
                        for(int i=0; i<secondGrid.Rows.Count;i++){
                            min = Int16.MaxValue;
                            for (int j = 0; j < secondGrid.Columns.Count; j++)
                                if(Convert.ToInt16(secondGrid.Rows[i].Cells[j].Value.ToString())<min)
                                    min=Convert.ToInt16(secondGrid.Rows[i].Cells[j].Value.ToString());
                            for (int j = 0; j < secondGrid.Columns.Count; j++)
                                secondGrid.Rows[i].Cells[j].Value=Convert.ToInt16(secondGrid.Rows[i].Cells[j].Value.ToString())-min;
                        }
                        step++;
                        break;
                    }
                case 1:
                    {
                        for(int i=0; i<secondGrid.Columns.Count;i++){
                            min = Int16.MaxValue;
                            for (int j = 0; j < secondGrid.Rows.Count; j++)
                                if(Convert.ToInt16(secondGrid.Rows[j].Cells[i].Value.ToString())<min)
                                    min=Convert.ToInt16(secondGrid.Rows[j].Cells[i].Value.ToString());
                            for (int j = 0; j < secondGrid.Rows.Count; j++)
                                secondGrid.Rows[j].Cells[i].Value=Convert.ToInt16(secondGrid.Rows[j].Cells[i].Value.ToString())-min;
                        }
                        step++;
                        break;
                    }
                case 2:
                    {
                        for (int i = 0; i < secondGrid.Columns.Count; i++)
                        {
                            for (int j = 0; j < secondGrid.Rows.Count; j++)
                                if (Convert.ToInt16(secondGrid.Rows[j].Cells[i].Value.ToString()) != 0)
                                    secondGrid.Rows[j].Cells[i].Value = "-";
                            else
                                    secondGrid.Rows[j].Cells[i].Value = "0";
                        }
                        step++;
                        break;
                    }
                case 3:
                    {
                        int s = 0;
                        for (int i = 0; i < secondGrid.Columns.Count; i++)
                        {
                            for (int j = 0; j < secondGrid.Rows.Count; j++)
                                if (secondGrid.Rows[j].Cells[i].Value.ToString() == "0")
                                {
                                    secondGrid.Rows[j].Cells[i].Value = "1";
                                    s = s + Convert.ToInt16(mainGrid.Rows[j].Cells[i].Value.ToString());
                                    textBox1.Text = textBox1.Text + mainGrid.Rows[j].Cells[i].Value.ToString() + "+";
                                }
                        }
                        string s1 = s.ToString();
                        textBox1.Text = textBox1.Text + "=" + s1;
                        step++;
                        break;
                    }
                default:
                    break;
            }
        }
    }
}
