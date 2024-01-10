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
	AuthorTranslator author_translator1;
	AuthorTranslator* author_translator2 = new AuthorTranslator("Маршак");
	AuthorTranslator* author_translator3 = new AuthorTranslator("Чуковский", "К.И.", "Родился в...", "Английский");
	author_translator1.setAuthorTranslatorData("Пастернак", "Б.Л.", "Был рождён в...", "Английский");
	author_translator1.getAuthorTranslatorData();
	author_translator2->getAuthorData();
	author_translator3->getAuthorTranslatorData();
	_getch();
	delete author_translator2;
	delete author_translator3;
	return 0;
}