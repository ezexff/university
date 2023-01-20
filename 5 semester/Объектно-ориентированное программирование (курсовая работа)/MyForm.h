#pragma once

#include "ILight.h"

namespace Project1 {

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
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  загрузитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton2;
	private: System::Windows::Forms::ToolStripMenuItem^  поискToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сортировкаToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ToolStripMenuItem^  сортировкаПоНазваниюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сортировкаПоТипуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сортировкаПоЦенеToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	protected:
#pragma endregion
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->загрузитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton2 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->поискToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сортировкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сортировкаПоНазваниюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сортировкаПоТипуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сортировкаПоЦенеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripDropDownButton1,
					this->toolStripDropDownButton2
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(924, 25);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->загрузитьToolStripMenuItem,
					this->сохранитьToolStripMenuItem
			});
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(49, 22);
			this->toolStripDropDownButton1->Text = L"Файл";
			// 
			// загрузитьToolStripMenuItem
			// 
			this->загрузитьToolStripMenuItem->Name = L"загрузитьToolStripMenuItem";
			this->загрузитьToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->загрузитьToolStripMenuItem->Text = L"Загрузить";
			this->загрузитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::загрузитьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem_Click);
			// 
			// toolStripDropDownButton2
			// 
			this->toolStripDropDownButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->поискToolStripMenuItem,
					this->сортировкаToolStripMenuItem
			});
			this->toolStripDropDownButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton2->Name = L"toolStripDropDownButton2";
			this->toolStripDropDownButton2->Size = System::Drawing::Size(82, 22);
			this->toolStripDropDownButton2->Text = L"Выполнить";
			// 
			// поискToolStripMenuItem
			// 
			this->поискToolStripMenuItem->Name = L"поискToolStripMenuItem";
			this->поискToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->поискToolStripMenuItem->Text = L"Поиск";
			this->поискToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::поискToolStripMenuItem_Click);
			// 
			// сортировкаToolStripMenuItem
			// 
			this->сортировкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->сортировкаПоНазваниюToolStripMenuItem,
					this->сортировкаПоТипуToolStripMenuItem, this->сортировкаПоЦенеToolStripMenuItem
			});
			this->сортировкаToolStripMenuItem->Name = L"сортировкаToolStripMenuItem";
			this->сортировкаToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->сортировкаToolStripMenuItem->Text = L"Сортировки";
			this->сортировкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сортировкаToolStripMenuItem_Click);
			// 
			// сортировкаПоНазваниюToolStripMenuItem
			// 
			this->сортировкаПоНазваниюToolStripMenuItem->Name = L"сортировкаПоНазваниюToolStripMenuItem";
			this->сортировкаПоНазваниюToolStripMenuItem->Size = System::Drawing::Size(214, 22);
			this->сортировкаПоНазваниюToolStripMenuItem->Text = L"Сортировка по названию";
			this->сортировкаПоНазваниюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сортировкаПоНазваниюToolStripMenuItem_Click);
			// 
			// сортировкаПоТипуToolStripMenuItem
			// 
			this->сортировкаПоТипуToolStripMenuItem->Name = L"сортировкаПоТипуToolStripMenuItem";
			this->сортировкаПоТипуToolStripMenuItem->Size = System::Drawing::Size(214, 22);
			this->сортировкаПоТипуToolStripMenuItem->Text = L"Сортировка по типу";
			this->сортировкаПоТипуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сортировкаПоТипуToolStripMenuItem_Click);
			// 
			// сортировкаПоЦенеToolStripMenuItem
			// 
			this->сортировкаПоЦенеToolStripMenuItem->Name = L"сортировкаПоЦенеToolStripMenuItem";
			this->сортировкаПоЦенеToolStripMenuItem->Size = System::Drawing::Size(214, 22);
			this->сортировкаПоЦенеToolStripMenuItem->Text = L"Сортировка по цене";
			this->сортировкаПоЦенеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сортировкаПоЦенеToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(240, 28);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(672, 504);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Название";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Тип";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Цена";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Особенности";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Прочее";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Светильник", L"Прожектор", L"Проектор" });
			this->comboBox1->Location = System::Drawing::Point(12, 65);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(209, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Тип осветительного прибора";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 145);
			this->textBox1->MaxLength = 64;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(209, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Название осветительного прибора";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(146, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Стилевое оформление люстры";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 185);
			this->textBox2->MaxLength = 7;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(209, 20);
			this->textBox2->TabIndex = 9;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Цена";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 90);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Тип светильника";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 225);
			this->textBox3->MaxLength = 64;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(209, 20);
			this->textBox3->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(20, 250);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Степень защиты";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 380);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Значение";
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->Enabled = false;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Люстра", L"Ночник", L"Спот", L"Бра", L"Торшер",
					L"Настольная лампа"
			});
			this->comboBox4->Location = System::Drawing::Point(12, 105);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(209, 21);
			this->comboBox4->TabIndex = 15;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox4_SelectedIndexChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(26) {
				L"IP 00", L"IP 10", L"IP 11", L"IP 12", L"IP 20",
					L"IP 21", L"IP 22", L"IP 23", L"IP 30", L"IP 31", L"IP 32", L"IP 33", L"IP 34", L"IP 40", L"IP 41", L"IP 42", L"IP 43", L"IP 44",
					L"IP 50", L"IP 54", L"IP 55", L"IP 60", L"IP 65", L"IP 66", L"IP 67", L"IP 68"
			});
			this->comboBox2->Location = System::Drawing::Point(12, 265);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(209, 21);
			this->comboBox2->TabIndex = 23;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 396);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(209, 20);
			this->textBox4->TabIndex = 24;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->richTextBox1->Location = System::Drawing::Point(12, 436);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(209, 96);
			this->richTextBox1->TabIndex = 25;
			this->richTextBox1->Text = L"";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(20, 420);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 13);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Результат";
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Название", L"Тип", L"Цена" });
			this->comboBox3->Location = System::Drawing::Point(12, 355);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(209, 21);
			this->comboBox3->TabIndex = 27;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(20, 339);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(106, 13);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Выбор поля поиска";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(924, 546);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->toolStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(940, 585);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Осветительные приборы";
			this->Load += gcnew System::EventHandler(this, &MyForm::Main_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}

	protected:
		int d; // Номер строки	

		void SaveToFile(DataGridView^ a, String^ file)
		{
			StreamWriter^ sw = gcnew StreamWriter(file, false);
			for (int i = 0; i < a->RowCount ; i++) {
				bool test = false;
				for (int j = 0; j<a->ColumnCount; j++) {
					if (a->Rows[i]->Cells[j]->Value != nullptr) { test = true; }
				}
				if (test = true) {
					String^ str1 = a->Rows[i]->Cells[0]->Value->ToString();
					String^ str2 = a->Rows[i]->Cells[1]->Value->ToString();
					String^ str3 = a->Rows[i]->Cells[2]->Value->ToString();
					String^ str4 = a->Rows[i]->Cells[3]->Value->ToString();
					
					if (str2 == "Люстра")
					{
						String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
						ILight^ p = gcnew Chandelier(str1, str2, Convert::ToInt32(str3), str4, str5);
						p->save(sw);
					}
					if (str2 == "Ночник")
					{
						String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
						ILight^ p = gcnew Night_lamp(str1, str2, Convert::ToInt32(str3), str4, str5);
						p->save(sw);
					}
					if (str2 == "Спот")
					{
						String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
						ILight^ p = gcnew Spot_fixture(str1, str2, Convert::ToInt32(str3), str4, str5);
						p->save(sw);
					}
					if (str2 == "Бра")
					{
						String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
						ILight^ p = gcnew Scoence(str1, str2, Convert::ToInt32(str3), str4, str5);
						p->save(sw);
					}
					if (str2 == "Торшер")
					{
						String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
						ILight^ p = gcnew Torchere(str1, str2, Convert::ToInt32(str3), str4, str5);
						p->save(sw);
					}
					if (str2 == "Настольная лампа")
					{
						String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
						ILight^ p = gcnew Table_lamp(str1, str2, Convert::ToInt32(str3), str4, str5);
						p->save(sw);
					}

					if (str2 == "Прожектор")
					{ 
						ILight^ p = gcnew Searchlight(str1, str2, Convert::ToInt32(str3), str4);
						p->save(sw);
					}
					if (str2 == "Проектор")
					{
						ILight^ p = gcnew Video_projector(str1, str2, Convert::ToInt32(str3), str4);
						p->save(sw);
					}
				}
			}
			sw->Close();
		}

		void LoadFile(DataGridView^ a, String^ file)
		{
			a->RowCount = 0; d = 0;
			StreamReader^ sr = gcnew StreamReader(file);
			while (!sr->EndOfStream) {
				String^ str1 = sr->ReadLine();
				String^ str2 = sr->ReadLine();
				String^ str3 = sr->ReadLine();
				String^ str4 = sr->ReadLine();

				if (str2 == "Люстра")
				{
					String^ str5 = sr->ReadLine();
					ILight^ p = gcnew Chandelier(str1, str2, Convert::ToInt32(str3), str4, str5);
					p->print(dataGridView1, d);
				}
				if (str2 == "Ночник")
				{
					String^ str5 = sr->ReadLine();
					ILight^ p = gcnew Night_lamp(str1, str2, Convert::ToInt32(str3), str4, str5);
					p->print(dataGridView1, d);
				}
				if (str2 == "Спот")
				{
					String^ str5 = sr->ReadLine();
					ILight^ p = gcnew Spot_fixture(str1, str2, Convert::ToInt32(str3), str4, str5);
					p->print(dataGridView1, d);
				}
				if (str2 == "Бра")
				{
					String^ str5 = sr->ReadLine();
					ILight^ p = gcnew Scoence(str1, str2, Convert::ToInt32(str3), str4, str5);
					p->print(dataGridView1, d);
				}
				if (str2 == "Торшер")
				{
					String^ str5 = sr->ReadLine();
					ILight^ p = gcnew Torchere(str1, str2, Convert::ToInt32(str3), str4, str5);
					p->print(dataGridView1, d);
				}
				if (str2 == "Настольная лампа")
				{
					String^ str5 = sr->ReadLine();
					ILight^ p = gcnew Table_lamp(str1, str2, Convert::ToInt32(str3), str4, str5);
					p->print(dataGridView1, d);
				}

				if (str2 == "Прожектор")
				{
					ILight^ p = gcnew Searchlight(str1, str2, Convert::ToInt32(str3), str4);
					p->print(dataGridView1, d);
				}
				if (str2 == "Проектор")
				{
					ILight^ p = gcnew Video_projector(str1, str2, Convert::ToInt32(str3), str4);
					p->print(dataGridView1, d);
				}
				d++;
			}
			sr->Close();
		}

		void Search(DataGridView^ a)
		{

			bool check = false;
			for (int i = 0; i < a->RowCount; i++)
			{
				String^ str1 = a->Rows[i]->Cells[0]->Value->ToString();
				String^ str2 = a->Rows[i]->Cells[1]->Value->ToString();
				String^ str3 = a->Rows[i]->Cells[2]->Value->ToString();
				String^ str4 = a->Rows[i]->Cells[3]->Value->ToString();
				switch (comboBox3->SelectedIndex)
				{
				case 0:
				{
					if (str1 == textBox4->Text)
					{
						if (str2 == "Люстра")
						{
							String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
							ILight^ p = gcnew Chandelier(str1, str2, Convert::ToInt32(str3), str4, str5);
							p->search_result(richTextBox1);
							check = true;
						}
						if (str2 == "Ночник")
						{
							String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
							ILight^ p = gcnew Night_lamp(str1, str2, Convert::ToInt32(str3), str4, str5);
							p->search_result(richTextBox1);
							check = true;
						}
						if (str2 == "Спот")
						{
							String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
							ILight^ p = gcnew Spot_fixture(str1, str2, Convert::ToInt32(str3), str4, str5);
							p->search_result(richTextBox1);
							check = true;
						}
						if (str2 == "Бра")
						{
							String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
							ILight^ p = gcnew Scoence(str1, str2, Convert::ToInt32(str3), str4, str5);
							p->search_result(richTextBox1);
							check = true;
						}
						if (str2 == "Торшер")
						{
							String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
							ILight^ p = gcnew Torchere(str1, str2, Convert::ToInt32(str3), str4, str5);
							p->search_result(richTextBox1);
							check = true;
						}
						if (str2 == "Настольная лампа")
						{
							String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
							ILight^ p = gcnew Table_lamp(str1, str2, Convert::ToInt32(str3), str4, str5);
							p->search_result(richTextBox1);
							check = true;
						}

						if (str2 == "Прожектор")
						{
							ILight^ p = gcnew Searchlight(str1, str2, Convert::ToInt32(str3), str4);
							p->search_result(richTextBox1);
							check = true;
						}
						if (str2 == "Проектор")
						{
							ILight^ p = gcnew Video_projector(str1, str2, Convert::ToInt32(str3), str4);
							p->search_result(richTextBox1);
							check = true;
						}
					}
					break;
					}

				case 1:
				{
					if (str2 == textBox4->Text)
					{
						if (str2 == "Люстра")
						{
							String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
							ILight^ p = gcnew Chandelier(str1, str2, Convert::ToInt32(str3), str4, str5);
							p->search_result(richTextBox1);
							check = true;
						}
						if (str2 == "Ночник")
						{
							String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
							ILight^ p = gcnew Night_lamp(str1, str2, Convert::ToInt32(str3), str4, str5);
							p->search_result(richTextBox1);
							check = true;
						}
						if (str2 == "Спот")
						{
							String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
							ILight^ p = gcnew Spot_fixture(str1, str2, Convert::ToInt32(str3), str4, str5);
							p->search_result(richTextBox1);
							check = true;
						}
						if (str2 == "Бра")
						{
							String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
							ILight^ p = gcnew Scoence(str1, str2, Convert::ToInt32(str3), str4, str5);
							p->search_result(richTextBox1);
							check = true;
						}
						if (str2 == "Торшер")
						{
							String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
							ILight^ p = gcnew Torchere(str1, str2, Convert::ToInt32(str3), str4, str5);
							p->search_result(richTextBox1);
							check = true;
						}
						if (str2 == "Настольная лампа")
						{
							String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
							ILight^ p = gcnew Table_lamp(str1, str2, Convert::ToInt32(str3), str4, str5);
							p->search_result(richTextBox1);
							check = true;
						}

						if (str2 == "Прожектор")
						{
							ILight^ p = gcnew Searchlight(str1, str2, Convert::ToInt32(str3), str4);
							p->search_result(richTextBox1);
							check = true;
						}
						if (str2 == "Проектор")
						{
							ILight^ p = gcnew Video_projector(str1, str2, Convert::ToInt32(str3), str4);
							p->search_result(richTextBox1);
							check = true;
						}
					}
					break;
				}

				case 2:
				{
				if ((Convert::ToInt32(str3)) == (Convert::ToInt32(textBox4->Text)))
				{

					if (str2 == "Люстра")
					{
						String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
						ILight^ p = gcnew Chandelier(str1, str2, Convert::ToInt32(str3), str4, str5);
						p->search_result(richTextBox1);
						check = true;
					}
					if (str2 == "Ночник")
					{
						String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
						ILight^ p = gcnew Night_lamp(str1, str2, Convert::ToInt32(str3), str4, str5);
						p->search_result(richTextBox1);
						check = true;
					}
					if (str2 == "Спот")
					{
						String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
						ILight^ p = gcnew Spot_fixture(str1, str2, Convert::ToInt32(str3), str4, str5);
						p->search_result(richTextBox1);
						check = true;
					}
					if (str2 == "Бра")
					{
						String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
						ILight^ p = gcnew Scoence(str1, str2, Convert::ToInt32(str3), str4, str5);
						p->search_result(richTextBox1);
						check = true;
					}
					if (str2 == "Торшер")
					{
						String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
						ILight^ p = gcnew Torchere(str1, str2, Convert::ToInt32(str3), str4, str5);
						p->search_result(richTextBox1);
						check = true;
					}
					if (str2 == "Настольная лампа")
					{
						String^ str5 = a->Rows[i]->Cells[4]->Value->ToString();
						ILight^ p = gcnew Table_lamp(str1, str2, Convert::ToInt32(str3), str4, str5);
						p->search_result(richTextBox1);
						check = true;
					}

					if (str2 == "Прожектор")
					{
						ILight^ p = gcnew Searchlight(str1, str2, Convert::ToInt32(str3), str4);
						p->search_result(richTextBox1);
						check = true;
					}
					if (str2 == "Проектор")
					{
						ILight^ p = gcnew Video_projector(str1, str2, Convert::ToInt32(str3), str4);
						p->search_result(richTextBox1);
						check = true;
					}
				}
				break;
				}
				}
			}
			if (check == false)
			{
				MessageBox::Show("По вашему запросу ничего не найдено!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}

private: System::Void Main_Load(System::Object^  sender, System::EventArgs^  e) {
	this->dataGridView1->MultiSelect = false;
	this->dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
	this->dataGridView1->AllowUserToAddRows = false;
	this->dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;

	this->comboBox1->SelectedIndex = 0;
	this->comboBox2->SelectedIndex = 0;
	this->comboBox3->SelectedIndex = 0;
	this->comboBox4->SelectedIndex = 0;
}
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	// Добавление объекта в таблицу
	switch (comboBox1->SelectedIndex)
	{
	case 0: 
	{
		switch (comboBox4->SelectedIndex)
		{
		// Добавить люстры
		case 0:
		{
		try {
			ILight^p = gcnew Chandelier(textBox1->Text, comboBox4->Text, Convert::ToInt32(textBox2->Text), textBox3->Text, comboBox2->Text);
			p->print(dataGridView1, d);
			d++;
		}
		catch (...) { MessageBox::Show("Ошибка при заполнении полей!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);}
		return;
		}

		// Добавить ночники
		case 1:
		{
			try {
				ILight^p = gcnew Night_lamp(textBox1->Text, comboBox4->Text, Convert::ToInt32(textBox2->Text), textBox3->Text, comboBox2->Text);
				p->print(dataGridView1, d);
				d++;
			}
			catch (...) { MessageBox::Show("Ошибка при заполнении полей!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation); }
			return;
		}

		// Добавить споты
		case 2:
		{
			try {
				ILight^p = gcnew Spot_fixture(textBox1->Text, comboBox4->Text, Convert::ToInt32(textBox2->Text), textBox3->Text, comboBox2->Text);
				p->print(dataGridView1, d);
				d++;
			}
			catch (...) { MessageBox::Show("Ошибка при заполнении полей!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation); }
			return;
		}

		// Добавить бра
		case 3:
		{
			try {
				ILight^p = gcnew Scoence(textBox1->Text, comboBox4->Text, Convert::ToInt32(textBox2->Text), textBox3->Text, comboBox2->Text);
				p->print(dataGridView1, d);
				d++;
			}
			catch (...) { MessageBox::Show("Ошибка при заполнении полей!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation); }
			return;
		}

		// Добавить Торшеры
		case 4:
		{
			try {
				ILight^p = gcnew Torchere(textBox1->Text, comboBox4->Text, Convert::ToInt32(textBox2->Text), textBox3->Text, comboBox2->Text);
				p->print(dataGridView1, d);
				d++;
			}
			catch (...) { MessageBox::Show("Ошибка при заполнении полей!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation); }
			return;
		}

		// Добавить настольные лампы
		case 5:
		{
			try {
				ILight^p = gcnew Table_lamp(textBox1->Text, comboBox4->Text, Convert::ToInt32(textBox2->Text), textBox3->Text, comboBox2->Text);
				p->print(dataGridView1, d);
				d++;
			}
			catch (...) { MessageBox::Show("Ошибка при заполнении полей!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation); }
			return;
		}
		}
	}

	// Добавление прожекторов
	case 1:
	{
		try {
			ILight^p = gcnew Searchlight(textBox1->Text, comboBox1->Text, Convert::ToInt32(textBox2->Text), textBox3->Text);
			p->print(dataGridView1, d);
			d++;
		}
		catch (...) { MessageBox::Show("Ошибка при заполнении полей!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation); }
		break;
	}

	// Добавление проекторов
	case 2:
	{
		try {
			ILight^p = gcnew Video_projector(textBox1->Text, comboBox1->Text, Convert::ToInt32(textBox2->Text), textBox3->Text);
			p->print(dataGridView1, d);
			d++;
		}
		catch (...) { MessageBox::Show("Ошибка при заполнении полей!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation); }
		break;
	}
	}
}
private: System::Void загрузитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Вы уверены, что хотите загрузить файл?", "Загрузить файл", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
	if (dialogResult == System::Windows::Forms::DialogResult::Yes)
	{
		LoadFile(dataGridView1, "light.txt");
	}
}
private: System::Void сохранитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Вы уверены, что хотите сохранить изменения?", "Сохранить файл", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
	if (dialogResult == System::Windows::Forms::DialogResult::Yes)
	{
		SaveToFile(dataGridView1, "light.txt");
	}
}
private: System::Void сортировкаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) { 
	int m = 40;
	if (comboBox1->SelectedIndex == 0) 
	{
		this->button1->Location = System::Drawing::Point(146, 305);
		
		
		label6->Visible = true;
		comboBox2->Visible = true;

		comboBox4->Enabled = true;
		comboBox4->Visible = true;
		label5->Visible = true;

		this->label2->Location = System::Drawing::Point(20, 130);
		this->label4->Location = System::Drawing::Point(20, 170);
		this->label3->Location = System::Drawing::Point(20, 210);
		this->label6->Location = System::Drawing::Point(20, 250);

		this->textBox1->Location = System::Drawing::Point(12, 145);
		this->textBox2->Location = System::Drawing::Point(12, 185);
		this->textBox3->Location = System::Drawing::Point(12, 225);
		this->comboBox2->Location = System::Drawing::Point(12, 265);

		if (comboBox4->SelectedIndex == 0) { this->label3->Text = "Стилевое оформление люстры"; }
		if (comboBox4->SelectedIndex == 1) { this->label3->Text = "Запасные лампы ночника"; }
		if (comboBox4->SelectedIndex == 2) { this->label3->Text = "Способ крепления спота"; }
		if (comboBox4->SelectedIndex == 3) { this->label3->Text = "Назначение бра"; }
		if (comboBox4->SelectedIndex == 4) { this->label3->Text = "Форма абажура торшера"; }
		if (comboBox4->SelectedIndex == 5) { this->label3->Text = "Способ установки лампы"; }

	}
	else 
	{
		comboBox4->Enabled = false;
		comboBox4->Visible = false;
		label5->Visible = false;


		this->button1->Location = System::Drawing::Point(146, 305 - 80);

		this->label2->Location = System::Drawing::Point(20, 130 - m);
		this->label4->Location = System::Drawing::Point(20, 170 - m);
		this->label3->Location = System::Drawing::Point(20, 210 - m);
		this->label6->Location = System::Drawing::Point(20, 250 - m);

		this->textBox1->Location = System::Drawing::Point(12, 145 - m);
		this->textBox2->Location = System::Drawing::Point(12, 185 - m);
		this->textBox3->Location = System::Drawing::Point(12, 225 - m);
		this->comboBox2->Location = System::Drawing::Point(12, 265 - m);
	}
	if (comboBox1->SelectedIndex == 1) 
	{
		label6->Visible = false;
		comboBox2->Visible = false;
		this->label3->Text = "Назначение прожектора";
	}

	if (comboBox1->SelectedIndex == 2)
	{
		label6->Visible = false;
		comboBox2->Visible = false;
		this->label3->Text = "Область применения проектора";
	}
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox4->SelectedIndex == 0) { this->label3->Text = "Стилевое оформление люстры"; }
	if (comboBox4->SelectedIndex == 1) { this->label3->Text = "Запасные лампы ночника"; }
	if (comboBox4->SelectedIndex == 2) { this->label3->Text = "Способ крепления спота"; }
	if (comboBox4->SelectedIndex == 3) { this->label3->Text = "Назначение бра"; }
	if (comboBox4->SelectedIndex == 4) { this->label3->Text = "Форма абажура торшера"; }
	if (comboBox4->SelectedIndex == 5) { this->label3->Text = "Способ установки лампы"; }
}


private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) // Если вводятся цифры от 0 до 9 или нажимается backspace то "далее"
			return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}

private: System::Void поискToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox4->Text == "")
	{ 
	MessageBox::Show("Поле поиска не заполнено!", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else
	{
		Search(dataGridView1);
	}
}
private: System::Void сортировкаПоНазваниюToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Sort(dataGridView1->Columns[0], ListSortDirection::Ascending);
}
private: System::Void сортировкаПоТипуToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Sort(dataGridView1->Columns[1], ListSortDirection::Ascending);
}
private: System::Void сортировкаПоЦенеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Sort(dataGridView1->Columns[2], ListSortDirection::Ascending);
}
};
}
