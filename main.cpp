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
	Genre genre("Повесть", "Прозаический жанр, занимающий по объёму текста промежуточное место между романом и рассказом, тяготеющий к хроникальному сюжету, воспроизводящему естественное течение жизни.");
	cout << genre;
	_getch();
	return 0;
}