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
	AuthorTranslator* author_translator = new AuthorTranslator("Чуковский", "К.И.", "Родился в...", "Английский");
	Author* author = new Author("Шукшин", "В.М.", "Василий Шукшин родился 25 июля 1929 года в Алтайском селе Сростки в крестьянской семье.");
	*author_translator = *author;
	author_translator->getAuthorTranslatorData();
	_getch();
	delete author_translator;
	delete author;
	return 0;
}