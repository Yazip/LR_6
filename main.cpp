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
	AuthorTranslator* author_translator = new AuthorTranslator("���������", "�.�.", "������� �...", "����������");
	Author* author = new Author("������", "�.�.", "������� ������ ������� 25 ���� 1929 ���� � ��������� ���� ������� � ������������ �����.");
	*author_translator = *author;
	author_translator->getAuthorTranslatorData();
	_getch();
	delete author_translator;
	delete author;
	return 0;
}