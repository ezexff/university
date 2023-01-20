#pragma once

#include "MyForm1.h"

namespace Проект1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  студентыСУказаниемФамилииИДатыРожденияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  студентыотличниковПоМатематикеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  студентыотличниковПоВсемПредметамToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  студентыЧейВозрастСтарше20ЛетToolStripMenuItem;

	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->студентыСУказаниемФамилииИДатыРожденияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->студентыотличниковПоМатематикеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->студентыотличниковПоВсемПредметамToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->студентыЧейВозрастСтарше20ЛетToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(17, 28);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(650, 364);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(17, 409);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Загрузить таблицу";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(363, 409);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(141, 409);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(119, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Добавить студента";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(266, 409);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(91, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Сортировка";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripDropDownButton1 });
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(679, 25);
			this->toolStrip1->TabIndex = 8;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->студентыСУказаниемФамилииИДатыРожденияToolStripMenuItem,
					this->студентыотличниковПоМатематикеToolStripMenuItem, this->студентыотличниковПоВсемПредметамToolStripMenuItem, this->студентыЧейВозрастСтарше20ЛетToolStripMenuItem
			});
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(136, 22);
			this->toolStripDropDownButton1->Text = L"Запросы на выборку";
			// 
			// студентыСУказаниемФамилииИДатыРожденияToolStripMenuItem
			// 
			this->студентыСУказаниемФамилииИДатыРожденияToolStripMenuItem->Name = L"студентыСУказаниемФамилииИДатыРожденияToolStripMenuItem";
			this->студентыСУказаниемФамилииИДатыРожденияToolStripMenuItem->Size = System::Drawing::Size(348, 22);
			this->студентыСУказаниемФамилииИДатыРожденияToolStripMenuItem->Text = L"Студенты с указанием фамилии и даты рождения";
			this->студентыСУказаниемФамилииИДатыРожденияToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::студентыСУказаниемФамилииИДатыРожденияToolStripMenuItem_Click);
			// 
			// студентыотличниковПоМатематикеToolStripMenuItem
			// 
			this->студентыотличниковПоМатематикеToolStripMenuItem->Name = L"студентыотличниковПоМатематикеToolStripMenuItem";
			this->студентыотличниковПоМатематикеToolStripMenuItem->Size = System::Drawing::Size(348, 22);
			this->студентыотличниковПоМатематикеToolStripMenuItem->Text = L"Студенты-отличников по математике";
			this->студентыотличниковПоМатематикеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::студентыотличниковПоМатематикеToolStripMenuItem_Click);
			// 
			// студентыотличниковПоВсемПредметамToolStripMenuItem
			// 
			this->студентыотличниковПоВсемПредметамToolStripMenuItem->Name = L"студентыотличниковПоВсемПредметамToolStripMenuItem";
			this->студентыотличниковПоВсемПредметамToolStripMenuItem->Size = System::Drawing::Size(348, 22);
			this->студентыотличниковПоВсемПредметамToolStripMenuItem->Text = L"Студенты-отличников по всем предметам";
			this->студентыотличниковПоВсемПредметамToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::студентыотличниковПоВсемПредметамToolStripMenuItem_Click);
			// 
			// студентыЧейВозрастСтарше20ЛетToolStripMenuItem
			// 
			this->студентыЧейВозрастСтарше20ЛетToolStripMenuItem->Name = L"студентыЧейВозрастСтарше20ЛетToolStripMenuItem";
			this->студентыЧейВозрастСтарше20ЛетToolStripMenuItem->Size = System::Drawing::Size(348, 22);
			this->студентыЧейВозрастСтарше20ЛетToolStripMenuItem->Text = L"Студенты, чей возраст старше 20 лет";
			this->студентыЧейВозрастСтарше20ЛетToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::студентыЧейВозрастСтарше20ЛетToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(679, 444);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 }
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		dataGridView1->MultiSelect = false;
		dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		dataGridView1->AllowUserToAddRows = false;
			 }

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		dataGridView1->ColumnCount = 5;
		//
		// Заголовки столбцов
		dataGridView1->Columns[0]->HeaderCell->Value = "Фамилия";
		dataGridView1->Columns[1]->HeaderCell->Value = "Дата рождения";
		dataGridView1->Columns[1]->DefaultCellStyle->Format = "d";
		dataGridView1->Columns[1]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
		dataGridView1->Columns[2]->HeaderCell->Value = "Оценка по математике";
		dataGridView1->Columns[3]->HeaderCell->Value = "Оценка по информатике";
		dataGridView1->Columns[4]->HeaderCell->Value = "Оценка по иностранному языку";

		dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;

		System::Data::OleDb::OleDbConnection^ connect;
		int i = 0;
		try 
		{
			connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=DB.accdb; Persist Security Info=False");
			connect->Open();
			System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT * FROM Таблица1", connect);
			System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader(); 
			while (oledbRead->Read()) {
				this->dataGridView1->Rows->Add(oledbRead["Фамилия"], oledbRead["Год рождения"], oledbRead["Оценка по математике"], oledbRead["Оценка по информатике"], oledbRead["Оценка по иностранному языку"]);
			}
			oledbRead->Close();
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
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1 ^form = gcnew MyForm1(); // создаём экземпляр формы
	form->ShowDialog(); // показываем
}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->ColumnCount = 5;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Фамилия";
	dataGridView1->Columns[1]->HeaderCell->Value = "Дата рождения";
	dataGridView1->Columns[1]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[1]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[2]->HeaderCell->Value = "Оценка по математике";
	dataGridView1->Columns[3]->HeaderCell->Value = "Оценка по информатике";
	dataGridView1->Columns[4]->HeaderCell->Value = "Оценка по иностранному языку";
	
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=DB.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT * FROM Таблица1 ORDER BY Фамилия", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Фамилия"], oledbRead["Год рождения"], oledbRead["Оценка по математике"], oledbRead["Оценка по информатике"], oledbRead["Оценка по иностранному языку"]);
		}
		oledbRead->Close();
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

private: System::Void студентыСУказаниемФамилииИДатыРожденияToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->ColumnCount = 2;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Фамилия";
	dataGridView1->Columns[1]->HeaderCell->Value = "Дата рождения";
	dataGridView1->Columns[1]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[1]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;

	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=DB.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT Фамилия, [Год рождения] FROM Таблица1", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Фамилия"], oledbRead["Год рождения"]);
		}
		oledbRead->Close();
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
private: System::Void студентыотличниковПоМатематикеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->ColumnCount = 5;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Фамилия";
	dataGridView1->Columns[1]->HeaderCell->Value = "Дата рождения";
	dataGridView1->Columns[1]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[1]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[2]->HeaderCell->Value = "Оценка по математике";
	dataGridView1->Columns[3]->HeaderCell->Value = "Оценка по информатике";
	dataGridView1->Columns[4]->HeaderCell->Value = "Оценка по иностранному языку";

	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=DB.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT * FROM Таблица1 where [Оценка по математике]=5", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Фамилия"], oledbRead["Год рождения"], oledbRead["Оценка по математике"], oledbRead["Оценка по информатике"], oledbRead["Оценка по иностранному языку"]);
		}
		oledbRead->Close();
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
private: System::Void студентыотличниковПоВсемПредметамToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->ColumnCount = 5;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Фамилия";
	dataGridView1->Columns[1]->HeaderCell->Value = "Дата рождения";
	dataGridView1->Columns[1]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[1]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[2]->HeaderCell->Value = "Оценка по математике";
	dataGridView1->Columns[3]->HeaderCell->Value = "Оценка по информатике";
	dataGridView1->Columns[4]->HeaderCell->Value = "Оценка по иностранному языку";

	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=DB.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT * FROM Таблица1 where [Оценка по математике]=5 and [Оценка по информатике]=5 and [Оценка по иностранному языку]=5", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Фамилия"], oledbRead["Год рождения"], oledbRead["Оценка по математике"], oledbRead["Оценка по информатике"], oledbRead["Оценка по иностранному языку"]);
		}
		oledbRead->Close();
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
private: System::Void студентыЧейВозрастСтарше20ЛетToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->ColumnCount = 5;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Фамилия";
	dataGridView1->Columns[1]->HeaderCell->Value = "Дата рождения";
	dataGridView1->Columns[1]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[1]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[2]->HeaderCell->Value = "Оценка по математике";
	dataGridView1->Columns[3]->HeaderCell->Value = "Оценка по информатике";
	dataGridView1->Columns[4]->HeaderCell->Value = "Оценка по иностранному языку";

	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=DB.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT * FROM Таблица1 where (DateDiff(\"yyyy\",[Год рождения],DATE())>20)", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Фамилия"], oledbRead["Год рождения"], oledbRead["Оценка по математике"], oledbRead["Оценка по информатике"], oledbRead["Оценка по иностранному языку"]);
		}
		oledbRead->Close();
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
