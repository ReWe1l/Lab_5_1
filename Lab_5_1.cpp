#include "Header.h"
#include "Func.cpp"
int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
	
	chel human[N] = {};
	for (int i = 0; i < N; i++) {
		human[i] = Func();
	}
	printchel(human);
	return 0;
 }