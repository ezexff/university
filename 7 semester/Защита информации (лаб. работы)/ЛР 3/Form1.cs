using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LR_4
{
	public partial class Form1 : Form
	{
		public Form1()
		{
			InitializeComponent();
		}

		ulong start, end;
		bool check = false;
		int cnt = 0;
		ulong[] mas1 = new ulong[12];
		byte[] mas3 = new byte[16];
		ushort[] mas4 = new ushort[12];
		byte[] s = new byte[128];
		byte[] h = new byte[24];
		List<byte> key = new List<byte>() { 5, 11, 6, 8, 3, 13, 9, 7, 10, 4, 12, 2, 15, 1, 0, 14 };

		KeyEventArgs pre = null;

		private void button1_Click(object sender, EventArgs e)
		{
			check = true;
			start = RDTSC.Timestamp();
			cnt = 0;
			mas1 = new ulong[12];
		}

		private void Form1_KeyDown(object sender, KeyEventArgs e)
		{
			if(pre == null) pre = e;
			if(check)
			{
				if(e.KeyCode != pre.KeyCode || cnt == 0)
				{
					if(cnt < 12)
					{
						end = RDTSC.Timestamp();
						mas1[cnt] = end - start;
						start = RDTSC.Timestamp();
						cnt++;
						textBox2.Text = cnt.ToString();
						pre = e;
						if(cnt == 12)
						{
							check = false;
							cnt = 0;
							end = RDTSC.Timestamp();
							richTextBox3.Text = string.Join(" ", mas1);
							textBox2.Text = cnt.ToString();
							Hash_Al();
							button1.Enabled = true;
						}
					}
				}
			}
		}

        
		private void button1_KeyDown(object sender, KeyEventArgs e)
		{
			if(pre == null) pre = e;
			Form1_KeyDown(sender, e);
		}

		private void Hash_Al()
		{
			byte x1, x2, x3, x4;
			for(byte j = 0; j < 12; j++)
			{
				x1 = 0;
				x2 = 0;
				x3 = 0;
				x4 = 0;
				for(byte i = 0; i < 16; i++)
				{
					mas3[i] = (byte)(((uint)mas1[j] >> (64 - (i + 1) * 4)) & 15);
				}
				for(int i = 0; i < 4; i++)
				{
					x1 = (byte)(x1 ^ mas3[i * 4]);
					x2 = (byte)(x2 ^ mas3[i * 4 + 1]);
					x3 = (byte)(x3 ^ mas3[i * 4 + 2]);
					x4 = (byte)(x4 ^ mas3[i * 4 + 3]);
					x1 = key[x1];
					x2 = key[x2];
					x3 = key[x3];
					x4 = key[x4];
				}
				mas4[j] = (ushort)((x1 << 12) + (x2 << 8) + (x3 << 4) + x4);
			}
			richTextBox4.Text = string.Join(" ", mas4);
			string str = String.Empty;
			for(int i = 0; i < 12; i++)
			{
				for(int j = 0; j < 8; j++)
				{
					str += Convert.ToChar((long)mas4[i]).ToString();
				}
			}
			str += str.Length.ToString();
			var len = str.Length;
			for(int i = len; i < 128; i++)
			{
				str += str[i - len].ToString();
			}

			s = System.Text.Encoding.UTF8.GetBytes(str.ToCharArray()).Take(128).ToArray();
			byte[] rez2 = new byte[24];
			byte[] rez3 = new byte[24];
			byte[] rez4 = new byte[24];
			byte[] rez5 = new byte[24];
			rez2[0] = G(1, h[0]);
			for(int i = 1; i < 24; i++)
			{
				rez2[i] = G(rez2[i - 1], h[i]);
			}
			rez3[0] = T(rez2[0], 1, s[0], out rez4[0]);
			for(int i = 1; i < 24; i++)
			{
				rez3[i] = T(rez2[i], rez2[i - 1], rez4[i - 1], out rez4[i]);
			}
			for(int i = 1; i < 128; i++)
			{
				for(int j = 0; j < 24; j++)
				{
					rez2[j] = rez3[j];
				}
				for(int j = 0; j < 24; j++)
				{
					rez5[j] = rez4[j];
				}
				rez3[0] = T(rez2[0], s[i - 1], s[i], out rez4[0]);

				for(int j = 1; j < 24; j++)
				{
					rez3[j] = T(rez2[j], rez5[j - 1], rez4[j - 1], out rez4[j]);
				}
			}
            richTextBox1.Text = string.Join("", "Сумма: " + rez3.Sum(sa => Convert.ToUInt16(sa)).ToString());
		}

		private byte G(byte x, byte y)
		{
			x = (byte)(x + 23);
			x = ROL(x, 3);
			return (byte)(x + y);
		}

		private byte T(byte x, byte y, byte z, out byte a)
		{
			byte o;
			a = 0;
			z = ROL(z, 3);
			o = (byte)(x ^ z);
			a = o;
			y = (byte)(y ^ 165);
			return (byte)(y + o);
		}

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private byte ROL(byte number, int shift)
		{
			shift %= 8;
			int v = number & 0xFF;

			return (byte)((v << shift) | (v >> (8 - shift)));
		}
	}
}
