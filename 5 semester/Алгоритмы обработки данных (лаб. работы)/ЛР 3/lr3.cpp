#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

struct node;
void FormTree(node *&p, std::string word);
void PrintTree(node *&p, std::string &s);
void Sort(int *a, std::string *word, int first, int last);
node* Search(node* p, std::string word);

int count = 0; //Счётчик слов

struct node {
	std::string word;
	int k;
	node *left, *right;
};

void FormTree(node *&p, std::string word) {
	if (p == NULL) {
		p = new node;
		p->word = word; p->k = 1;
		p->left = NULL;
		p->right = NULL;
	}
	else if (word < p->word) FormTree(p->left, word);
	else if (word > p->word) FormTree(p->right, word);
	else { p->k++; count--; }
}

void PrintTree(node *&p, std::string &s) {
	char c[6]; //Строка, в которую преобразуется число
	if (p != NULL) {
		PrintTree(p->left, s);
		s += p->word + " - " + itoa(p->k, c, 10) + "\n";
		PrintTree(p->right, s);
	}
};

void Sort(int *a, std::string *word, int first, int last)
{
	int i = first, j = last, key = a[(first + last) / 2];
	do {
		while (a[i]<key) i++;
		while (a[j]>key) j--;
		if (i <= j) {
			std::swap(a[i], a[j]); swap(word[i], word[j]);
			i++; j--;
		}
	} while (i <= j);
	if (i<last) Sort(a, word, i, last);
	if (j>first) Sort(a, word, first, j);
}

node* Search(node *p, std::string word1) {
	if (p == NULL) return NULL;
	if (p->word == word1) return p;
	if (word1 < p->word) return Search(p->left, word1);
	else
		return Search(p->right, word1);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int word_max_length; //Максимальная длина слова
	std::cout << "Оставить слова длина которых больше: ";
	std::cin >> word_max_length;
	std::string stringWord; //Слово
	char c; //Буква
	std::ifstream f_input; //Файловый ввод
	node* p = NULL;
	f_input.open("input1.txt");
	while (!f_input.eof())
	{
		stringWord = "";
		while (!f_input.eof())
		{
			c = f_input.get();
			if (f_input.eof()) break;
			if (c >= -64 && c <= -1)  stringWord += c; //65-90 97-122 eng
			else break;
		}
		if (stringWord.length()>word_max_length)
		{
			FormTree(p, stringWord); count++;
		}
	}
	f_input.close();

	std::ofstream f1("output.txt"); //Файловый вывод
	std::string stringWord2;
	PrintTree(p, stringWord2);
	f1 << stringWord2;
	f1.close();
	system("notepad.exe output.txt");

	std::ifstream f("output.txt");
	std::string* strMas = new std::string[count + 1];
	int* freqMas = new int[count + 1];
	for (int i = 0; i<count + 1; i++)
	{
		if (f >> strMas[i] >> c >> freqMas[i]);
	}
	f.close();

	Sort(freqMas, strMas, 0, count);
	std::ofstream f3("output1.txt");
	for (int j = 1; j<count + 1; j++)
	{
		f3 << strMas[j] << " - " << freqMas[j] << std::endl;
	}
	system("notepad.exe output1.txt");
	std::string key = "сказал";
	std::cout << "Введите слово для поиска: ";
	std::cin >> key;
	node* p3 = Search(p, key);
	if (p3 == NULL)
		std::cout << "Элемент не найден";
	else
		std::cout << "Ваше слово найдено: " << p3->word;
	std::cout << std::endl;

	system("pause");
	return 0;
}

