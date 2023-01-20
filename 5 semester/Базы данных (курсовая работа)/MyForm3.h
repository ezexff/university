#pragma once

namespace Проект1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 25);
			this->textBox1->MaxLength = 60;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Название";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(23, 100);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 2;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker2->Location = System::Drawing::Point(23, 139);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 3;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(23, 179);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(200, 21);
			this->comboBox1->TabIndex = 4;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(23, 217);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(200, 21);
			this->comboBox2->TabIndex = 5;
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(23, 258);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(200, 21);
			this->comboBox3->TabIndex = 6;
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(23, 299);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(200, 21);
			this->comboBox4->TabIndex = 7;
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(23, 340);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(200, 21);
			this->comboBox5->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(23, 380);
			this->textBox2->MaxLength = 6;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 20);
			this->textBox2->TabIndex = 9;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm3::textBox2_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Дата начала";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Дата конца";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Тип тура";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(32, 203);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Тип питания";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(32, 243);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Отели";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(32, 284);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Рейс вылета";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(32, 325);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Рейс прилёта";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(32, 365);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Стоимость";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(148, 417);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(23, 417);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Отменить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(32, 47);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Турагентство";
			// 
			// comboBox6
			// 
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(23, 62);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(200, 21);
			this->comboBox6->TabIndex = 20;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(244, 451);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(260, 490);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(260, 490);
			this->Name = L"MyForm3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Добавить тур";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^  sender, System::EventArgs^  e) {
		System::Data::OleDb::OleDbConnection^ connect;
		try
		{
			connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
			connect->Open();
			
			System::Data::OleDb::OleDbCommand^ command1 = gcnew System::Data::OleDb::OleDbCommand("SELECT Название from [Тип тура]", connect);
			System::Data::OleDb::OleDbDataReader^ oledbRead1 = command1->ExecuteReader();
			while (oledbRead1->Read()) {
				this->comboBox1->Items->Add(oledbRead1["Название"]);
			}
			oledbRead1->Close();
			
			System::Data::OleDb::OleDbCommand^ command2 = gcnew System::Data::OleDb::OleDbCommand("SELECT Название from [Тип питания]", connect);
			System::Data::OleDb::OleDbDataReader^ oledbRead2 = command2->ExecuteReader();
			while (oledbRead2->Read()) {
				this->comboBox2->Items->Add(oledbRead2["Название"]);
			}
			oledbRead2->Close();

			System::Data::OleDb::OleDbCommand^ command3 = gcnew System::Data::OleDb::OleDbCommand("SELECT Название from Отели", connect);
			System::Data::OleDb::OleDbDataReader^ oledbRead3 = command3->ExecuteReader();
			while (oledbRead3->Read()) {
				this->comboBox3->Items->Add(oledbRead3["Название"]);
			}
			oledbRead3->Close();

			System::Data::OleDb::OleDbCommand^ command4 = gcnew System::Data::OleDb::OleDbCommand("SELECT Код from Авиарейсы", connect);
			System::Data::OleDb::OleDbDataReader^ oledbRead4 = command4->ExecuteReader();
			while (oledbRead4->Read()) {
				this->comboBox4->Items->Add(oledbRead4["Код"]);
			}
			oledbRead4->Close();

			System::Data::OleDb::OleDbCommand^ command5 = gcnew System::Data::OleDb::OleDbCommand("SELECT Код from Авиарейсы", connect);
			System::Data::OleDb::OleDbDataReader^ oledbRead5 = command5->ExecuteReader();
			while (oledbRead5->Read()) {
				this->comboBox5->Items->Add(oledbRead5["Код"]);
			}
			oledbRead5->Close();

			System::Data::OleDb::OleDbCommand^ command6 = gcnew System::Data::OleDb::OleDbCommand("SELECT Турагентства from Турагентства", connect);
			System::Data::OleDb::OleDbDataReader^ oledbRead6 = command6->ExecuteReader();
			while (oledbRead6->Read()) {
				this->comboBox6->Items->Add(oledbRead6["Турагентства"]);
			}
			oledbRead6->Close();
		}
		catch (System::Data::DataException ^ o)
		{
			System::Windows::Forms::MessageBox::Show("error");
		}
		finally
		{
			connect->Close();
		}
	}
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) // Если вводятся цифры от 0 до 9 или нажимается backspace то "далее"
		return;
	e->Handled = true; // Остальные символы запрещены для ввода
}


	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	// Узнаём последнее значение кода
	int Max_key;
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT Max(Код) AS Max_key FROM [Туры]", connect);
		Max_key = (int)command->ExecuteScalar() + 1;

	}
	catch (System::Data::DataException ^ o)
	{
		System::Windows::Forms::MessageBox::Show("error");
	}
	finally
	{
		connect->Close();
	}

	String ^NAME;
	String ^DATE1;
	String ^DATE2;
	int TYPE_T;
	int TYPE_F;
	int NAME_O;
	int NAME_V1;
	int NAME_V2;
	int COST;

	if (textBox1->Text == "") { NAME = ""; }
	else { NAME = (textBox1->Text); }

	if (dateTimePicker1->Text == "") { DATE1 = ""; }
	else { DATE1 = (dateTimePicker1->Text); }

	if (dateTimePicker2->Text == "") { DATE2 = ""; }
	else { DATE2 = (dateTimePicker2->Text); }

	if (comboBox1->Text == "") { TYPE_T= 1; }
	else { TYPE_T=comboBox1->SelectedIndex+1;}

	if (comboBox2->Text == "") { TYPE_F = 1; }
	else { TYPE_F = comboBox2->SelectedIndex + 1;}

	if (comboBox3->Text == "") { NAME_O = 1; }
	else { NAME_O = comboBox3->SelectedIndex + 1;}

	if (comboBox4->Text == "") { NAME_V1 = 1; }
	else { NAME_V1 = comboBox4->SelectedIndex + 1;}

	if (comboBox5->Text == "") { NAME_V2 = 1; }
	else { NAME_V2 = comboBox5->SelectedIndex + 1;}

	if (textBox2->Text == "") { COST = 1; }
	else { COST = Convert::ToInt32(textBox2->Text); }

	int temp1;
	if (comboBox6->Text == "") { temp1 = 1; }
	else { temp1 = comboBox6->SelectedIndex + 1; }

	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("INSERT INTO [Туры] VALUES ('" + Max_key + "', '" + NAME + "', '" + DATE1 + "', '" +DATE2 + "', '" +TYPE_T + "', '" +TYPE_F + "', '" +NAME_O + "', '" +NAME_V1 + "', '" +NAME_V2 + "', '" +COST + "')", connect);
		MessageBox::Show("Запись успешно добавлена!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();

		System::Data::OleDb::OleDbCommand^ command2 = gcnew System::Data::OleDb::OleDbCommand("INSERT INTO [Турагентства и туры] VALUES ('" + temp1 + "', '" + Max_key + "')", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead2 = command2->ExecuteReader();
	}
	catch (System::Data::DataException ^ o)
	{
		System::Windows::Forms::MessageBox::Show("error");
	}
	finally
	{
		connect->Close();
	}
}
};
}
