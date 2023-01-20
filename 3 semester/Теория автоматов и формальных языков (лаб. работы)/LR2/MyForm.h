#pragma once
#include <stdlib.h>
#include <cstring>
#include <string>
#include <iostream>
#include <tchar.h>

int S;

char* SystemStringToChar(System::String^ string) {
	return (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(string);
} //функция для перевода строки^ в char*

namespace LR2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(22, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(191, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(22, 80);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(191, 212);
			this->listBox1->TabIndex = 1;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(234, 80);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(191, 212);
			this->listBox2->TabIndex = 2;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(234, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ввод";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(237, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"label3";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(445, 80);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(239, 191);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 309);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		/*char str[5];
		System::String^ str = System::Convert::ToString(textBox1->Text);
		int l = strlen(str);
		if ((str[0] == 'a' &&str[l] == 'a')|| (str[0] == 'b'&&str[l] == 'b') || (str[0] == 'c'&&str[l] == 'c')) { String^ strNew = gcnew String(str); listBox2->Items->Add(strNew + " " + l + " " + sizeof(str) + " " + sizeof(char));}
		else { String^ strNew = gcnew String(str); listBox1->Items->Add(strNew+" " + l+" "+sizeof(str)+" " +sizeof(char) ); }*/
		//array<wchar_t>^WchArr = this->textBox1->Text->ToCharArray();
		//MessageBox::Show(gcnew String(WchArr));
		//char x = Convert::ToChar(s);
		//int l = WchArr.length();
		//s = Convert::ToString(x);
		//listBox2->Items->Add(s+" "+l);
		S = 0;
		String ^s;
		s = textBox1->Text;
		char* x=SystemStringToChar(s);
		int l = strlen(x)-1; //длина строки - 1 (последний символ строки)
		int j = 0;

		while (j < 1) {
			switch (S) {
			case 0: {if ((s[0] == 'a' &&s[l] == 'a') || (s[0] == 'b'&&s[l] == 'b') || (s[0] == 'c'&&s[l] == 'c')) { S = 1; }
					else { S = 2; } break; }
			case 1: {listBox2->Items->Add(s); pictureBox1->Image = Image::FromFile("4.png");  j = j++; break; }
			case 2: {listBox1->Items->Add(s); pictureBox1->Image = Image::FromFile("3.png");  j = j++; break; }

			}
		}
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = "Поле для ввода цепочки";
		label2->Text = "Верные цепочки";
		label3->Text = "Неверные цепочки";
		pictureBox1->Image = Image::FromFile("2.png");
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
