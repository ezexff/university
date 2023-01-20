#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;

//1 ������� - ����� ���������
interface class ILight
{
public:
	virtual void print(DataGridView^ a, int b) = 0; // ������� ���������� � �������
	virtual void save(StreamWriter^ a) = 0; // ������� ���������� � ����
	virtual void search_result(RichTextBox^ c) = 0; // ������� ������ ���������� ������
}; 

//2 ������� - ������������� �������
ref class Light : public ILight
{
protected:
	String^ name;
	String^ light_type;
	int price;
public:
	virtual void print(DataGridView^ a, int b) {};
	virtual void save(StreamWriter^ a) {};
	virtual void search_result(RichTextBox^ c) {};
};

//3 ������� - ����������
ref class Light_fixture : public Light
{
protected:
	String^ ip;
public:
	Light_fixture() { name = "����������", light_type = "����������", price = 0, ip = "IP 00"; };
	~Light_fixture() {
		delete[] name;
		delete[] light_type;
		delete[] ip;
	};
	virtual void print(DataGridView^ a, int b) override;
	virtual void save(StreamWriter^ a) override;
	virtual void search_result(RichTextBox^ c) override;
};

void Light_fixture::print(DataGridView^ a, int b){}
void Light_fixture::save(StreamWriter^ a){}
void Light_fixture::search_result(RichTextBox^ c){}

//3 ������� - ���������
ref class Searchlight : public Light
{
protected:
	String^ purpose;
public:
	Searchlight() { name = "����������", light_type = "���������", price = 0, purpose = "�����������";};
	Searchlight(String^ nm, String^ lt, int pr, String^ pur)
	{
		name = nm; light_type = lt; price = pr; purpose = pur; 
	};
	~Searchlight() {
		delete[] name;
		delete[] light_type;
		delete[] purpose;
	};
	virtual void print(DataGridView^ a, int b) override;
	virtual void save(StreamWriter^ a) override;
	virtual void search_result(RichTextBox^ c) override;
	Searchlight^ operator = (const Searchlight^ r);
};

void Searchlight::print(DataGridView^ a, int b)
{
	a->RowCount += 1;
	a->Rows[b]->Cells[0]->Value = name;
	a->Rows[b]->Cells[1]->Value = light_type;
	a->Rows[b]->Cells[2]->Value = price;
	a->Rows[b]->Cells[3]->Value = purpose;
}

void Searchlight::save(StreamWriter^ a)
{
	a->WriteLine(name);
	a->WriteLine(light_type);
	a->WriteLine(price);
	a->WriteLine(purpose);
}

Searchlight^ Searchlight:: operator = (const Searchlight^ r)
{
	name = r->name;
	light_type = r->light_type;
	price = r->price;
	purpose = r->purpose;
	return this;
}

void Searchlight::search_result(RichTextBox^ c)
{
	c->Text += "��������: " + name + "\n";
	c->Text += "���: " + light_type + "\n";
	c->Text += "����: " + price + "\n";
	c->Text += "���������� ����������: " + purpose + "\n\n";
}

//3 ������� - ��������
ref class Video_projector : public Light
{
protected:
	String^ scope_of_application;
public:
	Video_projector() { name = "����������", light_type = "��������", price = 0, scope_of_application = "�����������"; };
	Video_projector(String^ nm, String^ lt, int pr, String^ soa)
	{
		name = nm; light_type = lt; price = pr; scope_of_application = soa;
	};
	~Video_projector() {
		delete[] name;
		delete[] light_type;
		delete[] scope_of_application;
	};
	virtual void print(DataGridView^ a, int b) override;
	virtual void save(StreamWriter^ a) override;
	virtual void search_result(RichTextBox^ c) override;
	Video_projector^ operator = (const Video_projector^ r);
};

void Video_projector::print(DataGridView^ a, int b)
{
	a->RowCount += 1;
	a->Rows[b]->Cells[0]->Value = name;
	a->Rows[b]->Cells[1]->Value = light_type;
	a->Rows[b]->Cells[2]->Value = price;
	a->Rows[b]->Cells[3]->Value = scope_of_application;
}

void Video_projector::save(StreamWriter^ a)
{
	a->WriteLine(name);
	a->WriteLine(light_type);
	a->WriteLine(price);
	a->WriteLine(scope_of_application);
}

Video_projector^ Video_projector:: operator = (const Video_projector^ r)
{
	name = r->name;
	light_type = r->light_type;
	price = r->price;
	scope_of_application = r->scope_of_application;
	return this;
}

void Video_projector::search_result(RichTextBox^ c)
{
	c->Text += "��������: " + name + "\n";
	c->Text += "���: " + light_type + "\n";
	c->Text += "����: " + price + "\n";
	c->Text += "������� ���������� ���������: " + scope_of_application + "\n\n";
}

// 4 ������� - ������
ref class Chandelier : public Light_fixture
{
protected:
	String^ chandelier_design; // �������� ���������� ������
public:
	Chandelier() { name = "����������", light_type = "������", price = 0, chandelier_design = "�����������", ip = "IP 00"; };
	Chandelier(String^ nm, String^ lt, int pr, String^ cd, String^ i)
	{
		name = nm; light_type = lt; price = pr; chandelier_design = cd; ip = i;
	};
	~Chandelier() {
		delete[] name;
		delete[] light_type;
		delete[] chandelier_design;
		delete[] ip;
	};
	virtual void print(DataGridView^ a, int b) override;
	virtual void save(StreamWriter^ a) override;
	virtual void search_result(RichTextBox^ c) override;
	Chandelier^ operator = (const Chandelier^ r);
};

void Chandelier::print(DataGridView^ a, int b)
{
	a->RowCount += 1;
	a->Rows[b]->Cells[0]->Value = name;
	a->Rows[b]->Cells[1]->Value = light_type;
	a->Rows[b]->Cells[2]->Value = price;
	a->Rows[b]->Cells[3]->Value = chandelier_design;
	a->Rows[b]->Cells[4]->Value = ip;
}

void Chandelier::save(StreamWriter^ a)
{
	a->WriteLine(name);
	a->WriteLine(light_type);
	a->WriteLine(price);
	a->WriteLine(chandelier_design);
	a->WriteLine(ip);
}

Chandelier^ Chandelier:: operator = (const Chandelier^ r)
{
	name = r->name;
	light_type = r->light_type;
	price = r->price;
	chandelier_design = r->chandelier_design;
	ip = r->ip;
	return this;
}

void Chandelier::search_result(RichTextBox^ c)
{
	c->Text += "��������: " + name + "\n";
	c->Text += "���: " + light_type + "\n";
	c->Text += "����: " + price + "\n";
	c->Text += "�������� ���������� ������: " + chandelier_design + "\n";
	c->Text += "������� ������: " + ip + "\n\n";
}

// 4 ������� - ������
ref class Night_lamp : public Light_fixture
{
protected:
	String^ night_lamp_spares; // �������� ����� �������
public:
	Night_lamp() { name = "����������", light_type = "������", price = 0, night_lamp_spares = "�����������", ip = "IP 00"; };
	Night_lamp(String^ nm, String^ lt, int pr, String^ cd, String^ i)
	{
		name = nm; light_type = lt; price = pr; night_lamp_spares = cd; ip = i;
	};
	~Night_lamp() {
		delete[] name;
		delete[] light_type;
		delete[] night_lamp_spares;
		delete[] ip;
	};
	virtual void print(DataGridView^ a, int b) override;
	virtual void save(StreamWriter^ a) override;
	virtual void search_result(RichTextBox^ c) override;
	Night_lamp^ operator = (const Night_lamp^ r);
};

void Night_lamp::print(DataGridView^ a, int b)
{
	a->RowCount += 1;
	a->Rows[b]->Cells[0]->Value = name;
	a->Rows[b]->Cells[1]->Value = light_type;
	a->Rows[b]->Cells[2]->Value = price;
	a->Rows[b]->Cells[3]->Value = night_lamp_spares;
	a->Rows[b]->Cells[4]->Value = ip;
}

void Night_lamp::save(StreamWriter^ a)
{
	a->WriteLine(name);
	a->WriteLine(light_type);
	a->WriteLine(price);
	a->WriteLine(night_lamp_spares);
	a->WriteLine(ip);
}

Night_lamp^ Night_lamp:: operator = (const Night_lamp^ r)
{
	name = r->name;
	light_type = r->light_type;
	price = r->price;
	night_lamp_spares = r->night_lamp_spares;
	ip = r->ip;
	return this;
}

void Night_lamp::search_result(RichTextBox^ c)
{
	c->Text += "��������: " + name + "\n";
	c->Text += "���: " + light_type + "\n";
	c->Text += "����: " + price + "\n";
	c->Text += "�������� ����� �������: " + night_lamp_spares + "\n";
	c->Text += "������� ������: " + ip + "\n\n";
}

// 4 ������� - ����
ref class Spot_fixture : public Light_fixture
{
protected:
	String^ spot_fixture_anchorage; // ������ ��������� �����
public:
	Spot_fixture() { name = "����������", light_type = "����", price = 0, spot_fixture_anchorage = "�����������", ip = "IP 00"; };
	Spot_fixture(String^ nm, String^ lt, int pr, String^ sfa, String^ i)
	{
		name = nm; light_type = lt; price = pr; spot_fixture_anchorage = sfa; ip = i;
	};
	~Spot_fixture() {
		delete[] name;
		delete[] light_type;
		delete[] spot_fixture_anchorage;
		delete[] ip;
	};
	virtual void print(DataGridView^ a, int b) override;
	virtual void save(StreamWriter^ a) override;
	virtual void search_result(RichTextBox^ c) override;
	Spot_fixture^ operator = (const Spot_fixture^ r);
};

void Spot_fixture::print(DataGridView^ a, int b)
{
	a->RowCount += 1;
	a->Rows[b]->Cells[0]->Value = name;
	a->Rows[b]->Cells[1]->Value = light_type;
	a->Rows[b]->Cells[2]->Value = price;
	a->Rows[b]->Cells[3]->Value = spot_fixture_anchorage;
	a->Rows[b]->Cells[4]->Value = ip;
}

void Spot_fixture::save(StreamWriter^ a)
{
	a->WriteLine(name); //�������� ��������� �������
	a->WriteLine(light_type);
	a->WriteLine(price);
	a->WriteLine(spot_fixture_anchorage);
	a->WriteLine(ip);
}

Spot_fixture^ Spot_fixture:: operator = (const Spot_fixture^ r)
{
	name = r->name;
	light_type = r->light_type;
	price = r->price;
	ip = r->ip;
	spot_fixture_anchorage = r->spot_fixture_anchorage;
	ip = r->ip;
	return this;
}

void Spot_fixture::search_result(RichTextBox^ c)
{
	c->Text += "��������: " + name + "\n";
	c->Text += "���: " + light_type + "\n";
	c->Text += "����: " + price + "\n";
	c->Text += "������ ��������� �����: " + spot_fixture_anchorage + "\n";
	c->Text += "������� ������: " + ip + "\n\n";
}

// 4 ������� - ���
ref class Scoence : public Light_fixture
{
protected:
	String^ scoence_purpose; // ���������� ���
public:
	Scoence() { name = "����������", light_type = "���", price = 0, scoence_purpose = "�����������", ip = "IP 00"; };
	Scoence(String^ nm, String^ lt, int pr, String^ sp, String^ i)
	{
		name = nm; light_type = lt; price = pr; scoence_purpose = sp; ip = i;
	};
	~Scoence() {
		delete[] name;
		delete[] light_type;
		delete[] scoence_purpose;
		delete[] ip;
	};
	virtual void print(DataGridView^ a, int b) override;
	virtual void save(StreamWriter^ a) override;
	virtual void search_result(RichTextBox^ c) override;
	Scoence^ operator = (const Scoence^ r);
};

void Scoence::print(DataGridView^ a, int b)
{
	a->RowCount += 1;
	a->Rows[b]->Cells[0]->Value = name;
	a->Rows[b]->Cells[1]->Value = light_type;
	a->Rows[b]->Cells[2]->Value = price;
	a->Rows[b]->Cells[3]->Value = scoence_purpose;
	a->Rows[b]->Cells[4]->Value = ip;
}

void Scoence::save(StreamWriter^ a)
{
	a->WriteLine(name);
	a->WriteLine(light_type);
	a->WriteLine(price);
	a->WriteLine(scoence_purpose);
	a->WriteLine(ip);
}

Scoence^ Scoence:: operator = (const Scoence^ r)
{
	name = r->name;
	light_type = r->light_type;
	price = r->price;
	scoence_purpose = r->scoence_purpose;
	ip = r->ip;
	return this;
}

void Scoence::search_result(RichTextBox^ c)
{
	c->Text += "��������: " + name + "\n";
	c->Text += "���: " + light_type + "\n";
	c->Text += "����: " + price + "\n";
	c->Text += "���������� ���: " + scoence_purpose + "\n";
	c->Text += "������� ������: " + ip + "\n\n";
}

// 4 ������� - �������
ref class Torchere : public Light_fixture
{
protected:
	String^ torchere_lampshade; // ����� ������� �������
public:
	Torchere() { name = "����������", light_type = "������", price = 0, torchere_lampshade = "�����������", ip = "IP 00"; };
	Torchere(String^ nm, String^ lt, int pr, String^ tl, String^ i)
	{
		name = nm; light_type = lt; price = pr; torchere_lampshade = tl; ip = i;
	};
	~Torchere() {
		delete[] name;
		delete[] light_type;
		delete[] torchere_lampshade;
		delete[] ip;
	};
	virtual void print(DataGridView^ a, int b) override;
	virtual void save(StreamWriter^ a) override;
	virtual void search_result(RichTextBox^ c) override;
	Torchere^ operator = (const Torchere^ r);
};

void Torchere::print(DataGridView^ a, int b)
{
	a->RowCount += 1;
	a->Rows[b]->Cells[0]->Value = name;
	a->Rows[b]->Cells[1]->Value = light_type;
	a->Rows[b]->Cells[2]->Value = price;
	a->Rows[b]->Cells[3]->Value = torchere_lampshade;
	a->Rows[b]->Cells[4]->Value = ip;
}

void Torchere::save(StreamWriter^ a)
{
	a->WriteLine(name);
	a->WriteLine(light_type);
	a->WriteLine(price);
	a->WriteLine(torchere_lampshade);
	a->WriteLine(ip);
}

Torchere^ Torchere:: operator = (const Torchere^ r)
{
	name = r->name;
	light_type = r->light_type;
	price = r->price;
	torchere_lampshade = r->torchere_lampshade;
	ip = r->ip;
	return this;
}

void Torchere::search_result(RichTextBox^ c)
{
	c->Text += "��������: " + name + "\n";
	c->Text += "���: " + light_type + "\n";
	c->Text += "����: " + price + "\n";
	c->Text += "����� ������� �������: " + torchere_lampshade + "\n";
	c->Text += "������� ������: " + ip + "\n\n";
}

// 4 ������� - ���������� �����
ref class Table_lamp : public Light_fixture
{
protected:
	String^ table_lamp_s; // ������ ��������� �����
public:
	Table_lamp() { name = "����������", light_type = "���������� �����", price = 0, table_lamp_s = "�����������", ip = "IP 00"; };
	Table_lamp(String^ nm, String^ lt, int pr, String^ tls, String^ i)
	{
		name = nm; light_type = lt; price = pr; table_lamp_s = tls; ip = i;
	};
	~Table_lamp() {
		delete[] name;
		delete[] light_type;
		delete[] table_lamp_s;
		delete[] ip;
	};
	virtual void print(DataGridView^ a, int b) override;
	virtual void save(StreamWriter^ a) override;
	virtual void search_result(RichTextBox^ c) override;
	Table_lamp^ operator = (const Table_lamp^ r);
};

void Table_lamp::print(DataGridView^ a, int b)
{
	a->RowCount += 1;
	a->Rows[b]->Cells[0]->Value = name;
	a->Rows[b]->Cells[1]->Value = light_type;
	a->Rows[b]->Cells[2]->Value = price;
	a->Rows[b]->Cells[3]->Value = table_lamp_s;
	a->Rows[b]->Cells[4]->Value = ip;
}

void Table_lamp::save(StreamWriter^ a)
{
	a->WriteLine(name);
	a->WriteLine(light_type);
	a->WriteLine(price);
	a->WriteLine(table_lamp_s);
	a->WriteLine(ip);
}

Table_lamp^ Table_lamp:: operator = (const Table_lamp^ r)
{
	name = r->name;
	light_type = r->light_type;
	price = r->price;
	table_lamp_s = r->table_lamp_s;
	ip = r->ip;
	return this;
}

void Table_lamp::search_result(RichTextBox^ c)
{
	c->Text += "��������: " + name + "\n";
	c->Text += "���: " + light_type + "\n";
	c->Text += "����: " + price + "\n";
	c->Text += "������ ��������� �����: " + table_lamp_s + "\n";
	c->Text += "������� ������: " + ip + "\n\n";
}