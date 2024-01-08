#include "literature.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
using namespace std;
int main() {
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Попытка вставить пустое название издателя в его конструктор
	Publisher* publisher = new Publisher("");
	// Работа с одномерным массивом объектов книг
	Book books1[4];
	for (int i = 0; i < 4; i++) {
		books1[i].enterBookData();
	}
	// Работа с двумерным массивом объектов книг
	Book books2[2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			books2[i][j].enterBookData();
		}
	}
	_getch();
	delete publisher;
	delete[] books1;
	for (int i = 0; i < 2; i++) {
		delete[] books2[i];
	}
	delete[] books2;
	return 0;
}