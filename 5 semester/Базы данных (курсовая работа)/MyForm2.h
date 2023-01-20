#pragma once



namespace Проект1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Название";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 65);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 21);
			this->comboBox1->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 26);
			this->textBox1->MaxLength = 30;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Тип размещения";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 103);
			this->textBox2->MaxLength = 1;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(160, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm2::textBox2_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Количество звёзд";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Город";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(12, 142);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(160, 21);
			this->comboBox2->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(97, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 176);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(184, 211);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(200, 250);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(200, 250);
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Добавить отель";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
		System::Data::OleDb::OleDbConnection^ connect;
		try
		{
			connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
			connect->Open();

			System::Data::OleDb::OleDbCommand^ command1 = gcnew System::Data::OleDb::OleDbCommand("SELECT Название from [Тип размещения]", connect);
			System::Data::OleDb::OleDbDataReader^ oledbRead1 = command1->ExecuteReader();
			while (oledbRead1->Read()) {
				this->comboBox1->Items->Add(oledbRead1["Название"]);
			}
			oledbRead1->Close();

			System::Data::OleDb::OleDbCommand^ command2 = gcnew System::Data::OleDb::OleDbCommand("SELECT Название from [Города]", connect);
			System::Data::OleDb::OleDbDataReader^ oledbRead2 = command2->ExecuteReader();
			while (oledbRead2->Read()) {
				this->comboBox2->Items->Add(oledbRead2["Название"]);
			}
			oledbRead2->Close();

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
		if (((e->KeyChar >= '1') && (e->KeyChar <= '5')) || e->KeyChar == 8) // Если вводятся цифры от 0 до 9 или нажимается backspace то "далее"
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
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT Max(Код) AS Max_key FROM [Отели]", connect);
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

	//=======Переменные=======//
	String ^NAME;
	int TYPE_R;
	int STARS;
	int CITY;

	if (textBox1->Text == "") { NAME = ""; }
	else { NAME = (textBox1->Text); }

	if (comboBox1->Text == "") { TYPE_R = 1; }
	else { TYPE_R = comboBox1->SelectedIndex + 1; }

	if (textBox2->Text == "") { STARS = 1; }
	else { STARS = Convert::ToInt32(textBox2->Text); }

	if (comboBox2->Text == "") { CITY = 1; }
	else { CITY = comboBox2->SelectedIndex + 1; }

	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("INSERT INTO [Отели] VALUES ('" + Max_key + "', '" + NAME + "', '" + TYPE_R + "', '" + STARS + "', '" + CITY + "')", connect);
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
