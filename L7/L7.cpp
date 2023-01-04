#include <iostream>

int main()
{
	//byte number = 5; //1 byte от -128 до 127
	short num0 = 11100;  // 2 byte Переменная от -32768 до 32767 (выделение памяти под значение)
	int num1 = 12345689; // 4 byte
	long num2 = 33333333; // 8 byte
	float num3 = 33.3; //float 4 byte переменная для хранения значений с точкой, запятую ставить нельзя
	double num4 = 1.23123; //8 byte
	char sim = '+'; //1 byte хранение 1 символа
	bool rew = false; // 1 byte 1/0 булевое значение true/false

	std::cout << num0 << std::endl << " Hello World" << std::endl;// std::endl завершение процесса??, возврат к началу строки
	std::cout << " Hello World" << std::endl << num1 << std::endl;
	std::cout << " Hello World" << std::endl << num2 << std::endl;
	std::cout << num4;
	std::cout << sim;
	std::cout << rew;
	//Стандартное пространство имен //std::
	//cout << Вывод в консоль <<название переменной;

	return 0;
}