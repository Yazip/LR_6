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
	Genre genre("�������", "������������ ����, ���������� �� ������ ������ ������������� ����� ����� ������� � ���������, ���������� � ������������� ������, ���������������� ������������ ������� �����.");
	cout << genre;
	_getch();
	return 0;
}