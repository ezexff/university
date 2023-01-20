#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <tchar.h>
#include <string>



int a, b, c, d, n, a1, b1, c1, d1, co, bu, k = 0;
char d5[5000] = "";
//int number;

namespace GAME {

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


	protected:

















	private: System::Windows::Forms::Button^  button2;

	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;




	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ñïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïğàâèëàÈãğûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îáÀâòîğåToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  èãğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  íà÷àòüÈãğóToolStripMenuItem;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;













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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ñïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâèëàÈãğûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáÀâòîğåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èãğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íà÷àòüÈãğóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 79);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(192, 46);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Íà÷àòü èãğó";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label5->Location = System::Drawing::Point(27, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(167, 29);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Áûêè è êîğîâû";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñïğàâêàToolStripMenuItem,
					this->èãğàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(219, 24);
			this->menuStrip1->TabIndex = 22;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// ñïğàâêàToolStripMenuItem
			// 
			this->ñïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ïğàâèëàÈãğûToolStripMenuItem,
					this->îáÀâòîğåToolStripMenuItem
			});
			this->ñïğàâêàToolStripMenuItem->Name = L"ñïğàâêàToolStripMenuItem";
			this->ñïğàâêàToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->ñïğàâêàToolStripMenuItem->Text = L"Ñïğàâêà";
			this->ñïğàâêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñïğàâêàToolStripMenuItem_Click);
			// 
			// ïğàâèëàÈãğûToolStripMenuItem
			// 
			this->ïğàâèëàÈãğûToolStripMenuItem->Name = L"ïğàâèëàÈãğûToolStripMenuItem";
			this->ïğàâèëàÈãğûToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->ïğàâèëàÈãğûToolStripMenuItem->Text = L"Ïğàâèëà èãğû";
			this->ïğàâèëàÈãğûToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïğàâèëàÈãğûToolStripMenuItem_Click);
			// 
			// îáÀâòîğåToolStripMenuItem
			// 
			this->îáÀâòîğåToolStripMenuItem->Name = L"îáÀâòîğåToolStripMenuItem";
			this->îáÀâòîğåToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->îáÀâòîğåToolStripMenuItem->Text = L"Îá àâòîğå";
			this->îáÀâòîğåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îáÀâòîğåToolStripMenuItem_Click);
			// 
			// èãğàToolStripMenuItem
			// 
			this->èãğàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->íà÷àòüÈãğóToolStripMenuItem });
			this->èãğàToolStripMenuItem->Name = L"èãğàToolStripMenuItem";
			this->èãğàToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->èãğàToolStripMenuItem->Text = L"Âûõîä";
			// 
			// íà÷àòüÈãğóToolStripMenuItem
			// 
			this->íà÷àòüÈãğóToolStripMenuItem->Name = L"íà÷àòüÈãğóToolStripMenuItem";
			this->íà÷àòüÈãğóToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->íà÷àòüÈãğóToolStripMenuItem->Text = L"Âûéòè";
			this->íà÷àòüÈãğóToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íà÷àòüÈãğóToolStripMenuItem_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(128, 137);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 13);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Âåğñèÿ 0.0.0.0";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 137);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 26;
			this->label1->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 27;
			this->label2->Text = L"1";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(48, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 28;
			this->label3->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(67, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 29;
			this->label4->Text = L"1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(219, 159);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Áûêè è êîğîâû";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	

	
	//extern int co;
	//number++;
	//double factor = fact(number);
	//int a, b, c, d, n, a1, b1, c1, d1, co, bu, k = 0;
	/*n1->Text = System::Convert::ToString(a);
	n2->Text = System::Convert::ToString(b);
	n3->Text = System::Convert::ToString(c);
	n4->Text = System::Convert::ToString(d);*/



	/*
	do {
		n = System::Convert::ToDouble(num1->Text);
		//cout << "Ââåäèòå ÷èñëî "; cin >> n; 
		a1 = n / 1000; b1 = n / 100 % 10; c1 = n / 10 % 10; d1 = n % 10;
		co = 0;
		if (a == a1 || a == b1 || a == c1 || a == d1) co++;
		if (b == a1 || b == b1 || b == c1 || b == d1) co++;
		if (c == a1 || c == b1 || c == c1 || c == d1) co++;
		if (d == a1 || d == b1 || d == c1 || d == d1) co++;
		bu = 0;
		if (a == a1) bu++;
		if (b == b1) bu++;
		if (c == c1) bu++;
		if (d == d1) bu++;
		k++;
		num3->Text = System::Convert::ToString(co);
		num4->Text = System::Convert::ToString(bu);
		//cout << co << "-" << bu << endl;
	} while (bu != 4);
	num5->Text = System::Convert::ToString("You win!!!");
	//cout << "Âû ïîáåäèëè!!!" << endl;
	//cout << "×èñëî õîäîâ " << k << endl;


	//int factor = co;
	//num2->Text = System::Convert::ToString(factor);
	//num3->Text = System::Convert::ToString(n
	*/
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
//Çàãğóçêà ôîğìû
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
	this->MaximizeBox = false;
	//pictureBox1->Image = Image::FromFile("d:\\2.png");

	
	label1->Text = "";
	label2->Text = "";
	label3->Text = "";
	label4->Text = "";

}
private: System::Void num1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	srand(time(0));
	do { a = rand() % 10; b = rand() % 10; c = rand() % 10; d = rand() % 10; } while (a == b || a == c || a == d || b == c || b == d || c == d);
	
	/*label1->Text = System::Convert::ToString(a);
	label2->Text = System::Convert::ToString(b);
	label3->Text = System::Convert::ToString(c);
	label4->Text = System::Convert::ToString(d);*/
	
	
	
	//char d6[200] = "";

	//a1 = n / 1000; b1 = n / 100 % 10; c1 = n / 10 % 10; d1 = n % 10;
	do {
		//n = Convert::ToInt32(num1->Text);
		//cout << "Ââåäèòå ÷èñëî "; cin >> n; 
		//n = System::Convert::ToInt64(num1->Text);
		//n = 1234;
		//if (n = 1234) { MessageBox::Show("You win!!!"); }
		//a = 1; b = 2; c = 3; d = 4;
		//n = Convert::ToInt32(num1->Text);

		MyForm1 ^form = gcnew MyForm1(); // ñîçäà¸ì ıêçåìïëÿğ ôîğìû
		form->ShowDialog(); // ïîêàçûâàåì

		a1 = n / 1000; b1 = n / 100 % 10; c1 = n / 10 % 10; d1 = n % 10;
		co = 0; bu = 0;
		if (a == a1 || a == b1 || a == c1 || a == d1) co++;
		if (b == a1 || b == b1 || b == c1 || b == d1) co++;
		if (c == a1 || c == b1 || c == c1 || c == d1) co++;
		if (d == a1 || d == b1 || d == c1 || d == d1) co++;
		
		if (a == a1) bu++;
		if (b == b1) bu++;
		if (c == c1) bu++;
		if (d == d1) bu++;
		k++;



		//
		//strcat_s(result, string);
		//System::String result = result;
		//char result[100] = "123";
		char string[7];
		if (n < 1000) { _itoa_s(n, string, 10); strcat_s(d5, "0");} else { _itoa_s(n, string, 10); }
		//char strtemp[10];
		//strcat_s(strtemp, string);


		//String^ strNew1 = gcnew String(strtemp);

		strcat_s(d5, string);
		strcat_s(d5, " ");

		strcat_s(d5, "(");
		_itoa_s(co, string, 10);
		strcat_s(d5, string);
		strcat_s(d5, "-");
		_itoa_s(bu, string, 10);
		strcat_s(d5, string);
		strcat_s(d5, ")");
		strcat_s(d5, "\n");
		


		String^ strNew = gcnew String(d5);
		/*char string1[7];
		_itoa_s(co, string1, 10);
		strcat_s(d6, string1);
		strcat_s(d6, "-");

		_itoa_s(bu, string1, 10);
		strcat_s(d6, string1);
		strcat_s(d6, " ");
		String^ strNew1 = gcnew String(d6);*/

		

		//MessageBox::Show("Âû ââåëè ÷èñëî: " + n + "\n" + "Êîëè÷åñòâî îäèíàêîâûõ öèôğ " + co + "\n" + "Öèôğ íà ñâîåé ïîçèöèè: " + bu + "\n" + "\n" + "Íàáîğû: "+ "\n" + strNew, "GAME", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		//MessageBox::Show("Âû ââåëè ÷èñëî: " + n + "\n" + "Êîëè÷åñòâî îäèíàêîâûõ öèôğ " + co + "\n" + "Öèôğ íà ñâîåé ïîçèöèè: " + bu, "GAME", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		//MessageBox::Show("Âû ââåëè ÷èñëî: " + n + "\n" + "Êîëè÷åñòâî îäèíàêîâûõ öèôğ " + co + "\n" + "Öèôğ íà ñâîåé ïîçèöèè: " + bu, "GAME", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		MessageBox::Show("Êîëè÷åñòâî îäèíàêîâûõ öèôğ " + co + "\n" + "Öèôğ íà ñâîåé ïîçèöèè: " + bu, "GAME", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		//num3->Text = Convert::ToString(co);
		//num4->Text = Convert::ToString(bu);
		//num3->Text = System::Convert::ToString(co);
		//num4->Text = System::Convert::ToString(bu);
		//num4->Text = System::Convert::ToString(bu);
		//cout << co << "-" << bu << endl;
		

	} while (bu != 4);
	MessageBox::Show("Âû îòãàäàëè ÷èñëî! Ïîçäğàâëÿåì!!! Êîëè÷åòñâî õîäîâ: "  + k + ".", "GAME", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	//num5->Text = System::Convert::ToString(k);
	k = 0;
	d5[0] = 0;
	
	
}
private: System::Void num5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	MessageBox::Show("Ïğîâåğêà(a,b,c,d) " + a + b + c + d + ". Ïğîâåğêà(a1,b1,c1,d1) " + a1 + b1 + c1 + d1, "GAME", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	//MessageBox::Show("Çäğàñòâóé " + num1->Text + "!", "Ïğèâåòñâèòå");
	//MessageBox::Show("You win!!!", "GAME", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	//Âûïîëíåíèå ïğîãğàììû
	/*do {
	//cout << "Ââåäèòå ÷èñëî "; cin >> n;
	//n = System::Convert::ToInt64(num1->Text);
	//n = 1234;
	//if (n = 1234) { MessageBox::Show("You win!!!"); }
	//a = 1; b = 2; c = 3; d = 4;


	n = Convert::ToInt32(num1->Text);

	a1 = n / 1000; b1 = n / 100 % 10; c1 = n / 10 % 10; d1 = n % 10;
	co = 0;
	if (a == a1 || a == b1 || a == c1 || a == d1) co++;
	if (b == a1 || b == b1 || b == c1 || b == d1) co++;
	if (c == a1 || c == b1 || c == c1 || c == d1) co++;
	if (d == a1 || d == b1 || d == c1 || d == d1) co++;
	bu = 0;
	if (a == a1) bu++;
	if (b == b1) bu++;
	if (c == c1) bu++;
	if (d == d1) bu++;
	k++;

	//num3->Text = Convert::ToString(co);
	//num4->Text = Convert::ToString(bu);
	//num3->Text = System::Convert::ToString(co);
	//num4->Text = System::Convert::ToString(bu);
	//num4->Text = System::Convert::ToString(bu);
	//cout << co << "-" << bu << endl;

	} while (bu != 4);*/
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ñïğàâêàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void îáÀâòîğåToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm3 ^form = gcnew MyForm3(); // ñîçäà¸ì ıêçåìïëÿğ ôîğìû
	form->ShowDialog(); // ïîêàçûâàåì
}
private: System::Void ïğàâèëàÈãğûToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm2 ^form = gcnew MyForm2(); // ñîçäà¸ì ıêçåìïëÿğ ôîğìû
	form->ShowDialog(); // ïîêàçûâàåì
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void íà÷àòüÈãğóToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	exit(0);
	
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
};
}

