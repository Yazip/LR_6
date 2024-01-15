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
	Book* book = new Book();
	Magazine* magazine = new Magazine();
	book->read();
	magazine->read();
	_getch();
	return 0;
}