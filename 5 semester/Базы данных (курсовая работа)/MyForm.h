#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"

int SelectedTable=10;

namespace ������1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  ������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��50�����80��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��80��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������������ToolStripMenuItem;
	protected:

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->��������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton2 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��50�����80��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��80��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton3 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->��������������������ToolStripMenuItem,
					this->toolStripMenuItem2, this->��������������ToolStripMenuItem, this->toolStripMenuItem1
			});
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(49, 22);
			this->toolStripDropDownButton1->Text = L"����";
			// 
			// ��������������������ToolStripMenuItem
			// 
			this->��������������������ToolStripMenuItem->Name = L"��������������������ToolStripMenuItem";
			this->��������������������ToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->��������������������ToolStripMenuItem->Text = L"�������� ���";
			this->��������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������������ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(267, 22);
			this->toolStripMenuItem2->Text = L"�������� �����";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem2_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->��������������ToolStripMenuItem->Text = L"�������� �����";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(267, 22);
			this->toolStripMenuItem1->Text = L"�������� �������������� ������";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// toolStripDropDownButton2
			// 
			this->toolStripDropDownButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->toolStripMenuItem3,
					this->toolStripMenuItem4, this->������������������������ToolStripMenuItem, this->������������������������ToolStripMenuItem, this->���������ToolStripMenuItem,
					this->��50�����80��ToolStripMenuItem, this->��80��ToolStripMenuItem, this->�����������������ToolStripMenuItem, this->������������������������ToolStripMenuItem,
					this->����������������������ToolStripMenuItem, this->������������������������ToolStripMenuItem, this->����������������������ToolStripMenuItem
			});
			this->toolStripDropDownButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton2.Image")));
			this->toolStripDropDownButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton2->Name = L"toolStripDropDownButton2";
			this->toolStripDropDownButton2->Size = System::Drawing::Size(69, 22);
			this->toolStripDropDownButton2->Text = L"�������";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(258, 22);
			this->toolStripMenuItem3->Text = L"������ ����� � �������������";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(258, 22);
			this->toolStripMenuItem4->Text = L"������� ��������� �����";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem4_Click);
			// 
			// ������������������������ToolStripMenuItem
			// 
			this->������������������������ToolStripMenuItem->Name = L"������������������������ToolStripMenuItem";
			this->������������������������ToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->������������������������ToolStripMenuItem->Text = L"���� � ���������� ����������";
			this->������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������������������ToolStripMenuItem_Click);
			// 
			// ������������������������ToolStripMenuItem
			// 
			this->������������������������ToolStripMenuItem->Name = L"������������������������ToolStripMenuItem";
			this->������������������������ToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->������������������������ToolStripMenuItem->Text = L"���� � ���������� ����������";
			this->������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������������������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->���������ToolStripMenuItem->Text = L"���� �� 50 �.�.";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// ��50�����80��ToolStripMenuItem
			// 
			this->��50�����80��ToolStripMenuItem->Name = L"��50�����80��ToolStripMenuItem";
			this->��50�����80��ToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->��50�����80��ToolStripMenuItem->Text = L"���� �� 50 �.�. � �� 80 �.�.";
			this->��50�����80��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��50�����80��ToolStripMenuItem_Click);
			// 
			// ��80��ToolStripMenuItem
			// 
			this->��80��ToolStripMenuItem->Name = L"��80��ToolStripMenuItem";
			this->��80��ToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->��80��ToolStripMenuItem->Text = L"���� �� 80 �.�.";
			this->��80��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��80��ToolStripMenuItem_Click);
			// 
			// �����������������ToolStripMenuItem
			// 
			this->�����������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->����ToolStripMenuItem,
					this->������ToolStripMenuItem, this->������ToolStripMenuItem1, this->������ToolStripMenuItem2, this->������ToolStripMenuItem
			});
			this->�����������������ToolStripMenuItem->Name = L"�����������������ToolStripMenuItem";
			this->�����������������ToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->�����������������ToolStripMenuItem->Text = L"�����";
			this->�����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������������ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->����ToolStripMenuItem->Text = L"5 ����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->������ToolStripMenuItem->Text = L"4 ������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem1
			// 
			this->������ToolStripMenuItem1->Name = L"������ToolStripMenuItem1";
			this->������ToolStripMenuItem1->Size = System::Drawing::Size(120, 22);
			this->������ToolStripMenuItem1->Text = L"3 ������";
			this->������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem1_Click);
			// 
			// ������ToolStripMenuItem2
			// 
			this->������ToolStripMenuItem2->Name = L"������ToolStripMenuItem2";
			this->������ToolStripMenuItem2->Size = System::Drawing::Size(120, 22);
			this->������ToolStripMenuItem2->Text = L"2 ������";
			this->������ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem2_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->������ToolStripMenuItem->Text = L"1 ������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// ������������������������ToolStripMenuItem
			// 
			this->������������������������ToolStripMenuItem->Name = L"������������������������ToolStripMenuItem";
			this->������������������������ToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->������������������������ToolStripMenuItem->Text = L"������ � ���������� �������";
			this->������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������������������ToolStripMenuItem_Click);
			// 
			// ����������������������ToolStripMenuItem
			// 
			this->����������������������ToolStripMenuItem->Name = L"����������������������ToolStripMenuItem";
			this->����������������������ToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->����������������������ToolStripMenuItem->Text = L"������ � �������� �������";
			this->����������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������������������ToolStripMenuItem_Click);
			// 
			// ������������������������ToolStripMenuItem
			// 
			this->������������������������ToolStripMenuItem->Name = L"������������������������ToolStripMenuItem";
			this->������������������������ToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->������������������������ToolStripMenuItem->Text = L"������ � ���������� �������";
			this->������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������������������ToolStripMenuItem_Click);
			// 
			// ����������������������ToolStripMenuItem
			// 
			this->����������������������ToolStripMenuItem->Name = L"����������������������ToolStripMenuItem";
			this->����������������������ToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->����������������������ToolStripMenuItem->Text = L"������ � �������� �������";
			this->����������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������������������ToolStripMenuItem_Click);
			// 
			// toolStripDropDownButton3
			// 
			this->toolStripDropDownButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->toolStripMenuItem5,
					this->������������ToolStripMenuItem, this->toolStripMenuItem6, this->�����ToolStripMenuItem, this->������ToolStripMenuItem, this->������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->�������������ToolStripMenuItem, this->����������ToolStripMenuItem, this->���������ToolStripMenuItem
			});
			this->toolStripDropDownButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton3.Image")));
			this->toolStripDropDownButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton3->Name = L"toolStripDropDownButton3";
			this->toolStripDropDownButton3->Size = System::Drawing::Size(103, 22);
			this->toolStripDropDownButton3->Text = L"������ ������";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(186, 22);
			this->toolStripMenuItem5->Text = L"������������ � ����";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem5_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->������������ToolStripMenuItem->Text = L"������������";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(186, 22);
			this->toolStripMenuItem6->Text = L"����";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem6_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->�������ToolStripMenuItem->Text = L"��� ����";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->�������������ToolStripMenuItem->Text = L"��� ����������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->����������ToolStripMenuItem->Text = L"��� �������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(168, 22);
			this->toolStripButton1->Text = L"������� ���������� ������";
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
			this->label1->Text = L"�������: ";
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
			this->Text = L"���������� �������";
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
	label1->Text="�������: ������������ � ����";
	dataGridView1->ColumnCount = 2;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "������������";
	dataGridView1->Columns[1]->HeaderCell->Value = "����";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT  ������������, �������� FROM    ������������, [������������ � ����], ���� WHERE[������������ � ����].[��� ������������] = ������������.��� AND[������������ � ����].���� = ����.���", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["������������"], oledbRead["��������"]);
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
	label1->Text = "�������: ����";
	dataGridView1->ColumnCount = 10;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "���";
	dataGridView1->Columns[1]->HeaderCell->Value = "��������";
	dataGridView1->Columns[2]->HeaderCell->Value = "���� ������";
	dataGridView1->Columns[2]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[3]->HeaderCell->Value = "���� �����";
	dataGridView1->Columns[3]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[4]->HeaderCell->Value = "��� ����";
	dataGridView1->Columns[5]->HeaderCell->Value = "��� �������";
	dataGridView1->Columns[6]->HeaderCell->Value = "�����";
	dataGridView1->Columns[7]->HeaderCell->Value = "���� ������";
	dataGridView1->Columns[8]->HeaderCell->Value = "���� ������";
	dataGridView1->Columns[9]->HeaderCell->Value = "���������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT ����![���], ����!��������, ����![���� ������], ����![���� �����], [��� ����]!��������, [��� �������]!��������, [�����]!��������, ����![���� ������], ����![���� ������], ����!��������� FROM[��� ����], [��� �������], �����, ���� WHERE ����.[��� ����] = [��� ����].��� AND ����.[��� �������] = [��� �������].��� AND ����.[�����] = [�����].���", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["����![���]"], oledbRead["����!��������"], oledbRead["����![���� ������]"], oledbRead["����![���� �����]"], oledbRead["[��� ����]!��������"], oledbRead["[��� �������]!��������"], oledbRead["[�����]!��������"], oledbRead["����![���� ������]"], oledbRead["����![���� ������]"], oledbRead["����!���������"]);
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

private: System::Void �����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 2;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "�������: �����";
	dataGridView1->ColumnCount = 5;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "���";
	dataGridView1->Columns[1]->HeaderCell->Value = "��������";
	dataGridView1->Columns[2]->HeaderCell->Value = "��� ����������";
	dataGridView1->Columns[3]->HeaderCell->Value = "���������� ����";
	dataGridView1->Columns[4]->HeaderCell->Value = "�����";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT �����![���], �����![��������], [��� ����������]!��������, �����![���������� ����], ������!�������� FROM[��� ����������], ������, ����� WHERE �����.[��� ����������] = [��� ����������].��� AND �����.[�����] = [������].���", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["�����![���]"], oledbRead["�����![��������]"], oledbRead["[��� ����������]!��������"], oledbRead["�����![���������� ����]"], oledbRead["������!��������"]);
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

private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 3;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "�������: ������";
	dataGridView1->ColumnCount = 3;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "���";
	dataGridView1->Columns[1]->HeaderCell->Value = "��������";
	dataGridView1->Columns[2]->HeaderCell->Value = "������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT ������!���, ������!��������, ������!�������� FROM ������, ������ WHERE ������.[������] = ������.���", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["������!���"], oledbRead["������!��������"], oledbRead["������!��������"]);
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

private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 4;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "�������: ������";
	dataGridView1->ColumnCount = 2;

	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "���";
	dataGridView1->Columns[1]->HeaderCell->Value = "��������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT * FROM [������]", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["���"], oledbRead["��������"]);
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

private: System::Void �������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 5;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "�������: ��� ����";
	dataGridView1->ColumnCount = 2;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "���";
	dataGridView1->Columns[1]->HeaderCell->Value = "��� ����";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT * FROM [��� ����]", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["���"], oledbRead["��������"]);
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

private: System::Void �������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 6;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "�������: ��� ����������";
	dataGridView1->ColumnCount = 2;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "���";
	dataGridView1->Columns[1]->HeaderCell->Value = "��� ����������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT * FROM [��� ����������]", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["���"], oledbRead["��������"]);
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

private: System::Void ����������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 7;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "�������: ��� �������";
	dataGridView1->ColumnCount = 2;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "���";
	dataGridView1->Columns[1]->HeaderCell->Value = "��� �������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT * FROM [��� �������]", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["���"], oledbRead["��������"]);
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

private: System::Void ���������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 8;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "�������: ���������";
	dataGridView1->ColumnCount = 7;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "���";
	dataGridView1->Columns[1]->HeaderCell->Value = "����� ������";
	dataGridView1->Columns[2]->HeaderCell->Value = "���� ������";
	dataGridView1->Columns[2]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[3]->HeaderCell->Value = "����� ������";
	dataGridView1->Columns[3]->DefaultCellStyle->Format = "t";
	dataGridView1->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[4]->HeaderCell->Value = "����� ������";
	dataGridView1->Columns[5]->HeaderCell->Value = "���� ������";
	dataGridView1->Columns[5]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[5]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[6]->HeaderCell->Value = "����� ������";
	dataGridView1->Columns[6]->DefaultCellStyle->Format = "t";
	dataGridView1->Columns[6]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT * FROM [���������]", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["���"], oledbRead["����� ������"], oledbRead["���� ������"], oledbRead["����� ������"], oledbRead["����� ������"], oledbRead["���� ������"], oledbRead["����� ������"]);
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

private: System::Void ������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 9;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "�������: ������������";
	dataGridView1->ColumnCount = 2;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "���";
	dataGridView1->Columns[1]->HeaderCell->Value = "������������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT * FROM [������������]", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["���"], oledbRead["������������"]);
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
	label1->Text = "������: ������ ����� � �������������";
	dataGridView1->ColumnCount = 10;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "������������";
	dataGridView1->Columns[1]->HeaderCell->Value = "����";
	dataGridView1->Columns[2]->HeaderCell->Value = "���� ������";
	dataGridView1->Columns[2]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[3]->HeaderCell->Value = "���� �����";
	dataGridView1->Columns[3]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[4]->HeaderCell->Value = "��� ����";
	dataGridView1->Columns[5]->HeaderCell->Value = "��� �������";
	dataGridView1->Columns[6]->HeaderCell->Value = "�����";
	dataGridView1->Columns[7]->HeaderCell->Value = "���� ������";
	dataGridView1->Columns[8]->HeaderCell->Value = "���� ������";
	dataGridView1->Columns[9]->HeaderCell->Value = "���������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT ������������, ����!��������, ����![���� ������], ����![���� �����], [��� ����]!��������, [��� �������]!��������, [�����]!��������, ����![���� ������], ����![���� ������], ����!��������� FROM[������������], [������������ � ����], [��� ����], [��� �������], �����, ���� WHERE[������������ � ����].[��� ������������] = ������������.��� and[������������ � ����].���� = ����.��� and ����.[��� ����] = [��� ����].��� AND ����.[��� �������] = [��� �������].��� AND ����.[�����] = [�����].���; ", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["������������"], oledbRead["����!��������"], oledbRead["����![���� ������]"], oledbRead["����![���� �����]"], oledbRead["[��� ����]!��������"], oledbRead["[��� �������]!��������"], oledbRead["[�����]!��������"], oledbRead["����![���� ������]"], oledbRead["����![���� ������]"], oledbRead["����!���������"]);
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
	MyForm1 ^form = gcnew MyForm1(); // ������ ��������� �����
	form->ShowDialog(); // ����������
}

private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm2 ^form = gcnew MyForm2(); 
	form->ShowDialog();
}

private: System::Void toolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "������: ������� ��������� �����";
	dataGridView1->ColumnCount = 1;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "������� ��������� ����";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("SELECT AVG(���������) as query1 FROM ����", connect);
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
private: System::Void ������������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "������: ���� � ���������� ����������";
	dataGridView1->ColumnCount = 5;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "���";
	dataGridView1->Columns[1]->HeaderCell->Value = "��������";
	dataGridView1->Columns[2]->HeaderCell->Value = "���� ������";
	dataGridView1->Columns[2]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[3]->HeaderCell->Value = "���� �����";
	dataGridView1->Columns[3]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[4]->HeaderCell->Value = "���������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select ���, ��������, [���� ������], [���� �����], ��������� from [����] where [���������] = (select min([���������]) from [����])", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["���"], oledbRead["��������"], oledbRead["���� ������"], oledbRead["���� �����"], oledbRead["���������"]);
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
private: System::Void ������������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "������: ���� � ���������� ����������";
	dataGridView1->ColumnCount = 5;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "���";
	dataGridView1->Columns[1]->HeaderCell->Value = "��������";
	dataGridView1->Columns[2]->HeaderCell->Value = "���� ������";
	dataGridView1->Columns[2]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[3]->HeaderCell->Value = "���� �����";
	dataGridView1->Columns[3]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[4]->HeaderCell->Value = "���������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select ���, ��������, [���� ������], [���� �����], ��������� from [����] where [���������] = (select max([���������]) from [����])", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["���"], oledbRead["��������"], oledbRead["���� ������"], oledbRead["���� �����"], oledbRead["���������"]);
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
private: System::Void ���������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "������: ���� �� 50 �.�.";
	dataGridView1->ColumnCount = 5;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "���";
	dataGridView1->Columns[1]->HeaderCell->Value = "��������";
	dataGridView1->Columns[2]->HeaderCell->Value = "���� ������";
	dataGridView1->Columns[2]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[3]->HeaderCell->Value = "���� �����";
	dataGridView1->Columns[3]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[4]->HeaderCell->Value = "���������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select ���, ��������, [���� ������], [���� �����], ��������� from [����] where [���������] <= 50000", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["���"], oledbRead["��������"], oledbRead["���� ������"], oledbRead["���� �����"], oledbRead["���������"]);
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
private: System::Void ��50�����80��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "������: ���� �� 50 �.�. � �� 80 �.�.";
	dataGridView1->ColumnCount = 5;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "���";
	dataGridView1->Columns[1]->HeaderCell->Value = "��������";
	dataGridView1->Columns[2]->HeaderCell->Value = "���� ������";
	dataGridView1->Columns[2]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[3]->HeaderCell->Value = "���� �����";
	dataGridView1->Columns[3]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[4]->HeaderCell->Value = "���������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select ���, ��������, [���� ������], [���� �����], ��������� from [����] where [���������] BETWEEN 50000 AND 80000", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["���"], oledbRead["��������"], oledbRead["���� ������"], oledbRead["���� �����"], oledbRead["���������"]);
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
private: System::Void ��80��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "������: ���� �� 80 �.�.";
	dataGridView1->ColumnCount = 5;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "���";
	dataGridView1->Columns[1]->HeaderCell->Value = "��������";
	dataGridView1->Columns[2]->HeaderCell->Value = "���� ������";
	dataGridView1->Columns[2]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[2]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[3]->HeaderCell->Value = "���� �����";
	dataGridView1->Columns[3]->DefaultCellStyle->Format = "d";
	dataGridView1->Columns[3]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleRight;
	dataGridView1->Columns[4]->HeaderCell->Value = "���������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select ���, ��������, [���� ������], [���� �����], ��������� from [����] where [���������] >= 80000", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["���"], oledbRead["��������"], oledbRead["���� ������"], oledbRead["���� �����"], oledbRead["���������"]);
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
private: System::Void �����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void ��������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm3 ^form = gcnew MyForm3();
	form->ShowDialog();
}
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (SelectedTable <= 9) {
		if (SelectedTable != 0) {
			int selRowNum = Convert::ToInt32(dataGridView1->Rows[dataGridView1->CurrentRow->Index]->Cells[0]->Value);
		String^ TableName = "";
		if (SelectedTable == 0) { TableName = "������������ � ����"; }//
		if (SelectedTable == 9) { TableName = "������������"; }//
		if (SelectedTable == 1) { TableName = "����"; }
		if (SelectedTable == 2) { TableName = "�����"; }
		if (SelectedTable == 3) { TableName = "������"; }
		if (SelectedTable == 4) { TableName = "������"; }//
		if (SelectedTable == 5) { TableName = "��� ����"; }//
		if (SelectedTable == 6) { TableName = "��� ����������"; }//
		if (SelectedTable == 7) { TableName = "��� �������"; }//
		if (SelectedTable == 8) { TableName = "���������"; }
		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("�� �������, ��� ������ ������� ������?", "�������� ������", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
		if (dialogResult == System::Windows::Forms::DialogResult::Yes)
		{
			//do something
		System::Data::OleDb::OleDbConnection^ connect;
		try
		{
			connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
			connect->Open();
				System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("DELETE FROM [" + TableName + "] WHERE ���=" + selRowNum, connect);
				System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
			
					try
					{
						connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
						connect->Open();
						System::Data::OleDb::OleDbCommand^ command55 = gcnew System::Data::OleDb::OleDbCommand("DELETE FROM [������������ � ����] WHERE ����=" + selRowNum, connect);
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
			MessageBox::Show("������ ������� �������!", "�����������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
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
			MessageBox::Show("�������� �� ������ ������� ����������!", "�����������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation); 

		}
	}
	else { MessageBox::Show("�������� ����������! �������� \n������ �� ������ ������!", "��������������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation); }
}

private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "������: ����� 5 ����";
	dataGridView1->ColumnCount = 1;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "��������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select �������� from ����� where [���������� ����]=5", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["��������"]);
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
private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "������: ����� 4 �����";
	dataGridView1->ColumnCount = 1;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "��������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select �������� from ����� where [���������� ����]=4", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["��������"]);
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
private: System::Void ������ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "������: ����� 3 �����";
	dataGridView1->ColumnCount = 1;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "��������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select �������� from ����� where [���������� ����]=3", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["��������"]);
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
private: System::Void ������ToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "������: ����� 2 �����";
	dataGridView1->ColumnCount = 1;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "��������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select �������� from ����� where [���������� ����]=2", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["��������"]);
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
private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "������: ����� 1 �����";
	dataGridView1->ColumnCount = 1;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "��������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select �������� from ����� where [���������� ����]=1", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["��������"]);
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
private: System::Void ��������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm4 ^form = gcnew MyForm4();
	form->ShowDialog();
}
private: System::Void ������������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "������: ������ � ���������� �������";
	dataGridView1->ColumnCount = 1;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "��������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select �������� from ������ ORDER BY �������� ", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["��������"]);
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
private: System::Void ����������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "������: ������ � �������� �������";
	dataGridView1->ColumnCount = 1;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "��������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select �������� from ������ ORDER BY �������� DESC", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["��������"]);
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
private: System::Void ������������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "������: ������ � ���������� �������";
	dataGridView1->ColumnCount = 1;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "��������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select �������� from ������ ORDER BY �������� ", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["��������"]);
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
private: System::Void ����������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedTable = 10;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	label1->Text = "������: ������ � �������� �������";
	dataGridView1->ColumnCount = 1;
	//
	// ��������� ��������
	dataGridView1->Columns[0]->HeaderCell->Value = "��������";
	dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleLeft;
	//
	// �������� ������ �� �������
	System::Data::OleDb::OleDbConnection^ connect;
	try
	{
		connect = gcnew System::Data::OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0; Data Source=Database.accdb; Persist Security Info=False");
		connect->Open();
		System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand("select �������� from ������ ORDER BY �������� DESC", connect);
		System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
		while (oledbRead->Read()) {
			this->dataGridView1->Rows->Add(oledbRead["��������"]);
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
