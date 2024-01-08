#include <iostream>
#include <string>
#include "author_translator.h"
using namespace std;
// ����������� ��� ����������
AuthorTranslator::AuthorTranslator() {
	last_name = "";
	initials = "";
	biography = "";
	languages = "";
	++author_count;
}
// ����������� � 1 ����������
AuthorTranslator::AuthorTranslator(string last_name) {
	this->last_name = last_name;
	++author_count;
}
// ����������� �� ����� �����������
AuthorTranslator::AuthorTranslator(string last_name, string initials, string biography, string languages) {
	AuthorTranslator::setAuthorTranslatorData(last_name, initials, biography, languages);
	++author_count;
}
// ������
void AuthorTranslator::setAuthorTranslatorData(string last_name, string initials, string biography, string languages) {
	this->last_name = last_name;
	this->initials = initials;
	this->biography = biography;
	this->languages = languages;
}
// ����� ��� ����������������� ����� ������
void AuthorTranslator::enterAuthorTranslatorData() {
	cout << endl;
	cout << "������� ������� ������:" << endl;
	getline(cin, last_name);
	cout << "������� �������� ������:" << endl;
	getline(cin, initials);
	cout << "������� ��������� ������:" << endl;
	getline(cin, biography);
	cout << "������� �����, ������� ������������ �������-������������:" << endl;
	getline(cin, languages);
	cout << endl;
	cout << "�����-���������� " << last_name << " " << initials << " ��� ������� ������!" << endl;
}
// ������
void AuthorTranslator::getAuthorTranslatorData() {
	cout << endl;
	cout << "���������� �� ������:" << endl;
	cout << "�������: " << last_name << endl;
	cout << "��������: " << initials << endl;
	cout << "���������: " << biography << endl;
	cout << "�����: " << languages << endl;
}