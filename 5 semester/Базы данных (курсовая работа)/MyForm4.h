#pragma once

namespace Проект1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button2;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 25);
			this->textBox1->MaxLength = 30;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 20);
			this->textBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Название";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Страна";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 65);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 21);
			this->comboBox1->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 99);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(97, 99);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(184, 136);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(200, 175);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(200, 175);
			this->Name = L"MyForm4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Добавить город";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm4_Load(System::Object^  sender, System::EventArgs^  e) {
		System::Data::OleDb::OleDbConnection^ connect;
		try
		{
			connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
			connect->Open();

			System::Data::OleDb::OleDbCommand^ command1 = gcnew System::Data::OleDb::OleDbCommand("SELECT Название from Страны", connect);
			System::Data::OleDb::OleDbDataReader^ oledbRead1 = command1->ExecuteReader();
			while (oledbRead1->Read()) {
				this->comboBox1->Items->Add(oledbRead1["Название"]);
			}
			oledbRead1->Close();

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
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT Max(Код) AS Max_key FROM [Города]", connect);
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
	int COUNTRY;

	if (textBox1->Text == "") { NAME = ""; }
	else { NAME = (textBox1->Text); }

	if (comboBox1->Text == "") { COUNTRY = 1; }
	else { COUNTRY = comboBox1->SelectedIndex + 1; }

	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("INSERT INTO [Города] VALUES ('" + Max_key + "', '" + NAME + "', '" + COUNTRY +  "')", connect);
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
}
};
}
