#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"

int SelectedTable=10;

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
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^  отелиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  городаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  страныToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  типТураToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  типРазмещенияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  типПитанияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  авиарейсыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  турагентстваToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  турСНаименьшейСтоимостьюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  турСНаибольшейСтоимостьюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  стоимостьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  от50ТрИДо80ТрToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  от80ТрToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  информацияОбОтелеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  добавитьТурагентстваToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  звёздToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  звездыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  звездыToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  звездыToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  звездаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  добавитьСтрануToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  городаВАлфавитномПорядкеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  городаВОбратномПорядкеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  страныВАлфавитномПорядкеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  страныВОбратномПорядкеToolStripMenuItem;
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
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->добавитьТурагентстваToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьСтрануToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton2 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->турСНаименьшейСтоимостьюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->турСНаибольшейСтоимостьюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->стоимостьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->от50ТрИДо80ТрToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->от80ТрToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->информацияОбОтелеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->звёздToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->звездыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->звездыToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->звездыToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->звездаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->городаВАлфавитномПорядкеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->городаВОбратномПорядкеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->страныВАлфавитномПорядкеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->страныВОбратномПорядкеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton3 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->турагентстваToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->отелиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->городаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->страныToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->типТураToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->типРазмещенияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->типПитанияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->авиарейсыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->dataGridView1->Location = System::Drawing::Point(12, 56);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(1240, 613);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripDropDownButton1,
					this->toolStripDropDownButton2, this->toolStripDropDownButton3, this->toolStripButton1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1264, 25);
			this->toolStrip1->TabIndex = 8;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->добавитьТурагентстваToolStripMenuItem,
					this->toolStripMenuItem2, this->добавитьСтрануToolStripMenuItem, this->toolStripMenuItem1
			});
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(49, 22);
			this->toolStripDropDownButton1->Text = L"Файл";
			// 
			// добавитьТурагентстваToolStripMenuItem
			// 
			this->добавитьТурагентстваToolStripMenuItem->Name = L"добавитьТурагентстваToolStripMenuItem";
			this->добавитьТурагентстваToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->добавитьТурагентстваToolStripMenuItem->Text = L"Добавить тур";
			this->добавитьТурагентстваToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::добавитьТурагентстваToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(267, 22);
			this->toolStripMenuItem2->Text = L"Добавить отель";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem2_Click);
			// 
			// добавитьСтрануToolStripMenuItem
			// 
			this->добавитьСтрануToolStripMenuItem->Name = L"добавитьСтрануToolStripMenuItem";
			this->добавитьСтрануToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->добавитьСтрануToolStripMenuItem->Text = L"Добавить город";
			this->добавитьСтрануToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::добавитьСтрануToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(267, 22);
			this->toolStripMenuItem1->Text = L"Добавить дополнительные данные";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// toolStripDropDownButton2
			// 
			this->toolStripDropDownButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->toolStripMenuItem3,
					this->toolStripMenuItem4, this->турСНаименьшейСтоимостьюToolStripMenuItem, this->турСНаибольшейСтоимостьюToolStripMenuItem, this->стоимостьToolStripMenuItem,
					this->от50ТрИДо80ТрToolStripMenuItem, this->от80ТрToolStripMenuItem, this->информацияОбОтелеToolStripMenuItem, this->городаВАлфавитномПорядкеToolStripMenuItem,
					this->городаВОбратномПорядкеToolStripMenuItem, this->страныВАлфавитномПорядкеToolStripMenuItem, this->страныВОбратномПорядкеToolStripMenuItem
			});
			this->toolStripDropDownButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton2.Image")));
			this->toolStripDropDownButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton2->Name = L"toolStripDropDownButton2";
			this->toolStripDropDownButton2->Size = System::Drawing::Size(69, 22);
			this->toolStripDropDownButton2->Text = L"Запросы";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(258, 22);
			this->toolStripMenuItem3->Text = L"Список туров в турагентствах";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(258, 22);
			this->toolStripMenuItem4->Text = L"Средняя стоимость туров";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem4_Click);
			// 
			// турСНаименьшейСтоимостьюToolStripMenuItem
			// 
			this->турСНаименьшейСтоимостьюToolStripMenuItem->Name = L"турСНаименьшейСтоимостьюToolStripMenuItem";
			this->турСНаименьшейСтоимостьюToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->турСНаименьшейСтоимостьюToolStripMenuItem->Text = L"Туры с наименьшей стоимостью";
			this->турСНаименьшейСтоимостьюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::турСНаименьшейСтоимостьюToolStripMenuItem_Click);
			// 
			// турСНаибольшейСтоимостьюToolStripMenuItem
			// 
			this->турСНаибольшейСтоимостьюToolStripMenuItem->Name = L"турСНаибольшейСтоимостьюToolStripMenuItem";
			this->турСНаибольшейСтоимостьюToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->турСНаибольшейСтоимостьюToolStripMenuItem->Text = L"Туры с наибольшей стоимостью";
			this->турСНаибольшейСтоимостьюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::турСНаибольшейСтоимостьюToolStripMenuItem_Click);
			// 
			// стоимостьToolStripMenuItem
			// 
			this->стоимостьToolStripMenuItem->Name = L"стоимостьToolStripMenuItem";
			this->стоимостьToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->стоимостьToolStripMenuItem->Text = L"Туры до 50 т.р.";
			this->стоимостьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::стоимостьToolStripMenuItem_Click);
			// 
			// от50ТрИДо80ТрToolStripMenuItem
			// 
			this->от50ТрИДо80ТрToolStripMenuItem->Name = L"от50ТрИДо80ТрToolStripMenuItem";
			this->от50ТрИДо80ТрToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->от50ТрИДо80ТрToolStripMenuItem->Text = L"Туры от 50 т.р. и до 80 т.р.";
			this->от50ТрИДо80ТрToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::от50ТрИДо80ТрToolStripMenuItem_Click);
			// 
			// от80ТрToolStripMenuItem
			// 
			this->от80ТрToolStripMenuItem->Name = L"от80ТрToolStripMenuItem";
			this->от80ТрToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->от80ТрToolStripMenuItem->Text = L"Туры от 80 т.р.";
			this->от80ТрToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::от80ТрToolStripMenuItem_Click);
			// 
			// информацияОбОтелеToolStripMenuItem
			// 
			this->информацияОбОтелеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->звёздToolStripMenuItem,
					this->звездыToolStripMenuItem, this->звездыToolStripMenuItem1, this->звездыToolStripMenuItem2, this->звездаToolStripMenuItem
			});
			this->информацияОбОтелеToolStripMenuItem->Name = L"информацияОбОтелеToolStripMenuItem";
			this->информацияОбОтелеToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->информацияОбОтелеToolStripMenuItem->Text = L"Отели";
			this->информацияОбОтелеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::информацияОбОтелеToolStripMenuItem_Click);
			// 
			// звёздToolStripMenuItem
			// 
			this->звёздToolStripMenuItem->Name = L"звёздToolStripMenuItem";
			this->звёздToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->звёздToolStripMenuItem->Text = L"5 звёзд";
			this->звёздToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::звёздToolStripMenuItem_Click);
			// 
			// звездыToolStripMenuItem
			// 
			this->звездыToolStripMenuItem->Name = L"звездыToolStripMenuItem";
			this->звездыToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->звездыToolStripMenuItem->Text = L"4 звезды";
			this->звездыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::звездыToolStripMenuItem_Click);
			// 
			// звездыToolStripMenuItem1
			// 
			this->звездыToolStripMenuItem1->Name = L"звездыToolStripMenuItem1";
			this->звездыToolStripMenuItem1->Size = System::Drawing::Size(120, 22);
			this->звездыToolStripMenuItem1->Text = L"3 звезды";
			this->звездыToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::звездыToolStripMenuItem1_Click);
			// 
			// звездыToolStripMenuItem2
			// 
			this->звездыToolStripMenuItem2->Name = L"звездыToolStripMenuItem2";
			this->звездыToolStripMenuItem2->Size = System::Drawing::Size(120, 22);
			this->звездыToolStripMenuItem2->Text = L"2 звезды";
			this->звездыToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::звездыToolStripMenuItem2_Click);
			// 
			// звездаToolStripMenuItem
			// 
			this->звездаToolStripMenuItem->Name = L"звездаToolStripMenuItem";
			this->звездаToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->звездаToolStripMenuItem->Text = L"1 звезда";
			this->звездаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::звездаToolStripMenuItem_Click);
			// 
			// городаВАлфавитномПорядкеToolStripMenuItem
			// 
			this->городаВАлфавитномПорядкеToolStripMenuItem->Name = L"городаВАлфавитномПорядкеToolStripMenuItem";
			this->городаВАлфавитномПорядкеToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->городаВАлфавитномПорядкеToolStripMenuItem->Text = L"Города в алфавитном порядке";
			this->городаВАлфавитномПорядкеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::городаВАлфавитномПорядкеToolStripMenuItem_Click);
			// 
			// городаВОбратномПорядкеToolStripMenuItem
			// 
			this->городаВОбратномПорядкеToolStripMenuItem->Name = L"городаВОбратномПорядкеToolStripMenuItem";
			this->городаВОбратномПорядкеToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->городаВОбратномПорядкеToolStripMenuItem->Text = L"Города в обратном порядке";
			this->городаВОбратномПорядкеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::городаВОбратномПорядкеToolStripMenuItem_Click);
			// 
			// страныВАлфавитномПорядкеToolStripMenuItem
			// 
			this->страныВАлфавитномПорядкеToolStripMenuItem->Name = L"страныВАлфавитномПорядкеToolStripMenuItem";
			this->страныВАлфавитномПорядкеToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->страныВАлфавитномПорядкеToolStripMenuItem->Text = L"Страны в алфавитном порядке";
			this->страныВАлфавитномПорядкеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::страныВАлфавитномПорядкеToolStripMenuItem_Click);
			// 
			// страныВОбратномПорядкеToolStripMenuItem
			// 
			this->страныВОбратномПорядкеToolStripMenuItem->Name = L"страныВОбратномПорядкеToolStripMenuItem";
			this->страныВОбратномПорядкеToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->страныВОбратномПорядкеToolStripMenuItem->Text = L"Страны в обратном порядке";
			this->страныВОбратномПорядкеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::страныВОбратномПорядкеToolStripMenuItem_Click);
			// 
			// toolStripDropDownButton3
			// 
			this->toolStripDropDownButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->toolStripMenuItem5,
					this->турагентстваToolStripMenuItem, this->toolStripMenuItem6, this->отелиToolStripMenuItem, this->городаToolStripMenuItem, this->страныToolStripMenuItem,
					this->типТураToolStripMenuItem, this->типРазмещенияToolStripMenuItem, this->типПитанияToolStripMenuItem, this->авиарейсыToolStripMenuItem
			});
			this->toolStripDropDownButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton3.Image")));
			this->toolStripDropDownButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton3->Name = L"toolStripDropDownButton3";
			this->toolStripDropDownButton3->Size = System::Drawing::Size(103, 22);
			this->toolStripDropDownButton3->Text = L"Список таблиц";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(186, 22);
			this->toolStripMenuItem5->Text = L"Турагентства и туры";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem5_Click);
			// 
			// турагентстваToolStripMenuItem
			// 
			this->турагентстваToolStripMenuItem->Name = L"турагентстваToolStripMenuItem";
			this->турагентстваToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->турагентстваToolStripMenuItem->Text = L"Турагентства";
			this->турагентстваToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::турагентстваToolStripMenuItem_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(186, 22);
			this->toolStripMenuItem6->Text = L"Туры";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem6_Click);
			// 
			// отелиToolStripMenuItem
			// 
			this->отелиToolStripMenuItem->Name = L"отелиToolStripMenuItem";
			this->отелиToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->отелиToolStripMenuItem->Text = L"Отели";
			this->отелиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::отелиToolStripMenuItem_Click);
			// 
			// городаToolStripMenuItem
			// 
			this->городаToolStripMenuItem->Name = L"городаToolStripMenuItem";
			this->городаToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->городаToolStripMenuItem->Text = L"Города";
			this->городаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::городаToolStripMenuItem_Click);
			// 
			// страныToolStripMenuItem
			// 
			this->страныToolStripMenuItem->Name = L"страныToolStripMenuItem";
			this->страныToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->страныToolStripMenuItem->Text = L"Страны";
			this->страныToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::страныToolStripMenuItem_Click);
			// 
			// типТураToolStripMenuItem
			// 
			this->типТураToolStripMenuItem->Name = L"типТураToolStripMenuItem";
			this->типТураToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->типТураToolStripMenuItem->Text = L"Тип тура";
			this->типТураToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::типТураToolStripMenuItem_Click);
			// 
			// типРазмещенияToolStripMenuItem
			// 
			this->типРазмещенияToolStripMenuItem->Name = L"типРазмещенияToolStripMenuItem";
			this->типРазмещенияToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->типРазмещенияToolStripMenuItem->Text = L"Тип размещения";
			this->типРазмещенияToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::типРазмещенияToolStripMenuItem_Click);
			// 
			// типПитанияToolStripMenuItem
			// 
			this->типПитанияToolStripMenuItem->Name = L"типПитанияToolStripMenuItem";
			this->типПитанияToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->типПитанияToolStripMenuItem->Text = L"Тип питания";
			this->типПитанияToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::типПитанияToolStripMenuItem_Click);
			// 
			// авиарейсыToolStripMenuItem
			// 
			this->авиарейсыToolStripMenuItem->Name = L"авиарейсыToolStripMenuItem";
			this->авиарейсыToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->авиарейсыToolStripMenuItem->Text = L"Авиарейсы";
			this->авиарейсыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::авиарейсыToolStripMenuItem_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(168, 22);
			this->toolStripButton1->Text = L"Удалить выделенную запись";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(31, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Таблица: ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Справочник туриста";
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

private: System::Void toolStripMenuItem5_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	SelectedTable = 0;
	label1->Text="Таблица: Турагентства и туры";
	dataGridView1->ColumnCount = 2;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Турагентства";
	dataGridView1->Columns[1]->HeaderCell->Value = "Туры";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT  Турагентства, Название FROM    Турагентства, [Турагентства и туры], Туры WHERE[Турагентства и туры].[Код турагентства] = Турагентства.Код AND[Турагентства и туры].Туры = Туры.Код", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Турагентства"], oledbRead["Название"]);
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

private: System::Void toolStripMenuItem6_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 1;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Таблица: Туры";
	dataGridView1->ColumnCount = 10;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Код";
	dataGridView1->Columns[1]->HeaderCell->Value = "Название";
	dataGridView1->Columns[2]->HeaderCell->Value = "Дата начала";
	dataGridView1->Columns[2]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[3]->HeaderCell->Value = "Дата конца";
	dataGridView1->Columns[3]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[4]->HeaderCell->Value = "Тип тура";
	dataGridView1->Columns[5]->HeaderCell->Value = "Тип питания";
	dataGridView1->Columns[6]->HeaderCell->Value = "Отели";
	dataGridView1->Columns[7]->HeaderCell->Value = "Рейс вылета";
	dataGridView1->Columns[8]->HeaderCell->Value = "Рейс прилёта";
	dataGridView1->Columns[9]->HeaderCell->Value = "Стоимость";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT Туры![Код], Туры!Название, Туры![Дата начала], Туры![Дата конца], [Тип тура]!Название, [Тип питания]!Название, [Отели]!Название, Туры![Рейс вылета], Туры![Рейс прилёта], Туры!Стоимость FROM[Тип тура], [Тип питания], Отели, Туры WHERE Туры.[Тип тура] = [Тип тура].Код AND Туры.[Тип питания] = [Тип питания].Код AND Туры.[Отели] = [Отели].Код", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Туры![Код]"], oledbRead["Туры!Название"], oledbRead["Туры![Дата начала]"], oledbRead["Туры![Дата конца]"], oledbRead["[Тип тура]!Название"], oledbRead["[Тип питания]!Название"], oledbRead["[Отели]!Название"], oledbRead["Туры![Рейс вылета]"], oledbRead["Туры![Рейс прилёта]"], oledbRead["Туры!Стоимость"]);
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

private: System::Void отелиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 2;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Таблица: Отели";
	dataGridView1->ColumnCount = 5;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Код";
	dataGridView1->Columns[1]->HeaderCell->Value = "Название";
	dataGridView1->Columns[2]->HeaderCell->Value = "Тип размещения";
	dataGridView1->Columns[3]->HeaderCell->Value = "Количество звёзд";
	dataGridView1->Columns[4]->HeaderCell->Value = "Город";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT Отели![Код], Отели![Название], [Тип размещения]!Название, Отели![Количество звёзд], Города!Название FROM[Тип размещения], Города, Отели WHERE Отели.[Тип размещения] = [Тип размещения].Код AND Отели.[Город] = [Города].Код", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Отели![Код]"], oledbRead["Отели![Название]"], oledbRead["[Тип размещения]!Название"], oledbRead["Отели![Количество звёзд]"], oledbRead["Города!Название"]);
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

private: System::Void городаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 3;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Таблица: Города";
	dataGridView1->ColumnCount = 3;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Код";
	dataGridView1->Columns[1]->HeaderCell->Value = "Название";
	dataGridView1->Columns[2]->HeaderCell->Value = "Страна";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT Города!Код, Города!Название, Страны!Название FROM Страны, Города WHERE Города.[Страна] = Страны.Код", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Города!Код"], oledbRead["Города!Название"], oledbRead["Страны!Название"]);
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

private: System::Void страныToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 4;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Таблица: Страны";
	dataGridView1->ColumnCount = 2;

	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Код";
	dataGridView1->Columns[1]->HeaderCell->Value = "Название";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT * FROM [Страны]", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Код"], oledbRead["Название"]);
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

private: System::Void типТураToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 5;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Таблица: Тип тура";
	dataGridView1->ColumnCount = 2;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Код";
	dataGridView1->Columns[1]->HeaderCell->Value = "Тип тура";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT * FROM [Тип тура]", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Код"], oledbRead["Название"]);
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

private: System::Void типРазмещенияToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 6;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Таблица: Тип размещения";
	dataGridView1->ColumnCount = 2;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Код";
	dataGridView1->Columns[1]->HeaderCell->Value = "Тип размещения";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT * FROM [Тип размещения]", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Код"], oledbRead["Название"]);
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

private: System::Void типПитанияToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 7;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Таблица: Тип питания";
	dataGridView1->ColumnCount = 2;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Код";
	dataGridView1->Columns[1]->HeaderCell->Value = "Тип питания";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT * FROM [Тип питания]", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Код"], oledbRead["Название"]);
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

private: System::Void авиарейсыToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 8;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Таблица: Авиарейсы";
	dataGridView1->ColumnCount = 7;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Код";
	dataGridView1->Columns[1]->HeaderCell->Value = "Город вылета";
	dataGridView1->Columns[2]->HeaderCell->Value = "Дата вылета";
	dataGridView1->Columns[2]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[3]->HeaderCell->Value = "Время вылета";
	dataGridView1->Columns[3]->DefaultCellStyle->Format = "t";
	dataGridView1->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[4]->HeaderCell->Value = "Город прилёта";
	dataGridView1->Columns[5]->HeaderCell->Value = "Дата прилёта";
	dataGridView1->Columns[5]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[5]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[6]->HeaderCell->Value = "Время прилёта";
	dataGridView1->Columns[6]->DefaultCellStyle->Format = "t";
	dataGridView1->Columns[6]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT * FROM [Авиарейсы]", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Код"], oledbRead["Город вылета"], oledbRead["Дата вылета"], oledbRead["Время вылета"], oledbRead["Город прилёта"], oledbRead["Дата прилёта"], oledbRead["Время прилёта"]);
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

private: System::Void турагентстваToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 9;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Таблица: Турагентства";
	dataGridView1->ColumnCount = 2;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Код";
	dataGridView1->Columns[1]->HeaderCell->Value = "Турагентства";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT * FROM [Турагентства]", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Код"], oledbRead["Турагентства"]);
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
private: System::Void toolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Запрос: Список туров в турагентствах";
	dataGridView1->ColumnCount = 10;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Турагентства";
	dataGridView1->Columns[1]->HeaderCell->Value = "Туры";
	dataGridView1->Columns[2]->HeaderCell->Value = "Дата начала";
	dataGridView1->Columns[2]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[3]->HeaderCell->Value = "Дата конца";
	dataGridView1->Columns[3]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[4]->HeaderCell->Value = "Тип тура";
	dataGridView1->Columns[5]->HeaderCell->Value = "Тип питания";
	dataGridView1->Columns[6]->HeaderCell->Value = "Отели";
	dataGridView1->Columns[7]->HeaderCell->Value = "Рейс вылета";
	dataGridView1->Columns[8]->HeaderCell->Value = "Рейс прилёта";
	dataGridView1->Columns[9]->HeaderCell->Value = "Стоимость";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT Турагентства, Туры!Название, Туры![Дата начала], Туры![Дата конца], [Тип тура]!Название, [Тип питания]!Название, [Отели]!Название, Туры![Рейс вылета], Туры![Рейс прилёта], Туры!Стоимость FROM[Турагентства], [Турагентства и туры], [Тип тура], [Тип питания], Отели, Туры WHERE[Турагентства и туры].[Код турагентства] = Турагентства.Код and[Турагентства и туры].Туры = Туры.Код and Туры.[Тип тура] = [Тип тура].Код AND Туры.[Тип питания] = [Тип питания].Код AND Туры.[Отели] = [Отели].Код; ", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Турагентства"], oledbRead["Туры!Название"], oledbRead["Туры![Дата начала]"], oledbRead["Туры![Дата конца]"], oledbRead["[Тип тура]!Название"], oledbRead["[Тип питания]!Название"], oledbRead["[Отели]!Название"], oledbRead["Туры![Рейс вылета]"], oledbRead["Туры![Рейс прилёта]"], oledbRead["Туры!Стоимость"]);
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

private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1 ^form = gcnew MyForm1(); // создаём экземпляр формы
	form->ShowDialog(); // показываем
}

private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm2 ^form = gcnew MyForm2(); 
	form->ShowDialog();
}

private: System::Void toolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Запрос: Средняя стоимость туров";
	dataGridView1->ColumnCount = 1;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Средняя стоимость тура";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT AVG(Стоимость) as query1 FROM Туры", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["query1"]);
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
private: System::Void турСНаименьшейСтоимостьюToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Запрос: Туры с наименьшей стоимостью";
	dataGridView1->ColumnCount = 5;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Код";
	dataGridView1->Columns[1]->HeaderCell->Value = "Название";
	dataGridView1->Columns[2]->HeaderCell->Value = "Дата начала";
	dataGridView1->Columns[2]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[3]->HeaderCell->Value = "Дата конца";
	dataGridView1->Columns[3]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[4]->HeaderCell->Value = "Стоимость";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select Код, Название, [Дата начала], [Дата конца], Стоимость from [Туры] where [Стоимость] = (select min([Стоимость]) from [Туры])", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Код"], oledbRead["Название"], oledbRead["Дата начала"], oledbRead["Дата конца"], oledbRead["Стоимость"]);
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
private: System::Void турСНаибольшейСтоимостьюToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Запрос: Туры с наибольшей стоимостью";
	dataGridView1->ColumnCount = 5;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Код";
	dataGridView1->Columns[1]->HeaderCell->Value = "Название";
	dataGridView1->Columns[2]->HeaderCell->Value = "Дата начала";
	dataGridView1->Columns[2]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[3]->HeaderCell->Value = "Дата конца";
	dataGridView1->Columns[3]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[4]->HeaderCell->Value = "Стоимость";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select Код, Название, [Дата начала], [Дата конца], Стоимость from [Туры] where [Стоимость] = (select max([Стоимость]) from [Туры])", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Код"], oledbRead["Название"], oledbRead["Дата начала"], oledbRead["Дата конца"], oledbRead["Стоимость"]);
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
private: System::Void стоимостьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Запрос: Туры до 50 т.р.";
	dataGridView1->ColumnCount = 5;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Код";
	dataGridView1->Columns[1]->HeaderCell->Value = "Название";
	dataGridView1->Columns[2]->HeaderCell->Value = "Дата начала";
	dataGridView1->Columns[2]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[3]->HeaderCell->Value = "Дата конца";
	dataGridView1->Columns[3]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[4]->HeaderCell->Value = "Стоимость";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select Код, Название, [Дата начала], [Дата конца], Стоимость from [Туры] where [Стоимость] <= 50000", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Код"], oledbRead["Название"], oledbRead["Дата начала"], oledbRead["Дата конца"], oledbRead["Стоимость"]);
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
private: System::Void от50ТрИДо80ТрToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Запрос: Туры от 50 т.р. и до 80 т.р.";
	dataGridView1->ColumnCount = 5;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Код";
	dataGridView1->Columns[1]->HeaderCell->Value = "Название";
	dataGridView1->Columns[2]->HeaderCell->Value = "Дата начала";
	dataGridView1->Columns[2]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[3]->HeaderCell->Value = "Дата конца";
	dataGridView1->Columns[3]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[4]->HeaderCell->Value = "Стоимость";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select Код, Название, [Дата начала], [Дата конца], Стоимость from [Туры] where [Стоимость] BETWEEN 50000 AND 80000", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Код"], oledbRead["Название"], oledbRead["Дата начала"], oledbRead["Дата конца"], oledbRead["Стоимость"]);
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
private: System::Void от80ТрToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Запрос: Туры от 80 т.р.";
	dataGridView1->ColumnCount = 5;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Код";
	dataGridView1->Columns[1]->HeaderCell->Value = "Название";
	dataGridView1->Columns[2]->HeaderCell->Value = "Дата начала";
	dataGridView1->Columns[2]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[3]->HeaderCell->Value = "Дата конца";
	dataGridView1->Columns[3]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[4]->HeaderCell->Value = "Стоимость";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select Код, Название, [Дата начала], [Дата конца], Стоимость from [Туры] where [Стоимость] >= 80000", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Код"], oledbRead["Название"], oledbRead["Дата начала"], oledbRead["Дата конца"], oledbRead["Стоимость"]);
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
private: System::Void информацияОбОтелеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void добавитьТурагентстваToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm3 ^form = gcnew MyForm3();
	form->ShowDialog();
}
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (SelectedTable <= 9) {
		if (SelectedTable != 0) {
			int selRowNum = Convert::ToInt32(dataGridView1->Rows[dataGridView1->CurrentRow->Index]->Cells[0]->Value);
		String^ TableName = "";
		if (SelectedTable == 0) { TableName = "Турагентства и туры"; }//
		if (SelectedTable == 9) { TableName = "Турагентства"; }//
		if (SelectedTable == 1) { TableName = "Туры"; }
		if (SelectedTable == 2) { TableName = "Отели"; }
		if (SelectedTable == 3) { TableName = "Города"; }
		if (SelectedTable == 4) { TableName = "Страны"; }//
		if (SelectedTable == 5) { TableName = "Тип тура"; }//
		if (SelectedTable == 6) { TableName = "Тип размещения"; }//
		if (SelectedTable == 7) { TableName = "Тип питания"; }//
		if (SelectedTable == 8) { TableName = "Авиарейсы"; }
		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Вы уверены, что хотите удалить запись?", "Удаление записи", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
		if (dialogResult == System::Windows::Forms::DialogResult::Yes)
		{
			//do something
		System::Data::OleDb::OleDbConnection^ connect;
		try
		{
			connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
			connect->Open();
				System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("DELETE FROM [" + TableName + "] WHERE Код=" + selRowNum, connect);
				System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
			
					try
					{
						connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
						connect->Open();
						System::Data::OleDb::OleDbCommand^ command55 = gcnew System::Data::OleDb::OleDbCommand("DELETE FROM [Турагентства и туры] WHERE Туры=" + selRowNum, connect);
						System::Data::OleDb::OleDbDataReader^ oledbRead55 = command55->ExecuteReader();
					}
					catch (System::Data::DataException ^ o)
					{
						System::Windows::Forms::MessageBox::Show("error");
					}
					finally
					{
						connect->Close();
					}
			MessageBox::Show("Запись успешно удалена!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
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
		else if (dialogResult == System::Windows::Forms::DialogResult::No)
		{
			//do something else
		}
	
		}
		else {
			MessageBox::Show("Удаление из данной таблицы невозможно!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Exclamation); 

		}
	}
	else { MessageBox::Show("Удаление невозможно! Выделите \nзапись из списка таблиц!", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Exclamation); }
}

private: System::Void звёздToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Запрос: Отели 5 звёзд";
	dataGridView1->ColumnCount = 1;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Название";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select Название from Отели where [Количество звёзд]=5", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Название"]);
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
private: System::Void звездыToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Запрос: Отели 4 звёзды";
	dataGridView1->ColumnCount = 1;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Название";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select Название from Отели where [Количество звёзд]=4", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Название"]);
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
private: System::Void звездыToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Запрос: Отели 3 звёзды";
	dataGridView1->ColumnCount = 1;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Название";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select Название from Отели where [Количество звёзд]=3", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Название"]);
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
private: System::Void звездыToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Запрос: Отели 2 звёзды";
	dataGridView1->ColumnCount = 1;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Название";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select Название from Отели where [Количество звёзд]=2", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Название"]);
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
private: System::Void звездаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Запрос: Отели 1 звёзда";
	dataGridView1->ColumnCount = 1;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Название";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select Название from Отели where [Количество звёзд]=1", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Название"]);
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
private: System::Void добавитьСтрануToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm4 ^form = gcnew MyForm4();
	form->ShowDialog();
}
private: System::Void городаВАлфавитномПорядкеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Запрос: Города в алфавитном порядке";
	dataGridView1->ColumnCount = 1;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Название";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select Название from Города ORDER BY Название ", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Название"]);
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
private: System::Void городаВОбратномПорядкеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Запрос: Города в обратном порядке";
	dataGridView1->ColumnCount = 1;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Название";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select Название from Города ORDER BY Название DESC", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Название"]);
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
private: System::Void страныВАлфавитномПорядкеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Запрос: Страны в алфавитном порядке";
	dataGridView1->ColumnCount = 1;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Название";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select Название from Страны ORDER BY Название ", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Название"]);
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
private: System::Void страныВОбратномПорядкеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "Запрос: Страны в обратном порядке";
	dataGridView1->ColumnCount = 1;
	//
	// Заголовки столбцов
	dataGridView1->Columns[0]->HeaderCell->Value = "Название";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// Загрузка данных из таблицы
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select Название from Страны ORDER BY Название DESC", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["Название"]);
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
