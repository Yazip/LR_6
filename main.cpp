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
	Publisher<string> publisher1;
	publisher1.setPublisherData("ЭКСМО", "123308, г. Москва, ул. Зорге, д.1, стр.1.", "+7 (495) 411-68-86", "info@eksmo.ru");
	publisher1.getPublisherData();
	Publisher<int> publisher2;
	publisher2.setPublisherData("МИФ", "Москва, м. Пушкинская, Тверская, Чеховская, Большой Козихинский пер., д. 7, стр. 2, 2-й этаж, оф. 24", 591101, "support@m-i-f.ru");
	publisher2.getPublisherData();
	_getch();
	return 0;
}