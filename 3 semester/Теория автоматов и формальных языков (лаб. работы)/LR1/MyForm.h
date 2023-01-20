#pragma once

int X, S, i = 0;
int k = 1;

namespace LIFT {

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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;





	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Label^  label2;


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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(45, 36);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(251, 111);
			this->dataGridView1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(323, 36);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(549, 447);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(148, 271);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 7;
			this->button5->Text = L"ѕрин€ть";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(32, 226);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 8;
			this->button6->Text = L"1";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(32, 271);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 9;
			this->button7->Text = L"2";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(32, 315);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 10;
			this->button8->Text = L"3";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(32, 354);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 11;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 199);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"¬ызов лифта";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(32, 501);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(840, 89);
			this->dataGridView2->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(887, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1162, 636);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//

		label2->Text = " онечный автомат Ц это п€терка A (X , S, Y, s1, F)\nгде X {x} Цконечный входной алфавит\nY {y} Ц конечный выходной алфавит\nS {s} Цконечное множество внутренних состо€ний,\ns1 Ц начальное состо€ние,\nF: (X*S)->(Y*S) Ц функци€ переходов\n \nX {C1, C2, C3, C4}\nC1 Ц вызов 1 - го этажа\nC2 Ц вызов 2 - го этажа\nC3 Ц вызов 3 - го этажа\nC4 Ц вызов 4 - го этажа\n \nY {U1, U2, U3, D1, D2, D3, SP}\nU1 Ц перемещение на один этаж вверх\nU2 Ц перемещение на два этажа вверх\nU3 Ц перемещение на три этажа вверх\nD1 Ц перемещение на один этаж вниз\nD2 Ц перемещение на два этажа вниз\nD3 Ц перемещение на три этажа вниз\nSP Ц остановка лифта\n \nS {s1, s2, s3, s4}\ns1- автомат находитс€ на первом этаже\ns2- автомат находитс€ на втором этаже\ns3- автомат находитс€ на третьем этаже\ns4- автомат находитс€ на четвЄртом этаже";
		//
		//—оздание таблицы входов выходов 
		dataGridView1->ColumnCount = 4;
		dataGridView1->RowCount = 4;
		//
		//заголовки столбцов
		dataGridView1->Columns[0]->HeaderCell->Value = "C1";
		dataGridView1->Columns[1]->HeaderCell->Value = "C2";
		dataGridView1->Columns[2]->HeaderCell->Value = "C3";
		dataGridView1->Columns[3]->HeaderCell->Value = "C4";
		//
		//заголовки строк
		dataGridView1->Rows[0]->HeaderCell->Value = "s1";
		dataGridView1->Rows[1]->HeaderCell->Value = "s2";
		dataGridView1->Rows[2]->HeaderCell->Value = "s3";
		dataGridView1->Rows[3]->HeaderCell->Value = "s4";
		//
		//строка s1 
		dataGridView1->Rows[0]->Cells[0]->Value = "s1/SP";
		dataGridView1->Rows[0]->Cells[1]->Value = "s2/U1";
		dataGridView1->Rows[0]->Cells[2]->Value = "s3/U2";
		dataGridView1->Rows[0]->Cells[3]->Value = "s4/U3";
		//
		//строка s2 
		dataGridView1->Rows[1]->Cells[0]->Value = "s1/D1";
		dataGridView1->Rows[1]->Cells[1]->Value = "s2/SP";
		dataGridView1->Rows[1]->Cells[2]->Value = "s3/U1";
		dataGridView1->Rows[1]->Cells[3]->Value = "s4/U2";
		//
		//строка s3
		dataGridView1->Rows[2]->Cells[0]->Value = "s1/D2";
		dataGridView1->Rows[2]->Cells[1]->Value = "s2/D1";
		dataGridView1->Rows[2]->Cells[2]->Value = "s3/SP";
		dataGridView1->Rows[2]->Cells[3]->Value = "s4/U1";
		//
		//строка s4
		dataGridView1->Rows[3]->Cells[0]->Value = "s1/D3";
		dataGridView1->Rows[3]->Cells[1]->Value = "s2/D2";
		dataGridView1->Rows[3]->Cells[2]->Value = "s3/D1";
		dataGridView1->Rows[3]->Cells[3]->Value = "s4/SP";
		//
		//выравнивание
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView1->AutoResizeColumns();
		//
		//
		//тело автомата
		pictureBox1->Image = Image::FromFile("1.png"); //положение лифта 1 этаж (граф)
		S = 1; //начальное положение лифта
	    //протокол (создание таблицы)
		dataGridView2->ColumnCount = 1;
		dataGridView2->RowCount = 3;
		//
		//заголовки столбцов
		dataGridView2->Columns[0]->HeaderCell->Value = "t";
		//
		//строка X
		dataGridView2->Rows[0]->Cells[0]->Value = "X";
		//
		//строка S
		dataGridView2->Rows[1]->Cells[0]->Value = "S";
		//
		//строка Y
		dataGridView2->Rows[2]->Cells[0]->Value = "Y";
		//
		//выравнивание
		dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView2->AutoResizeColumns();
		//
		//заполнение протокола изначальными значени€ми
		dataGridView2->Columns->Add("x", "" + i); dataGridView2->AutoResizeColumns();
		dataGridView2->Rows[0]->Cells[1]->Value = " ";
		dataGridView2->Rows[1]->Cells[1]->Value = "s" + 1;
		dataGridView2->Rows[2]->Cells[1]->Value = " ";
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		S = 1;
		//S = Convert::ToInt32(textBox1->Text);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		S = 2;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		S = 3;
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		S = 4;
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

		switch (S) //выбор состо€ни€ (положение лифта)
		{
		case 1:
		{
			//Ћифт находитс€ на этаже: 1

			if (X == 1) {

				S = X; dataGridView2->Columns->Add("x", "" + k); dataGridView2->AutoResizeColumns(); 		pictureBox1->Image = Image::FromFile("1.png"); //добавление новой колонки, выравнивание и изменение графа
				dataGridView2->Rows[0]->Cells[i + 1]->Value = "C" + S;
				dataGridView2->Rows[1]->Cells[k + 1]->Value = "s" + X;
				dataGridView2->Rows[2]->Cells[i + 1]->Value = "SP";
				k = k++;
				i = i++;
				//
				for (int i = 0; i < 4; i++) //сн€ть выделени€ €чеек
				{
					dataGridView1->Rows[0]->Cells[i]->Selected = false;
					dataGridView1->Rows[1]->Cells[i]->Selected = false;
					dataGridView1->Rows[2]->Cells[i]->Selected = false;
					dataGridView1->Rows[3]->Cells[i]->Selected = false;
				}
				dataGridView1->Rows[0]->Cells[0]->Selected = true; //выделить €чейки с текущим состо€нием
			}
			//
			if (X == 2) {
				S = X; dataGridView2->Columns->Add("x", "" + k); dataGridView2->AutoResizeColumns(); 		pictureBox1->Image = Image::FromFile("2.png");
				dataGridView2->Rows[0]->Cells[i + 1]->Value = "C" + S;
				dataGridView2->Rows[1]->Cells[k + 1]->Value = "s" + X;
				dataGridView2->Rows[2]->Cells[i + 1]->Value = "U1";
				k = k++;
				i = i++;
				//
				for (int i = 0; i < 4; i++)
				{
					dataGridView1->Rows[0]->Cells[i]->Selected = false;
					dataGridView1->Rows[1]->Cells[i]->Selected = false;
					dataGridView1->Rows[2]->Cells[i]->Selected = false;
					dataGridView1->Rows[3]->Cells[i]->Selected = false;
				}
				dataGridView1->Rows[0]->Cells[1]->Selected = true;
			}
			//
			if (X == 3) {
				S = X; dataGridView2->Columns->Add("x", "" + k); dataGridView2->AutoResizeColumns(); pictureBox1->Image = Image::FromFile("3.png");
				dataGridView2->Rows[0]->Cells[i + 1]->Value = "C" + S;
				dataGridView2->Rows[1]->Cells[k + 1]->Value = "s" + X;
				dataGridView2->Rows[2]->Cells[i + 1]->Value = "U2";
				k = k++;
				i = i++;
				//
				for (int i = 0; i < 4; i++)
				{
					dataGridView1->Rows[0]->Cells[i]->Selected = false;
					dataGridView1->Rows[1]->Cells[i]->Selected = false;
					dataGridView1->Rows[2]->Cells[i]->Selected = false;
					dataGridView1->Rows[3]->Cells[i]->Selected = false;
				}
				dataGridView1->Rows[0]->Cells[2]->Selected = true;
			}
			//
			if (X == 4) {
				S = X; dataGridView2->Columns->Add("x", "" + k); dataGridView2->AutoResizeColumns(); pictureBox1->Image = Image::FromFile("4.png");
				dataGridView2->Rows[0]->Cells[i + 1]->Value = "C" + S;
				dataGridView2->Rows[1]->Cells[k + 1]->Value = "s" + X;
				dataGridView2->Rows[2]->Cells[i + 1]->Value = "U3";
				k = k++;
				i = i++;
				//
				for (int i = 0; i < 4; i++)
				{
					dataGridView1->Rows[0]->Cells[i]->Selected = false;
					dataGridView1->Rows[1]->Cells[i]->Selected = false;
					dataGridView1->Rows[2]->Cells[i]->Selected = false;
					dataGridView1->Rows[3]->Cells[i]->Selected = false;
				}
				dataGridView1->Rows[0]->Cells[3]->Selected = true;
			}

			break;
		}
		case 2:
		{
			//Ћифт находитс€ на этаже: 2
			if (X == 1) {
				S = X;
				dataGridView2->Columns->Add("x", "" + k); dataGridView2->AutoResizeColumns(); pictureBox1->Image = Image::FromFile("1.png");
				dataGridView2->Rows[0]->Cells[i + 1]->Value = "C" + S;
				dataGridView2->Rows[1]->Cells[k + 1]->Value = "s" + X;
				dataGridView2->Rows[2]->Cells[i + 1]->Value = "D1";
				k = k++;
				i = i++;
				//
				for (int i = 0; i < 4; i++)
				{
					dataGridView1->Rows[0]->Cells[i]->Selected = false;
					dataGridView1->Rows[1]->Cells[i]->Selected = false;
					dataGridView1->Rows[2]->Cells[i]->Selected = false;
					dataGridView1->Rows[3]->Cells[i]->Selected = false;
				}
				dataGridView1->Rows[1]->Cells[0]->Selected = true;
			}
			//
			if (X == 2) {
				S = X;
				dataGridView2->Columns->Add("x", "" + k); dataGridView2->AutoResizeColumns(); pictureBox1->Image = Image::FromFile("2.png");
				dataGridView2->Rows[0]->Cells[i + 1]->Value = "C" + S;
				dataGridView2->Rows[1]->Cells[k + 1]->Value = "s" + X;
				dataGridView2->Rows[2]->Cells[i + 1]->Value = "SP";
				k = k++;
				i = i++;
				//
				for (int i = 0; i < 4; i++)
				{
					dataGridView1->Rows[0]->Cells[i]->Selected = false;
					dataGridView1->Rows[1]->Cells[i]->Selected = false;
					dataGridView1->Rows[2]->Cells[i]->Selected = false;
					dataGridView1->Rows[3]->Cells[i]->Selected = false;
				}
				dataGridView1->Rows[1]->Cells[1]->Selected = true;
			}

			//
			if (X == 3) {
				S = X;
				dataGridView2->Columns->Add("x", "" + k); dataGridView2->AutoResizeColumns(); pictureBox1->Image = Image::FromFile("3.png");
				dataGridView2->Rows[0]->Cells[i + 1]->Value = "C" + S;
				dataGridView2->Rows[1]->Cells[k + 1]->Value = "s" + X;
				dataGridView2->Rows[2]->Cells[i + 1]->Value = "U1";
				k = k++;
				i = i++;
				//
				for (int i = 0; i < 4; i++)
				{
					dataGridView1->Rows[0]->Cells[i]->Selected = false;
					dataGridView1->Rows[1]->Cells[i]->Selected = false;
					dataGridView1->Rows[2]->Cells[i]->Selected = false;
					dataGridView1->Rows[3]->Cells[i]->Selected = false;
				}
				dataGridView1->Rows[1]->Cells[2]->Selected = true;
			}
			//
			if (X == 4) {
				S = X;
				dataGridView2->Columns->Add("x", "" + k); dataGridView2->AutoResizeColumns(); pictureBox1->Image = Image::FromFile("4.png");
				dataGridView2->Rows[0]->Cells[i + 1]->Value = "C" + S;
				dataGridView2->Rows[1]->Cells[k + 1]->Value = "s" + X;
				dataGridView2->Rows[2]->Cells[i + 1]->Value = "U2";
				k = k++;
				i = i++;
				//
				for (int i = 0; i < 4; i++)
				{
					dataGridView1->Rows[0]->Cells[i]->Selected = false;
					dataGridView1->Rows[1]->Cells[i]->Selected = false;
					dataGridView1->Rows[2]->Cells[i]->Selected = false;
					dataGridView1->Rows[3]->Cells[i]->Selected = false;
				}
				dataGridView1->Rows[1]->Cells[3]->Selected = true;
			}

			break;
		}
		case 3:
		{
			//Ћифт находитс€ на этаже: 3
			if (X == 1) {
				S = X;
				dataGridView2->Columns->Add("x", "" + k); dataGridView2->AutoResizeColumns(); pictureBox1->Image = Image::FromFile("1.png");
				dataGridView2->Rows[0]->Cells[i + 1]->Value = "C" + S;
				dataGridView2->Rows[1]->Cells[k + 1]->Value = "s" + X;
				dataGridView2->Rows[2]->Cells[i + 1]->Value = "D2";
				k = k++;
				i = i++;
				//
				for (int i = 0; i < 4; i++)
				{
					dataGridView1->Rows[0]->Cells[i]->Selected = false;
					dataGridView1->Rows[1]->Cells[i]->Selected = false;
					dataGridView1->Rows[2]->Cells[i]->Selected = false;
					dataGridView1->Rows[3]->Cells[i]->Selected = false;
				}
				dataGridView1->Rows[2]->Cells[0]->Selected = true;
			}
			//
			if (X == 2) {
				S = X;
				dataGridView2->Columns->Add("x", "" + k); dataGridView2->AutoResizeColumns(); pictureBox1->Image = Image::FromFile("2.png");
				dataGridView2->Rows[0]->Cells[i + 1]->Value = "C" + S;
				dataGridView2->Rows[1]->Cells[k + 1]->Value = "s" + X;
				dataGridView2->Rows[2]->Cells[i + 1]->Value = "D1";
				k = k++;
				i = i++;
				//
				for (int i = 0; i < 4; i++)
				{
					dataGridView1->Rows[0]->Cells[i]->Selected = false;
					dataGridView1->Rows[1]->Cells[i]->Selected = false;
					dataGridView1->Rows[2]->Cells[i]->Selected = false;
					dataGridView1->Rows[3]->Cells[i]->Selected = false;
				}
				dataGridView1->Rows[2]->Cells[1]->Selected = true;
			}
			//
			if (X == 3) {
				S = X;
				dataGridView2->Columns->Add("x", "" + k); dataGridView2->AutoResizeColumns(); pictureBox1->Image = Image::FromFile("3.png");
				dataGridView2->Rows[0]->Cells[i + 1]->Value = "C" + S;
				dataGridView2->Rows[1]->Cells[k + 1]->Value = "s" + X;
				dataGridView2->Rows[2]->Cells[i + 1]->Value = "SP";
				k = k++;
				i = i++;
				//
				for (int i = 0; i < 4; i++)
				{
					dataGridView1->Rows[0]->Cells[i]->Selected = false;
					dataGridView1->Rows[1]->Cells[i]->Selected = false;
					dataGridView1->Rows[2]->Cells[i]->Selected = false;
					dataGridView1->Rows[3]->Cells[i]->Selected = false;
				}
				dataGridView1->Rows[2]->Cells[2]->Selected = true;
			}
			//
			if (X == 4) {
				S = X;
				dataGridView2->Columns->Add("x", "" + k); dataGridView2->AutoResizeColumns(); pictureBox1->Image = Image::FromFile("4.png");
				dataGridView2->Rows[0]->Cells[i + 1]->Value = "C" + S;
				dataGridView2->Rows[1]->Cells[k + 1]->Value = "s" + X;
				dataGridView2->Rows[2]->Cells[i + 1]->Value = "U1";
				k = k++;
				i = i++;
				//
				for (int i = 0; i < 4; i++)
				{
					dataGridView1->Rows[0]->Cells[i]->Selected = false;
					dataGridView1->Rows[1]->Cells[i]->Selected = false;
					dataGridView1->Rows[2]->Cells[i]->Selected = false;
					dataGridView1->Rows[3]->Cells[i]->Selected = false;
				}
				dataGridView1->Rows[2]->Cells[3]->Selected = true;
			}

			break;
		}
		case 4:
		{
			//Ћифт находитс€ на этаже: 4
			if (X == 1) {
				S = X;
				dataGridView2->Columns->Add("x", "" + k); dataGridView2->AutoResizeColumns(); pictureBox1->Image = Image::FromFile("1.png");
				dataGridView2->Rows[0]->Cells[i + 1]->Value = "C" + S;
				dataGridView2->Rows[1]->Cells[k + 1]->Value = "s" + X;
				dataGridView2->Rows[2]->Cells[i + 1]->Value = "D3";
				k = k++;
				i = i++;
				//
				for (int i = 0; i < 4; i++)
				{
					dataGridView1->Rows[0]->Cells[i]->Selected = false;
					dataGridView1->Rows[1]->Cells[i]->Selected = false;
					dataGridView1->Rows[2]->Cells[i]->Selected = false;
					dataGridView1->Rows[3]->Cells[i]->Selected = false;
				}
				dataGridView1->Rows[3]->Cells[0]->Selected = true;
			}
			//
			if (X == 2) {
				S = X;
				dataGridView2->Columns->Add("x", "" + k); dataGridView2->AutoResizeColumns(); pictureBox1->Image = Image::FromFile("2.png");
				dataGridView2->Rows[0]->Cells[i + 1]->Value = "C" + S;
				dataGridView2->Rows[1]->Cells[k + 1]->Value = "s" + X;
				dataGridView2->Rows[2]->Cells[i + 1]->Value = "D2";
				k = k++;
				i = i++;
				//
				for (int i = 0; i < 4; i++)
				{
					dataGridView1->Rows[0]->Cells[i]->Selected = false;
					dataGridView1->Rows[1]->Cells[i]->Selected = false;
					dataGridView1->Rows[2]->Cells[i]->Selected = false;
					dataGridView1->Rows[3]->Cells[i]->Selected = false;
				}
				dataGridView1->Rows[3]->Cells[1]->Selected = true;
			}
			//
			if (X == 3) {
				S = X;
				dataGridView2->Columns->Add("x", "" + k); dataGridView2->AutoResizeColumns(); 		pictureBox1->Image = Image::FromFile("3.png");
				dataGridView2->Rows[0]->Cells[i + 1]->Value = "C" + S;
				dataGridView2->Rows[1]->Cells[k + 1]->Value = "s" + X;
				dataGridView2->Rows[2]->Cells[i + 1]->Value = "D1";
				k = k++;
				i = i++;
				//
				for (int i = 0; i < 4; i++)
				{
					dataGridView1->Rows[0]->Cells[i]->Selected = false;
					dataGridView1->Rows[1]->Cells[i]->Selected = false;
					dataGridView1->Rows[2]->Cells[i]->Selected = false;
					dataGridView1->Rows[3]->Cells[i]->Selected = false;
				}
				dataGridView1->Rows[3]->Cells[2]->Selected = true;
			}
			//
			if (X == 4) {
				S = X;
				dataGridView2->Columns->Add("x", "" + k); dataGridView2->AutoResizeColumns(); 		pictureBox1->Image = Image::FromFile("4.png");
				dataGridView2->Rows[0]->Cells[i + 1]->Value = "C" + S;
				dataGridView2->Rows[1]->Cells[k + 1]->Value = "s" + X;
				dataGridView2->Rows[2]->Cells[i + 1]->Value = "SP";
				k = k++;
				i = i++;
				//
				for (int i = 0; i < 4; i++)
				{
					dataGridView1->Rows[0]->Cells[i]->Selected = false;
					dataGridView1->Rows[1]->Cells[i]->Selected = false;
					dataGridView1->Rows[2]->Cells[i]->Selected = false;
					dataGridView1->Rows[3]->Cells[i]->Selected = false;
				}
				dataGridView1->Rows[3]->Cells[3]->Selected = true;
			}

			break;
		}
		default:
			S = 1;
		}
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		X = 1;
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		X = 2;
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		X = 3;
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		X = 4;
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
