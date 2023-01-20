#pragma once
#include <windows.h>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <iostream>
#include <tchar.h>
#include <stdio.h>
#include <stdio.h>
#include <algorithm>
#include <fstream>
//функции
static void Analys(char nextChar); //анализ
static void Result(std::string temp); //результат
bool isdigit(char l); //проверка на цифру
bool isletter(char l); //проверка на букву
bool islimiter(char l); //проверка на разделитель
bool iserror(char l); //проверка на ошибку
char* SystemStringToChar(System::String^ string);
//массивы дл€ записи результата
std::string mas0[100];
std::string mas1[100];
std::string mas2[100];
std::string mas3[100];
std::string DK; //строка дл€ записи дескрипторного кода
std::string buffDK; //буфер дл€ записи дескрипторного кода
std::string PK = ""; //строка дл€ псевдокода	
std::string other="—трока с ошибкой: "; //строка дл€ неопознанных лексем
int i = 0; //счЄтчик
int sw0 = 0, sw1 = 0, sw2 = 0, sw3 = 0; // переменные счЄтчики дл€ записи результата
int type=4; // переменна€ дл€ определени€ типа лексемы
std::string temp=""; //буфер
std::string NULLstr; //пуста€ строка

std::string AllTextProgram; //строка дл€ записи текста программы
int n, m = 0; //счЄтчики
int state = 0; //определение начального состо€ни€
bool isdigit(char l) {
	bool let = false;
	std::string a = "0123456789";
	for (int k = 0; k <= a.length(); k++)
	{
		if (a[k] == l)
			let = true;
	}
	if (let == true)
		return true;
	else
		return false;
}
bool isletter(char l) {
	bool let = false;
	std::string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz_";
	for (int k = 0; k <= a.length(); k++)
	{
		if (a[k] == l)
			let = true;
	}
	if (let == true)
		return true;
	else
		return false;
}
bool islimiter(char l) {
	bool let = false;
	std::string a = ",.()[]:;+-*/<>@={} ";
	for (int k = 0; k <= a.length(); k++)
	{
		if (a[k] == l)
			let = true;
	}
	if (let == true)
		return true;
	else
		return false;
}
bool iserror(char l) {
	bool let = false;
	std::string a = "јЅ¬√ƒ≈®∆«»… ЋћЌќѕ–—“”‘’÷„Ўў№џЏЁёяабвгдеЄжзийклмнопрстуфхцчшщьыъэю€|~`@є^?&!_";
	for (int k = 0; k <= a.length(); k++)
	{
		if (a[k] == l)
			let = true;
	}
	if (let == true)
		return true;
	else
		return false;
}


static void Analys(char nextChar) {
	switch (state) {
	case 0: {
		if (AllTextProgram[i] == 'i') { state = 6; type = 0; temp += AllTextProgram[i]; }
		else if (AllTextProgram[i] == 'c') { state = 10; type = 0; temp += AllTextProgram[i];}
		else if (AllTextProgram[i] == 's') { state = 19; type = 0; temp += AllTextProgram[i];}
		else if (AllTextProgram[i] == 'b' ) { state = 25; type = 0; temp += AllTextProgram[i];}
		else if (AllTextProgram[i] == 'd') { state = 30; type = 0; temp += AllTextProgram[i];}
		else if (AllTextProgram[i] == 'e') { state = 38; type = 0; temp += AllTextProgram[i];}
		else if (AllTextProgram[i] == 't') { state = 42; type = 0; temp += AllTextProgram[i]; }
		else if (isletter(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
		else if (isdigit(AllTextProgram[i])) { state = 2; type = 2; temp += AllTextProgram[i]; }
		else if (islimiter(AllTextProgram[i])) {
			state = 0; Result(temp); temp = NULLstr;
			temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr; type = 4;
		}
		else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i];}
		else { state = 0; m = i; }
		break; }

	case 1: {
		if (isletter(AllTextProgram[i])) { state = 1; temp += AllTextProgram[i]; }
		else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
		else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
			state = 0; Result(temp); temp = NULLstr;
			temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
		}
		else if (islimiter(AllTextProgram[i])) {
			state = 0; Result(temp); temp = NULLstr;
			temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
		}
		else if (AllTextProgram[i] == ' '||AllTextProgram[i]=='\0'||AllTextProgram[i]=='\n') {
			state = 0; Result(temp); temp = NULLstr;
		}
		else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i];}
		else {
			state = 0; other += AllTextProgram[i];
		}
		break; }

	case 2: {
		if (isdigit(AllTextProgram[i])) { state = 2; type = 2; temp += AllTextProgram[i]; }
		else if (AllTextProgram[i] == '.') { state = 3; type = 2; temp += AllTextProgram[i]; }
		else if (islimiter(AllTextProgram[i])) {
			state = 0; Result(temp); temp = NULLstr;
			temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
		}
		else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i];}
		else {
			state = 0; other += AllTextProgram[i];
		}
		break; }

	case 3: {
		if (isdigit(AllTextProgram[i])) { state = 4; temp += AllTextProgram[i];}
		else { state = 5; }
		break; }

	case 4: {
		if (isdigit(AllTextProgram[i])) { state = 4; temp += AllTextProgram[i];}
		else if (islimiter(AllTextProgram[i])) {
			state = 0; Result(temp); temp = NULLstr;
			temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
		}
		else if (iserror(AllTextProgram[i])) { state =5; temp += AllTextProgram[i];}
		else {
			state = 0; other += AllTextProgram[i];
		}
		break; }

	case 5: {
		if (isletter(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i];}
		else if (isdigit(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i];}
		else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
			state = 0; other += temp; other += " !!! ";  temp = NULLstr; 
			temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
		}
		else if (islimiter(AllTextProgram[i])) {
			state = 0; other += temp; other += " !!! ";   temp = NULLstr; 
			temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
		}
		else { state = 5; temp += AllTextProgram[i];}
		break; }

	case 6: {if (AllTextProgram[i] == 'n') { state = 7; type = 0; temp += AllTextProgram[i];}
			else if (AllTextProgram[i] == 'f') { state = 37; type = 0; temp += AllTextProgram[i]; }
			else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				state = 0; type = 1; Result(temp); temp = NULLstr;
				temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			}
			else if (islimiter(AllTextProgram[i])) {
				state = 0; type = 1; Result(temp); temp = NULLstr;
				temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			}
			else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				state = 0; type = 1; Result(temp); temp = NULLstr;
			}
			else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			else {
				state = 0; other += AllTextProgram[i];
			}
			break; }
	case 7: {if (AllTextProgram[i] == 't') { state = 8; temp += AllTextProgram[i];}
			else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				state = 0; type = 1; Result(temp); temp = NULLstr;
				temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			}
			else if (islimiter(AllTextProgram[i])) {
				state = 0; type = 1; Result(temp); temp = NULLstr;
				temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			}
			else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				state = 0; type = 1; Result(temp); temp = NULLstr;
			}
			else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			else {
				state = 0; other += AllTextProgram[i];
			}
			break; }

	case 8: {if (isletter(AllTextProgram[i])) { state = 1; temp += AllTextProgram[i]; }
			else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				state = 0; Result(temp); temp = NULLstr;
				temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			}
			else if (islimiter(AllTextProgram[i])) {
				state = 0; Result(temp); temp = NULLstr;
				temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			}
			else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				state = 0; Result(temp); temp = NULLstr;
			}
			else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			else {
				state = 0; other += AllTextProgram[i];
			}
			break; }

	case 10: {if (AllTextProgram[i] == 'a') { state = 11; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 11: {if (AllTextProgram[i] == 's') { state = 12; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 12: {if (AllTextProgram[i] == 'e') { state = 13; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 13: {if (isletter(AllTextProgram[i])) { state = 1; temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 19: {if (AllTextProgram[i] == 'w') { state = 20; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 20: {if (AllTextProgram[i] == 'i') { state = 21; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 21: {if (AllTextProgram[i] == 't') { state = 22; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 22: {if (AllTextProgram[i] == 'c') { state = 23; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 23: {if (AllTextProgram[i] == 'h') { state = 24; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 24: {if (isletter(AllTextProgram[i])) { state = 1; temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 25: {if (AllTextProgram[i] == 'r') { state = 26; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 26: {if (AllTextProgram[i] == 'e') { state = 27; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 27: {if (AllTextProgram[i] == 'a') { state = 28; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 28: {if (AllTextProgram[i] == 'k') { state = 29; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 29: {if (isletter(AllTextProgram[i])) { state = 1; temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 30: {if (AllTextProgram[i] == 'e') { state = 31; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 31: {if (AllTextProgram[i] == 'f') { state = 32; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 32: {if (AllTextProgram[i] == 'a') { state = 33; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 33: {if (AllTextProgram[i] == 'u') { state = 34; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 34: {if (AllTextProgram[i] == 'l') { state = 35; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 35: {if (AllTextProgram[i] == 't') { state = 36; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 36: {if (isletter(AllTextProgram[i])) { state = 1; temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 37: {if (isletter(AllTextProgram[i])) { state = 1; temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 38: {if (AllTextProgram[i] == 'l') { state = 39; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 39: {if (AllTextProgram[i] == 's') { state = 40; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 40: {if (AllTextProgram[i] == 'e') { state = 41; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 41: {if (isletter(AllTextProgram[i])) { state = 1; temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 42: {if (AllTextProgram[i] == 'h') { state = 43; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 43: {if (AllTextProgram[i] == 'e') { state = 44; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 44: {if (AllTextProgram[i] == 'n') { state = 45; temp += AllTextProgram[i]; }
			 else if (isletter(AllTextProgram[i])) { state = 1; type = 1;  temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; type = 1; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }

	case 45: {if (isletter(AllTextProgram[i])) { state = 1; temp += AllTextProgram[i]; }
			 else if (isdigit(AllTextProgram[i])) { state = 1; type = 1; temp += AllTextProgram[i]; }
			 else if (AllTextProgram[i] == '=' && AllTextProgram[i + 1] == '=') {
				 state = 0; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; temp += AllTextProgram[i + 1]; type = 3; Result(temp); temp = NULLstr; i++;
			 }
			 else if (islimiter(AllTextProgram[i])) {
				 state = 0; Result(temp); temp = NULLstr;
				 temp += AllTextProgram[i]; type = 3; Result(temp); temp = NULLstr;
			 }
			 else if (AllTextProgram[i] == ' ' || AllTextProgram[i] == '\0' || AllTextProgram[i] == '\n') {
				 state = 0; Result(temp); temp = NULLstr;
			 }
			 else if (iserror(AllTextProgram[i])) { state = 5; temp += AllTextProgram[i]; }
			 else {
				 state = 0; other += AllTextProgram[i];
			 }
			 break; }
	}
	return;
}
static void Result(std::string temp) {
	
	switch (type)
	{
	case 0:
		for (int j = 0; j < 100; j++)
		{
			if (temp == mas0[j])
			{
				PK += temp;
				buffDK = std::to_string(j + 1);
				DK += "(10,"; DK += buffDK; DK += ")";
				return;
			}
		}
		PK += temp;
		buffDK = std::to_string(sw0 + 1);
		DK += "(10,"; DK += buffDK; DK += ")";
		mas0[sw0] = temp;
		sw0++;
		return;
		break;
	case 1:
		for (int j = 0; j < 100; j++)
		{
			if (temp == mas1[j])
			{
				PK += "id";
				buffDK = std::to_string(j + 1);
				DK += "(20,"; DK += buffDK; DK += ")";
				return;
			}
		}
		PK += "id";
		buffDK = std::to_string(sw1 + 1);
		DK += "(20,"; DK += buffDK; DK += ")";
		mas1[sw1] = temp;
		sw1++;
		return;
		break;
	case 2:
		for (int j = 0; j < 100; j++)
		{
			if (temp == mas2[j])
			{
				PK += "const";
				buffDK = std::to_string(j + 1);
				DK += "(30,"; DK += buffDK; DK += ")";
				return;
			}
		}
		PK += "const";
		buffDK = std::to_string(sw2 + 1);
		DK += "(30,"; DK += buffDK; DK += ")";
		mas2[sw2] = temp;
		sw2++;
		return;
		break;
	case 3:
		for (int j = 0; j < 100; j++)
		{
			if (temp == mas3[j])
			{
				PK += temp;
				buffDK = std::to_string(j + 1);
				DK += "(40,"; DK += buffDK; DK += ")";
				return;
			}
		}
		PK += temp;
		buffDK = std::to_string(sw3 + 1);
		DK += "(40,"; DK += buffDK; DK += ")";
		mas3[sw3] = temp;
		sw3++;
		return;
		break;
	}
}
char* SystemStringToChar(System::String^ string) {
	return (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(string);
}
namespace LA {

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
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::DataGridView^  dataGridView4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;


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
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(26, 245);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(203, 128);
			this->dataGridView1->TabIndex = 1;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(271, 245);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(206, 128);
			this->dataGridView2->TabIndex = 2;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(518, 245);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(236, 128);
			this->dataGridView3->TabIndex = 3;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(794, 245);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(237, 128);
			this->dataGridView4->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(518, 34);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"¬вод";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(518, 85);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"—брос";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 389);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(518, 389);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(515, 184);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(518, 212);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"label5";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(26, 414);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(451, 150);
			this->richTextBox1->TabIndex = 12;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(518, 414);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(513, 150);
			this->richTextBox2->TabIndex = 13;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(26, 34);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(451, 186);
			this->richTextBox3->TabIndex = 14;
			this->richTextBox3->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1054, 659);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//—оздание таблицы ключевых слов
		dataGridView1->ColumnCount = 3;
		dataGridView1->RowCount = 1;
		//
		//заголовки столбцов
		dataGridView1->Columns[0]->HeaderCell->Value = "10";
		dataGridView1->Columns[1]->HeaderCell->Value = " л. сл.";
		dataGridView1->Columns[2]->HeaderCell->Value = "п/к";
		//
		//выравнивание
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView1->AutoResizeColumns();
		//
		//
		//—оздание таблицы индетификаторов
		dataGridView2->ColumnCount = 3;
		dataGridView2->RowCount = 1;
		//
		//заголовки столбцов
		dataGridView2->Columns[0]->HeaderCell->Value = "20";
		dataGridView2->Columns[1]->HeaderCell->Value = "»дент.";
		dataGridView2->Columns[2]->HeaderCell->Value = "п/к";
		//
		//выравнивание
		dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView2->AutoResizeColumns();
		//
		//
		//—оздание таблицы числовых переменных
		dataGridView3->ColumnCount = 3;
		dataGridView3->RowCount = 1;
		//
		//заголовки столбцов
		dataGridView3->Columns[0]->HeaderCell->Value = "30";
		dataGridView3->Columns[1]->HeaderCell->Value = "„исл. перем.";
		dataGridView3->Columns[2]->HeaderCell->Value = "п/к";
		//
		//выравнивание
		dataGridView3->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView3->AutoResizeColumns();
		//
		//
		//—оздание таблицы знаков
		dataGridView4->ColumnCount = 3;
		dataGridView4->RowCount = 1;
		//
		//заголовки столбцов
		dataGridView4->Columns[0]->HeaderCell->Value = "40";
		dataGridView4->Columns[1]->HeaderCell->Value = "«н. оп. пункт.";
		dataGridView4->Columns[2]->HeaderCell->Value = "п/к";
		//
		//выравнивание
		dataGridView4->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView4->AutoResizeColumns();
		//
		//заполнение label
		label1->Text = "»сходный текст программы";
		label2->Text = "ƒескрипторный код";
		label3->Text = "ѕсевдокод";
		label4->Text = "";
		label5->Text = "";
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^s="";
		//s = textBox1->Text;
		s = richTextBox3->Text;
		std::string str;
		char* x = SystemStringToChar(s);
		AllTextProgram = x;	
		//
		//“ело программы
		//
		for (int j = 0; j < 100; j++)
		{
			mas0[j] = "";	mas1[j] = "";	mas2[j] = ""; mas3[j] = "";
		};

		for (i = 0; i < AllTextProgram.length(); i++)
		{
			char c = AllTextProgram[i];
			if (AllTextProgram[i] == '\'')
			{
				temp += '\'';
				i++;
				while (AllTextProgram[i] != '\'')
				{
					temp += AllTextProgram[i];
					i++;
				}
				temp += '\'';
				type = 2;
				Result(temp);
				temp = NULLstr;
			}
			if (AllTextProgram[i] == '/'&&AllTextProgram[i + 1] == '*')
			{
				int chet = 1;
				while (chet != 0)
				{
					i++;
					if (AllTextProgram[i] == '/'&&AllTextProgram[i + 1] == '*')
						chet++;
					if (AllTextProgram[i] == '*'&&AllTextProgram[i + 1] == '/')
						chet--;
				} i = i + 2;
			}
			if (AllTextProgram[i] == ' '&&AllTextProgram[i + 1] == ' ')
			{
				Analys(AllTextProgram[i]);
				int chet = 1;
				while (chet != 0)
				{
					i++;
					if (AllTextProgram[i] != ' ')
						chet--;
				}
			}
			//
			if (AllTextProgram[i] == '/'&&AllTextProgram[i + 1] == '/')
			{
				int chet = 1;
				while (chet != 0)
				{
					i++;
					if (AllTextProgram[i] == '\n'||AllTextProgram[i]=='\0')
						chet--;
				} 
			}
			Analys(AllTextProgram[i]);//анализ кода
		}

		for (int j = 0; j < 100; j++)
		{
			String^ mas0converted = gcnew String(mas0[j].c_str());
			dataGridView1->Rows->Add(j+1, mas0converted, mas0converted);

			String^ mas1converted = gcnew String(mas1[j].c_str());
			dataGridView2->Rows->Add(j + 1, mas1converted, "id");

			String^ mas2converted = gcnew String(mas2[j].c_str());
			dataGridView3->Rows->Add(j + 1, mas2converted, "const");

			String^ mas3converted = gcnew String(mas3[j].c_str());
			dataGridView4->Rows->Add(j + 1, mas3converted, mas3converted);
		}

		String^ DKconverted = gcnew String(DK.c_str());
		String^ PKconverted = gcnew String(PK.c_str());
		richTextBox1->Text = DKconverted;
		richTextBox2->Text = PKconverted;

		
		String^ label44 = gcnew String(other.c_str());
		label4->Text = label44;
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//кнопка сброса
	dataGridView1->ColumnCount = 3;
	dataGridView1->RowCount = 1;

	dataGridView2->ColumnCount = 3;
	dataGridView2->RowCount = 1;

	dataGridView3->ColumnCount = 3;
	dataGridView3->RowCount = 1;

	dataGridView4->ColumnCount = 3;
	dataGridView4->RowCount = 1;

	for (int j = 0; j < 100; j++)
	{
		mas0[j]="";
		mas1[j]="";
		mas2[j]="";
		mas3[j]="";
	}
	DK="";
	buffDK="";
	PK = "";

	type = 4;
	i = 0;
	sw0 = 0, sw1 = 0, sw2 = 0, sw3 = 0;
	temp="";
	NULLstr="";
	richTextBox1->Text = "";
	richTextBox2->Text = "";
	richTextBox3->Text = "";
}
};
}