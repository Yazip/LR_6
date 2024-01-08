#include <iostream>
#include <string>
#include "author_translator.h"
using namespace std;
// Конструктор без параметров
AuthorTranslator::AuthorTranslator() {
	last_name = "";
	initials = "";
	biography = "";
	languages = "";
	++author_count;
}
// Конструктор с 1 параметром
AuthorTranslator::AuthorTranslator(string last_name) {
	this->last_name = last_name;
	++author_count;
}
// Конструктор со всеми параметрами
AuthorTranslator::AuthorTranslator(string last_name, string initials, string biography, string languages) {
	AuthorTranslator::setAuthorTranslatorData(last_name, initials, biography, languages);
	++author_count;
}
// Сеттер
void AuthorTranslator::setAuthorTranslatorData(string last_name, string initials, string biography, string languages) {
	this->last_name = last_name;
	this->initials = initials;
	this->biography = biography;
	this->languages = languages;
}
// Метод для пользовательского ввода данных
void AuthorTranslator::enterAuthorTranslatorData() {
	cout << endl;
	cout << "Введите фамилию автора:" << endl;
	getline(cin, last_name);
	cout << "Введите инициалы автора:" << endl;
	getline(cin, initials);
	cout << "Введите биографию автора:" << endl;
	getline(cin, biography);
	cout << "Введите языки, которые используются автором-переводчиком:" << endl;
	getline(cin, languages);
	cout << endl;
	cout << "Автор-переводчик " << last_name << " " << initials << " был успешно создан!" << endl;
}
// Геттер
void AuthorTranslator::getAuthorTranslatorData() {
	cout << endl;
	cout << "Информация об авторе:" << endl;
	cout << "Фамилия: " << last_name << endl;
	cout << "Инициалы: " << initials << endl;
	cout << "Биография: " << biography << endl;
	cout << "Языки: " << languages << endl;
}