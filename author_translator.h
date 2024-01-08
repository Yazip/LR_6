#pragma once
#include <string>
#include "author.h"
using namespace std;
// Класс автор-переводчик, наследник класса автор
class AuthorTranslator : Author {
private:
	string languages;
public:
	AuthorTranslator (); // Конструктор без параметров
	AuthorTranslator(string last_name); // Конструктор с 1 параметром
	AuthorTranslator(string last_name, string initials, string biography, string languages); // Конструктор со всеми параметрами
	void setAuthorTranslatorData(string last_name, string initials, string biography, string languages); // Сеттер
	void enterAuthorTranslatorData(); // Метод для пользовательского ввода данных
	void getAuthorTranslatorData(); // Геттер
};