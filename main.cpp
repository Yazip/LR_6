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
	/*AuthorTranslator author_translator("Маршак", "С.Я.", "Родился в...", "Английский");
	Author* author_ptr = &author_translator;
	author_ptr->getAuthorData();*/
	AuthorTranslator* author_translator_dynamic = new AuthorTranslator("Чуковский", "К.И.", "Родился...", "Английский");
	Author* author_dynamic = author_translator_dynamic;
	author_dynamic->getAuthorData();
	_getch();
	delete author_translator_dynamic;
	return 0;
}