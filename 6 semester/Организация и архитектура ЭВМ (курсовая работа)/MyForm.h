#pragma once

#include<iostream>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net::NetworkInformation;
	using namespace System::Text;

	/// <summary>
	/// —водка дл¤ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: int a = 0;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(51, 32);
			this->textBox1->MaxLength = 5;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(51, 75);
			this->textBox2->MaxLength = 5;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(76, 213);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Переход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(723, 22);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(373, 243);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1021, 280);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Операнд 1 (dec)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Операнд 2 (dec)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(723, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Лог";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"+", L"-" });
			this->comboBox1->Location = System::Drawing::Point(12, 31);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox1->Size = System::Drawing::Size(33, 21);
			this->comboBox1->TabIndex = 8;
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"+", L"-" });
			this->comboBox2->Location = System::Drawing::Point(12, 74);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox2->Size = System::Drawing::Size(33, 21);
			this->comboBox2->TabIndex = 9;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(168, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(534, 253);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Операнд 2 (bin)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 110);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Операнд 1 (bin)";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 172);
			this->textBox3->MaxLength = 5;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(139, 20);
			this->textBox3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 129);
			this->textBox4->MaxLength = 5;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(139, 20);
			this->textBox4->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1120, 327);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"АЛУ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void fromDecToBin(int x, int m[], bool s)
		{

			int div = 3;
			int mod;
			int i = 0;
			while (div > 1) {
				div = x / 2;
				mod = x % 2;
				x = x / 2;
				m[i] = mod;
				i++;
			}
			m[i] = div;

			if (!s) { m[15] = 1; }

			int tmp = 0;
			int r[16]{};
			for (int i = 15; i >= 0; i--) {
				r[tmp] = m[i];
				tmp++;
			}

			//richTextBox1->Text += "op: ";
			for (int i = 0; i <= 15; i++) {
				m[i] = r[i];
				//richTextBox1->Text += m[i];
			}

			//richTextBox1->Text += "b\n";

		}

		void mul(int op1[], int op2[], int result[]) {
			int tmp_sign1 = op1[0];
			int tmp_sign2 = op2[0];
			op1[0] = 0;
			op2[0] = 0;
			int i = 15; //Счётчик разрядов op2
			bool tr = false; //Признак переноса
			bool c = false;
			bool ov = false; //Признак переполнения
			while (i != -1) {
				tr = false;
				if (op2[i] == 1) {
					for (int j = 15; j >= 0; j--){
						if ((result[j] == 1 && op1[j] == 1) && tr) { 
							tr = true;
							result[j] = 1;
							continue;
						}
						if ((result[j] == 1 && op1[j] == 1) && !tr) {
							tr = true;
							result[j] = 0;
							continue;
						}

						if (((result[j] == 0 && op1[j] == 1) || (result[j] == 1 && op1[j] == 0)) && tr) { 
							tr = true;
							result[j] = 0;
							continue;
						}
						if (((result[j] == 0 && op1[j] == 1) || (result[j] == 1 && op1[j] == 0)) && !tr) {
							tr = false;
							result[j] = 1;
							continue;
						}

						if (result[j] == 0 && op1[j] == 0 && tr) { 
							tr = false;
							result[j] = 1; 
							continue;
						}
						if (result[j] == 0 && op1[j] == 0 && !tr) {
							tr = false;
							result[j] = 0;
							continue;
						}
					}

					if (result[31] == 1) { c = true; }

					richTextBox1->Text += "1 + A ";
					for (int i = 0; i <= 15; i++) {
						richTextBox1->Text += op1[i];
					}
					richTextBox1->Text += "\n";
					richTextBox1->Text += "_____________________________________\n";


					if (result[0] == 1) { ov = true; }

					richTextBox1->Text += "      = ";
					for (int i = 0; i <= 31; i++) {
						richTextBox1->Text += result[i];
					}
					richTextBox1->Text += "  |  C - " + c + " & OV - " + ov + "\n";
				}


				for (int h = 32 - 1; h >= 0; h--)
				{
					if (h < 1) result[h] = 0; else
						result[h] = result[h - 1];
					if (h < 1 && tr) { result[h] = 1; }
				}

				richTextBox1->Text += "0  --> ";
				for (int i = 0; i <= 31; i++) {
					richTextBox1->Text += result[i];
				}
				richTextBox1->Text += "\n";
				
				
				i--;
			}
			

			op1[0] = tmp_sign1;
			op2[0] = tmp_sign2;

			if (op1[0] != op2[0]) result[0] = 1;
			richTextBox1->Text += "_____________________________________\n";
			richTextBox1->Text += "Res:  ";
			for (int i = 0; i <= 31; i++) {
				richTextBox1->Text += result[i];
			}
			richTextBox1->Text += "  |  C - " + tr + " & OV - " + ov + "\n";
		}

		void equal(int op1[], int op2[], int result[]){
			for (int i = 0; i <= 15; i++) {
				if (op1[i] == 0 && op2[i] == 0) { 
					result[i] = 1; 
				}
				if (op1[i] == 1 && op2[i] == 0) {
					result[i] = 0;
				}
				if (op1[i] == 0 && op2[i] == 1) {
					result[i] = 0;
				}
				if (op1[i] == 1 && op2[i] == 1) {
					result[i] = 1;
				}
			}

			richTextBox1->Text += "Equal: ";
			for (int i = 0; i <= 15; i++) {
				richTextBox1->Text += result[i];
			}
		}

		void fromBinToDec(int m[]){
			int r = 0;
			for (int i = 0; i <= 31; i++){
				r += m[31 - i] * pow(2, i);
			}
			richTextBox1->Text += "Res: " + r + "d\n";
		}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		comboBox1->SelectedIndex = 0;
		comboBox2->SelectedIndex = 0;
		pictureBox1->Image = Image::FromFile("graph.png");
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if (textBox1->Text == "" || textBox2->Text == ""){
			MessageBox::Show("op1 or op2 is empty", "Ошибка");
		}
		else {


			switch (a) {
			case 0: {
				richTextBox1->Text += "op1: " + textBox1->Text + "d\n";
				richTextBox1->Text += "op2: " + textBox2->Text + "d\n";

				textBox4->Text = comboBox1->Text;
				textBox3->Text = comboBox2->Text;

				int op1 = Convert::ToInt32(textBox1->Text);
				int op2 = Convert::ToInt32(textBox2->Text);
				int op1_bin[16]{};
				int op2_bin[16]{};
				if (op1 > 32767 || op2 > 32767) {
					MessageBox::Show("op1 || op2 > 32767", "Ошибка");
				}
				else {
					bool sign = true;

					if (comboBox1->SelectedIndex == 0) { sign = true; }
					else { sign = false; }
					fromDecToBin(op1, op1_bin, sign);

					if (comboBox2->SelectedIndex == 0) { sign = true; }
					else { sign = false; }
					fromDecToBin(op2, op2_bin, sign);
				}
				for (int i = 0; i <= 15; i++) {
					textBox4->Text += op1_bin[i];
				}

				for (int i = 0; i <= 15; i++) {
					textBox3->Text += op2_bin[i];
				}

				pictureBox1->Image = Image::FromFile("graph0.png");
				a++;
				break;
			}
			case 1: {
				textBox4->Text = comboBox1->Text;
				textBox3->Text = comboBox2->Text;

				int op1 = Convert::ToInt32(textBox1->Text);
				int op2 = Convert::ToInt32(textBox2->Text);
				int op1_bin[16]{};
				int op2_bin[16]{};
				if (op1 > 32767 || op2 > 32767) {
					MessageBox::Show("op1 || op2 > 32767", "Ошибка");
				}
				else {
					bool sign = true; //Проверка знака

					if (comboBox1->SelectedIndex == 0) { sign = true; }
					else { sign = false; }
					fromDecToBin(op1, op1_bin, sign);

					if (comboBox2->SelectedIndex == 0) { sign = true; }
					else { sign = false; }
					fromDecToBin(op2, op2_bin, sign);
				}
				richTextBox1->Text += "op1: ";
				for (int i = 0; i <= 15; i++) {
					richTextBox1->Text += op1_bin[i];
					textBox4->Text += op1_bin[i];
				}
				richTextBox1->Text += "b\n";

				richTextBox1->Text += "op2: ";
				for (int i = 0; i <= 15; i++) {
					richTextBox1->Text += op2_bin[i];
					textBox3->Text += op2_bin[i];
				}
				richTextBox1->Text += "b\n";

				pictureBox1->Image = Image::FromFile("graph1.png");
				a++;
				break;
			}
			case 2: {
				int op1 = Convert::ToInt32(textBox1->Text);
				int op2 = Convert::ToInt32(textBox2->Text);
				int op1_bin[16]{};
				int op2_bin[16]{};
				if (op1 > 32767 || op2 > 32767) {
					MessageBox::Show("op1 || op2 > 32767", "Ошибка");
				}
				else {
					bool sign = true; //Проверка знака

					if (comboBox1->SelectedIndex == 0) { sign = true; }
					else { sign = false; }
					fromDecToBin(op1, op1_bin, sign);

					if (comboBox2->SelectedIndex == 0) { sign = true; }
					else { sign = false; }
					fromDecToBin(op2, op2_bin, sign);
				}
				int mul_result[32]{};
				richTextBox1->Text += "Здесь в колонке 'В', сверху вниз, записаны разряды множителя, начиная с младших. А в следующем столбце - символика действий ";
				richTextBox1->Text += "предпринимаемых в зависимости от значения соответствующего разряда множителя.Смысл этих символов следующий :\n";
				richTextBox1->Text += "  + A - число A прибавляется к регистру С;\n";
				richTextBox1->Text += "  --> - содержимое регистра С сдвигается на один разряд вправо;\n";
				richTextBox1->Text += "  ' = ' - показывается значение частичного произведения полученного после сложения, которое заносится в регистр С.\n\n";
				richTextBox1->Text += "B       ";
				for (int i = 0; i <= 31; i++) {
					richTextBox1->Text += mul_result[i];
				}
				richTextBox1->Text += "\n";
				mul(op1_bin, op2_bin, mul_result);
				fromBinToDec(mul_result);

				int equal_result[16]{};
				equal(op1_bin, op2_bin, equal_result);
				pictureBox1->Image = Image::FromFile("graph2.png");
				a++;
				break;
			}
			default: {
				a = 0;
				pictureBox1->Image = Image::FromFile("graph.png");
				break;
			}
			}
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		richTextBox1->Clear();
	}

	private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) // Если вводятся цифры от 0 до 9 или нажимается backspace то "далее"
			return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}
	};
}
