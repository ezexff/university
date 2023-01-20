#pragma once
#include <iostream>

namespace Проект1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  Принять;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;


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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Принять = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 32);
			this->textBox1->MaxLength = 30;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(166, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(23, 117);
			this->textBox3->MaxLength = 1;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(29, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(23, 160);
			this->textBox4->MaxLength = 1;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(29, 20);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox4_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(23, 197);
			this->textBox5->MaxLength = 1;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(29, 20);
			this->textBox5->TabIndex = 4;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox5_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Фамилия";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Год рождения";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Оценка по математике";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Оценка по информатике";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 181);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(169, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Оценка по иностранному языку";
			// 
			// Принять
			// 
			this->Принять->Location = System::Drawing::Point(114, 236);
			this->Принять->Name = L"Принять";
			this->Принять->Size = System::Drawing::Size(75, 23);
			this->Принять->TabIndex = 10;
			this->Принять->Text = L"Принять";
			this->Принять->UseVisualStyleBackColor = true;
			this->Принять->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Отмена";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click_1);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(23, 74);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(166, 20);
			this->dateTimePicker1->TabIndex = 12;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(203, 271);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Принять);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Добавить студента";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//int YEAR;
	String^ DATE;
	int MATH_MARK;
	int INF_MARK;
	int FL_MARK;

	String ^SURNAME;
	if (textBox1->Text == "") { SURNAME = ""; } else { SURNAME = (textBox1->Text); }
	if (dateTimePicker1->Text == "") { DATE = ""; }else { DATE = (dateTimePicker1->Text); }
	//if (textBox2->Text == "") { YEAR = NULL; } else { YEAR = Convert::ToInt32(textBox2->Text); }
	if (textBox3->Text == "") { MATH_MARK = NULL; } else { MATH_MARK = Convert::ToInt32(textBox3->Text); }
	if (textBox4->Text == "") { INF_MARK = NULL; } else { INF_MARK = Convert::ToInt32(textBox4->Text); }
	if (textBox5->Text == "") { FL_MARK = NULL; } else { FL_MARK = Convert::ToInt32(textBox5->Text); }

	
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=DB.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("INSERT INTO Таблица1 VALUES ('"+ SURNAME +"', '"+DATE+"',"+ MATH_MARK +","+ INF_MARK +","+ FL_MARK +")", connect);
		MessageBox::Show("Запись успешно добавлена!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
	}
	catch (System::Data::DataException ^ o)
	{
		System::Windows::Forms::MessageBox::Show("error");
	}
	finally
	{
		connect->Close();
	}

	this->Close();
}

private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
	if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) 
		return;
	e->Handled = true;
	}

private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if (((e->KeyChar >= '1') && (e->KeyChar <= '5')) || e->KeyChar == 8)
		return;
	e->Handled = true;
}

private: System::Void textBox4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if (((e->KeyChar >= '1') && (e->KeyChar <= '5')) || e->KeyChar == 8)
		return;
	e->Handled = true;
}

private: System::Void textBox5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if (((e->KeyChar >= '1') && (e->KeyChar <= '5')) || e->KeyChar == 8)
		return;
	e->Handled = true;
}

private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
