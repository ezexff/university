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

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  Принять;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;

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
			this->Принять = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 74);
			this->textBox1->MaxLength = 30;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Выбор таблицы";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// Принять
			// 
			this->Принять->Location = System::Drawing::Point(124, 106);
			this->Принять->Name = L"Принять";
			this->Принять->Size = System::Drawing::Size(83, 23);
			this->Принять->TabIndex = 10;
			this->Принять->Text = L"Добавить";
			this->Принять->UseVisualStyleBackColor = true;
			this->Принять->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Турагентство", L"Страны", L"Тип тура", L"Тип размещения",
					L"Тип питания"
			});
			this->comboBox1->Location = System::Drawing::Point(23, 25);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(184, 21);
			this->comboBox1->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Название";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 106);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Отменить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click_1);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(219, 141);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Принять);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(235, 180);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(235, 180);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Добавить дополнительные данные";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
		//this->comboBox1->SelectedIndex = 0;
	}

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	int selected_cb;
	if(comboBox1->Text == "Турагентство")
	{
		selected_cb = 0;
	}
	if (comboBox1->Text == "Страны")
	{
		selected_cb = 1;
	}
	if (comboBox1->Text == "Тип тура")
	{
		selected_cb = 2;
	}
	if (comboBox1->Text == "Тип размещения")
	{
		selected_cb = 3;
	}
	if (comboBox1->Text == "Тип питания")
	{
		selected_cb = 4;
	}

	// Узнаём последнее значение кода
	int Max_key;
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		if (selected_cb == 0) {
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT Max(Код) AS Max_key FROM [Турагентства]", connect);
		Max_key = (int)command->ExecuteScalar() + 1;
		}	

		if (selected_cb == 1) {
			System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT Max(Код) AS Max_key FROM [Страны]", connect);
			Max_key = (int)command->ExecuteScalar() + 1;
		}

		if (selected_cb == 2) {
			System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT Max(Код) AS Max_key FROM [Тип тура]", connect);
			Max_key = (int)command->ExecuteScalar() + 1;
		}

		if (selected_cb == 3) {
			System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT Max(Код) AS Max_key FROM [Тип размещения]", connect);
			Max_key = (int)command->ExecuteScalar() + 1;
		}

		if (selected_cb == 4) {
			System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT Max(Код) AS Max_key FROM [Тип питания]", connect);
			Max_key = (int)command->ExecuteScalar() + 1;
		}
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
	if (textBox1->Text == "") { NAME = ""; } else { NAME = (textBox1->Text); }
	
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		if (selected_cb == 0) {
			System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("INSERT INTO [Турагентства] VALUES ('" + Max_key + "', '" + NAME + "')", connect);
			MessageBox::Show("Запись успешно добавлена!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		}

		if (selected_cb == 1) {
			System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("INSERT INTO [Страны] VALUES ('" + Max_key + "', '" + NAME + "')", connect);
			MessageBox::Show("Запись успешно добавлена!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		}

		if (selected_cb == 2) {
			System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("INSERT INTO [Тип тура] VALUES ('" + Max_key + "', '" + NAME + "')", connect);
			MessageBox::Show("Запись успешно добавлена!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		}

		if (selected_cb == 3) {
			System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("INSERT INTO [Тип размещения] VALUES ('" + Max_key + "', '" + NAME + "')", connect);
			MessageBox::Show("Запись успешно добавлена!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		}

		if (selected_cb == 4) {
			System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("INSERT INTO [Тип питания] VALUES ('" + Max_key + "', '" + NAME + "')", connect);
			MessageBox::Show("Запись успешно добавлена!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		}
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

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
