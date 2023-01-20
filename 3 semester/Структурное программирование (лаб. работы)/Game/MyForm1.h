#pragma once
#include "MyForm1.cpp"
#include <stdlib.h>
#include <cstring>
#include <string>
#include <iostream>


namespace GAME {

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

	private: System::Windows::Forms::Button^  button115;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  textBox1;


	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::RichTextBox^  richTextBox1;











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
			this->button115 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button115
			// 
			this->button115->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button115->Location = System::Drawing::Point(12, 66);
			this->button115->Name = L"button115";
			this->button115->Size = System::Drawing::Size(122, 41);
			this->button115->TabIndex = 1;
			this->button115->Text = L"Принять";
			this->button115->UseVisualStyleBackColor = true;
			this->button115->Click += gcnew System::EventHandler(this, &MyForm1::button115_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(85, 125);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Поле для ввода числа:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 29);
			this->textBox1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->textBox1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 123, 0, 0, 0 });
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->textBox1->ValueChanged += gcnew System::EventHandler(this, &MyForm1::numericUpDown1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(155, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Наборы:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(141, 29);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(76, 119);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::richTextBox1_TextChanged);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(228, 160);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button115);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Быки и коровы";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		
	}
	private: System::Void button115_Click(System::Object^  sender, System::EventArgs^  e) {

		/*Int32 number = 0;
		System::String^ str = System::Convert::ToString(textBox1->Text);
		if (Int32::TryParse(str, number))
		{
		}
		*/

		//if (textBox1 = "") {button115.Enabled = false;; }
		//if  (textBox1->Text < '0' || textBox1->Text > '9')

		/*
		if (String::IsNullOrWhiteSpace(textBox1->Text)||(Convert::ToInt32(textBox1->Text)<999)|| (Convert::ToInt32(textBox1->Text)>9999))
		{
			//textBox1->Handled = true;
			//действие если поле пустое  (даже если там есть пробелы то оно считается пустым).
			textBox1->Text = "0";
			MessageBox::Show("Введены неверные данные ", "Ошибка");

		}
		else {
			//действие если поле заполненное.
		}*/

		
		
		extern int n;
		n = Convert::ToInt32(textBox1->Text);
		
	

		this->Close();
		
	}




	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {

		//label3->Text = "1234";
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
		this->MaximizeBox = false;

		extern char d5[5000];
		String^ strNew = gcnew String(d5);
		//listBox1->Items->Add(strNew);
		//label3->Text = strNew;
		richTextBox1->Text = strNew;

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		exit(0);
	}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	

	//char string[25];
	//char d1[50];
	//_itoa_s(n, string, 10);
	//strcpy_s(d1, string);
	//strcat_s(d1, string);
	//strcat_s(d1, " ");
	//String^ strNew = gcnew String(d1);
	//listBox1->Items->Add(strNew);
	//char result[100];
	//String ^s;
	//String ^s2;
	//std::string s;
	//s = Convert::ToString(n);
	//String^ a;
	//int x = a->Length;
	//strcat_s(a, "22");
	//s.copy(s1,4,1);

	//strcat_s(d1, string);
	//d1 = String::Concat(d1,"");
	//int i = 1;
	//System::String^ Network = "Network'" + i.ToString() + "'";
	//System::String^ str = System::Convert::ToString
	//label3->Text = a;
	
	

	
}
private: System::Void label3_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
