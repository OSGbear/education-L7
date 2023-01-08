// 9.1.cpp : Изучение циклов 
//

#include <iostream>

int main()
{
	int num1[3]{ 56,45,27 };
	for (short k = 0; k < 3; k++) {
		std::cout << num1[k] << std::endl;
	}
	//<= при плюсовании ++;  >= при отнимании--;

	int i = 1; // Создание переменной
	while (i <= 10) { // Здесь только условие
		std::cout << i << std::endl;
		i++; // Увеличение переменной
	}
	int num5 = 20; // при запуске \от1000/ большая часть строк отсутсвует, ограничение по выводу в консоль??
	while (num5 > 0) {
		std::cout << num5 << std::endl;
		num5--;
	}
	short x = 0;
	char test[5]{ 'I', 'D', 'o','L','!' };
	while (x < 6) {
		std::cout << test[x] << std::endl;
		x++;
	}
	return 0;
}
