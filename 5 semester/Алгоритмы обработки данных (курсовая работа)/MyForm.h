#pragma once
#include <fstream>
#include "MyForm1.h"


#define M 10
#define N 10
int mas[M][N];


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text::RegularExpressions;

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
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: int lastValue; //Значение dataGridView1 до изменения ячейки
	protected:
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  матрицуИзФайлаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  матрицуВФайлToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripMenuItem^  оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::Label^  label4;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->матрицуИзФайлаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->матрицуВФайлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(20, 48);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(250, 250);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellBeginEdit += gcnew System::Windows::Forms::DataGridViewCellCancelEventHandler(this, &MyForm::dataGridView1_CellBeginEdit);
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellValueChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(23, 334);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(75, 20);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(130, 311);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 48);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Сформировать матрицу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(20, 373);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 48);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Нарисовать граф";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripButton1,
					this->toolStripButton2
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(574, 25);
			this->toolStrip1->TabIndex = 5;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2
			});
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(49, 22);
			this->toolStripButton1->Text = L"Файл";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->матрицуИзФайлаToolStripMenuItem,
					this->файлToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem1->Text = L"Загрузить";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// матрицуИзФайлаToolStripMenuItem
			// 
			this->матрицуИзФайлаToolStripMenuItem->Name = L"матрицуИзФайлаToolStripMenuItem";
			this->матрицуИзФайлаToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->матрицуИзФайлаToolStripMenuItem->Text = L"Матрицу из файла";
			this->матрицуИзФайлаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::матрицуИзФайлаToolStripMenuItem_Click);
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->файлToolStripMenuItem->Text = L"Матрицу по рёбрам";
			this->файлToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::файлToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->матрицуВФайлToolStripMenuItem });
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem2->Text = L"Сохранить";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem2_Click);
			// 
			// матрицуВФайлToolStripMenuItem
			// 
			this->матрицуВФайлToolStripMenuItem->Name = L"матрицуВФайлToolStripMenuItem";
			this->матрицуВФайлToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->матрицуВФайлToolStripMenuItem->Text = L"Матрицу в файл";
			this->матрицуВФайлToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::матрицуВФайлToolStripMenuItem_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->оПрограммеToolStripMenuItem });
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(66, 22);
			this->toolStripButton2->Text = L"Справка";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(130, 373);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 48);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Найти максимальное паросочетание и нарисовать граф";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(20, 466);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(249, 183);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 318);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Число вершин";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 447);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Лог";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(194, 437);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Очистить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(344, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(160, 16);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Изображение графа";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Матрица";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(574, 661);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(590, 700);
			this->MinimumSize = System::Drawing::Size(590, 700);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Максимальное паросочетание в двудольном графе";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool MatrixCreated = false; //Создана ли матрица

		// DFS (поиск в глубину) на основе рекурсивной функции которовая возвращает true
		// если паросочетание для вершины возможно
		bool bpm(bool *a, int rows, int columns, int u, bool *seen, int *matchR)
		{
			// Указатель на матрицу *a, в которой
			// номер строки (row) - номер вершины 1-ой доли (заявитель 'u')
			// номер стобца (column) - номер вершины 2-ой доли (работа 'v')

			// Пробуем каждую работу одну за другой
			for (int v = 0; v < columns; v++)
			{
				// Если заявитель заинтересован в работе 'v' и работа 'v'
				// не посещена.
				// Текущее значение строки * кол-во столбцов + текущее кол-во столбцов 1*6+0
				if (a[u * columns + v] && !seen[v])
				{
					seen[v] = true; // Отмечам 'v' посещенной

					// Если работа 'v' не назначена заявителю или
					// предварительно назначенный кандидат на работу 'v' (который matchR[v])
					// имеет альтернативную доступную работу.
					// Поскольку 'v' отмечен как посещённый (matchR[v]), то
					// в следующем рекурсивном вызов он не получит работу 'v' снова
					if (matchR[v] < 0 || bpm(a, rows, columns, matchR[v], seen, matchR))
					{
						matchR[v] = u;
						return true;
					}
				}
			}
			return false;
		}

		// Возвращает максимальное паросочетание от M до N
		int maxBPM(bool *a, int rows, int columns)
		{
			// Массив для отслеживания заявителей назначенных на
			// работы. Значение matchR[i] это номер заявителя
			// назначенного на работу i, значение -1 указывает на
			// то, что никто не назначен.
			int *matchR = new int[columns];

			// Первоначально все работы доступны
			memset(matchR, -1, sizeof(int)*columns);

			int result = 0; // Счётчик работ назначенных заявителю
			for (int u = 0; u < rows; u++)
			{
				// Помечаем все работы, которые не видит следующий
				// заявитель.
				bool *seen = new bool[columns];
				memset(seen, 0, sizeof(bool)*columns);

				// Найти если заявитель 'u' может получить работу
				if (bpm(a, rows, columns, u, seen, matchR))
					result++;
			}

			// Заполняем матрицу работ назначенных заявителям
			for (int i = 0; i < columns; i++)
			{
				if (matchR[i] != -1) mas[matchR[i]][i] = 1;
			}
			return result;
		}

		/*Сформировать матрицу по числу вершин из textBox1*/
		void CreateMatrix(int size)
		{
			dataGridView1->ColumnCount = size;
			dataGridView1->RowCount = size;

			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					dataGridView1->Rows[i]->Cells[j]->Value = NULL;
				}
			}
			richTextBox1->Text += "Сформирована пустая матрица для "+size+" вершин.\n";
			MatrixCreated = true;
		}

		/*Сформировать матрицу из файла с матрицей*/
		void LoadFile(DataGridView^ a, std::string file1)
		{
			std::ifstream file(file1, std::ios::in);
			int MN;
			file >> MN;

			if (MN < 11 && MN>0)
			{
				dataGridView1->ColumnCount = MN;
				dataGridView1->RowCount = MN;

				int temp;

				for (int i = 0; i < MN; i++) {
					for (int j = 0; j < MN; j++) {
						file >> temp;
						dataGridView1->Rows[i]->Cells[j]->Value = temp;
					}
				}
				file.close();
				richTextBox1->Text += "Матрица загружена из файла.\n";
				MatrixCreated = true;
			}
			else MessageBox::Show("Неверное число вершин!", "Ошибка");
		}

		/*Сформировать матрицу из файла с рёбрами*/
		void LoadFile1(DataGridView^ a, std::string file1)
		{
			std::ifstream file(file1, std::ios::in);
			int MN; //Число вершин
			int check1, check2; //Начало и конец ребра
			file >> MN;

			if (MN < 11 && MN>0)
			{
				dataGridView1->ColumnCount = MN;
				dataGridView1->RowCount = MN;

				//Cчитываем соединённые вершины из файла и формируем матрицу смежности
				while (!file.eof()) {
					if (!(file >> check1 >> check2)) break;
					dataGridView1->Rows[check1 - 1]->Cells[check2 - 1]->Value = 1;
					dataGridView1->Rows[check2 - 1]->Cells[check1 - 1]->Value = 1;
				}
				file.close();
				MatrixCreated = true;
			}
			else MessageBox::Show("Неверное число вершин!", "Ошибка");
		}

		/*Сохранить матрицу в файл*/
		void SaveFile(DataGridView^ a, std::string file1)
		{
			if (MatrixCreated == true )
			{
				std::ofstream file(file1, std::ios::out);

				int temp;
				temp = dataGridView1->RowCount;
				file << temp << "\n";

				for (int i = 0; i < dataGridView1->RowCount; i++) {
					for (int j = 0; j < dataGridView1->ColumnCount; j++) {
						temp = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
						file << temp << " ";
					}
					file << "\n";
				}
				file.close();
				richTextBox1->Text += "Матрица сохранена в файл.\n";
			}
			else MessageBox::Show("Создайте матрицу!", "Ошибка");
		}

		/*Нарисовать граф и если нужно найти максимальное паросочетание*/
		void DrawGraph(bool check) 
		{
			if (MatrixCreated == true){
			int RC;
			int CC;
			RC = dataGridView1->RowCount;
			CC = dataGridView1->ColumnCount;
			bool **ptrarray222 = new bool*[RC]; // RC строк в массиве

			for (int count = 0; count < RC; count++)
				ptrarray222[count] = new bool[CC]; // CC столбцов

			int tmp;

			for (int count_row = 0; count_row < RC; count_row++) {
				for (int count_column = 0; count_column < CC; count_column++) {
					tmp = Convert::ToInt32(dataGridView1->Rows[count_row]->Cells[count_column]->Value);
					ptrarray222[count_row][count_column] = Convert::ToBoolean(tmp);
					//richTextBox1->Text += ptrarray222[count_row][count_column] + " ";
				}
				//richTextBox1->Text += "\n";
			}

			bool *dyna2 = new bool[RC * CC];

			for (int i = 0; i < RC; i++) {
				for (int j = 0; j < CC; j++) {
					tmp = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
					dyna2[i*CC + j] = Convert::ToBoolean(tmp);
					//richTextBox1->Text += dyna2[i*CC + j] + " ";
				}
				//richTextBox1->Text += "\n";
			}
			
			//Создаём объекты для рисования
			Graphics^ g = this->CreateGraphics();
			//this->Invalidate();
			g->Clear(SystemColors::Control);
			//this->BackColor = SystemColors::Control;
			//System::Drawing::Region^ region1 = gcnew System::Drawing::Region(Rectangle(800, 100, 200, 200));
			Pen^ MyPen = gcnew Pen(System::Drawing::Color::Green); //Объект для окружности вершины
			SolidBrush^ mySolidBrush = gcnew SolidBrush(System::Drawing::Color::White); //Объект для круга вершины
			System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 16); //Объект для шрифта номера вершины
			SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black); // Объект для цвета номера вершины

			Pen ^MyPen1 = gcnew Pen(Color::FromArgb(50, Color::Red), 2);
			MyPen1->StartCap = System::Drawing::Drawing2D::LineCap::RoundAnchor;
			MyPen1->EndCap = System::Drawing::Drawing2D::LineCap::RoundAnchor;

			Pen ^MyPen2 = gcnew Pen(Color::FromArgb(150, Color::Green), 2);
			MyPen2->StartCap = System::Drawing::Drawing2D::LineCap::RoundAnchor;
			MyPen2->EndCap = System::Drawing::Drawing2D::LineCap::RoundAnchor;

			//Задаём начальные значения для рисования
			int output_num = 1; //Порядковый номер вершины
			String^ drawString; //Строка для рисования порядкового номера вершины

			int x0 = 20;
			int x_Ellipse = 50; //Начальное положение x координаты
			int y_Ellipse = 50; //Начальное положение y координаты
			int x_EllipceINC = 60; //Перемещение x координаты
			int y_EllipceINC = 60; //Перемещение x координаты

			int *temp_x1; //Координаты x нарисованной вершины
			int *temp_y1; //Координаты y нарисованной вершины
			temp_x1 = new int[RC];
			temp_y1 = new int[RC];


			int *temp_x2; //Координаты x нарисованной вершины
			int *temp_y2; //Координаты y нарисованной вершины
			temp_x2 = new int[CC];
			temp_y2 = new int[CC];


			x_Ellipse = 300 + x0 - 25;
			//if (check == true) x_Ellipse += 300;

			for (int i = 0; i < RC; i++) {
				//x_Ellipse = x_Ellipse + x_EllipceINC;
				//y_Ellipse = y_yy + 150 + y0 - 25;

				// рисуем окружность и круг
				g->FillEllipse(mySolidBrush, x_Ellipse, y_Ellipse, 50, 50);
				g->DrawEllipse(MyPen, Rectangle(x_Ellipse, y_Ellipse, 50, 50));

				// рисуем подярковый номер вершины
				drawString = System::Convert::ToString(output_num);
				output_num++;
				PointF drawPoint = PointF(x_Ellipse + 15, y_Ellipse + 15);
				g->DrawString(drawString, drawFont, drawBrush, drawPoint);

				//записываем координаты
				temp_x1[i] = x_Ellipse + 25;
				temp_y1[i] = y_Ellipse + 25;

				y_Ellipse = y_Ellipse + y_EllipceINC;
			}


			x_Ellipse = 500 + x0 - 25;
			y_Ellipse = 75 - 25;
			//if (check == true) x_Ellipse += 300;

			for (int j = RC; j < RC + CC; j++) {

				//рисуем окружность и круг
				g->FillEllipse(mySolidBrush, x_Ellipse, y_Ellipse, 50, 50);
				g->DrawEllipse(MyPen, Rectangle(x_Ellipse, y_Ellipse, 50, 50));

				//рисуем подярковый номер вершины
				drawString = System::Convert::ToString(output_num);
				output_num++;
				PointF drawPoint = PointF(x_Ellipse + 15, y_Ellipse + 15);
				g->DrawString(drawString, drawFont, drawBrush, drawPoint);

				//записываем координаты
				temp_x2[j - RC] = x_Ellipse + 25;
				temp_y2[j - RC] = y_Ellipse + 25;

				y_Ellipse = y_Ellipse + y_EllipceINC;
			}

			for (int i = 0; i < RC; i++) {
				for (int j = 0; j < CC; j++) {
					int fff = temp_y1[i];
					if (ptrarray222[i][j] == 1) { g->DrawLine(MyPen1, temp_x1[i], fff, temp_x2[j], temp_y2[j]); }
				}
			}

			richTextBox1->Text += "Граф нарисован\n";

			if (check == true) 
			{
				for (int i = 0; i < 10; i++) {
					for (int j = 0; j < 10; j++) {
						mas[i][j] = -1;
					}
				}

				int www = maxBPM(dyna2, RC, CC);
				richTextBox1->Text += "Максимальное паросочетание = " + www + "\n";

				for (int i = 0; i < RC; i++) {
					for (int j = 0; j < CC; j++) {
						int fff = temp_y1[i];
						//richTextBox1->Text += mas[i][j] + " ";
						if (mas[i][j] == 1) { g->DrawLine(MyPen2, temp_x1[i], fff, temp_x2[j], temp_y2[j]); }
					}
					//richTextBox1->Text += "\n";
				}
			}

			/*Очистка памяти*/
			for (int count = 0; count < RC; count++)
				delete []ptrarray222[count];

			delete [] dyna2;
			delete MyPen;
			delete mySolidBrush;
			delete drawFont;
			delete drawBrush;
			delete MyPen1;
			delete MyPen2;
			delete[] temp_x1;
			delete[] temp_y1;
			delete[] temp_x2;
			delete[] temp_y2;

			}
			else MessageBox::Show("Создайте матрицу!", "Ошибка");
		}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		/*Параметры dataGridView1*/
		dataGridView1->MultiSelect = false;
		dataGridView1->AllowUserToAddRows = false;
		dataGridView1->RowHeadersVisible = false;
		dataGridView1->ColumnHeadersVisible = false;
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Вы уверены, что хотите создать новую матрицу?\nСтарая матрица будет заменена!",
			"Создать матрицу", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
		if (dialogResult == System::Windows::Forms::DialogResult::Yes)
		{
			try {
				CreateMatrix(Convert::ToInt32(numericUpDown1->Text));
			}
			catch (...) { MessageBox::Show("Ошибка создания матрицы", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation); }
		}
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	DrawGraph(false);
}
private: System::Void MyForm_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}

private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	DrawGraph(true);
}

 private: System::Void dataGridView1_CellValueChanged(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	String ^Val = dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString();
	int val;
	bool A = Int32::TryParse(Val, val);
	if (A == false || val > 1 ||val < 0 ) 
	{ 
		dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = lastValue;
		MessageBox::Show("Неверное число " + Val +"\nВведите 0 или 1", "Ошибка");
	}
}

private: System::Void dataGridView1_CellBeginEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellCancelEventArgs^  e) {
	if (e->ColumnIndex == 1) lastValue = Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value);
	}

private: System::Void матрицуИзФайлаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Вы уверены, что хотите загрузить файл?", "Загрузить файл", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
	if (dialogResult == System::Windows::Forms::DialogResult::Yes)
	{
		try {
			LoadFile(dataGridView1, "Matrix.txt");
		}
		catch (...) { MessageBox::Show("Ошибка при загрузке файла!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation); }
	}
}
private: System::Void файлToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Вы уверены, что хотите загрузить файл?", "Загрузить файл", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
	if (dialogResult == System::Windows::Forms::DialogResult::Yes)
	{
		try {
			LoadFile1(dataGridView1, "input.txt");
		}
		catch (...) { MessageBox::Show("Ошибка при загрузке файла!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation); }
	}
}
private: System::Void матрицуВФайлToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Вы уверены, что хотите сохранить файл?", "Сохранить файл", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
	if (dialogResult == System::Windows::Forms::DialogResult::Yes)
	{
		try {
			SaveFile(dataGridView1, "Matrix.txt");
		}
		catch (...) { MessageBox::Show("Ошибка при сохранении файла!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation); }
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->Clear();
}

private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1 ^form = gcnew MyForm1();
	form->ShowDialog();
}
};
}
