//функции и повторяющийся код//

#include <iostream>

void p(short num1 = 5) {
	std::cout << num1 << "\n";
}

void pk(int a = 3, float b = 7.7) {
	std::cout << (a + b) << "\n";
}

void tt(char t) {
	std::cout << t;//<< "\n";
}

void tp(short num5) {
	std::cout << num5 << "\n";
}

int r(int zx, int cv) {
	return (zx + cv); //зачем return???
}

int main()
{
	p(); //вывод заранее указаных значений
	pk();
	tt('H'); //вывод текста 
	tt('e');
	tt('l');
	tt('l');
	tt('o');
	std::cout << "\n";
	tt(' ');
	tt('W');
	tt('o');
	tt('r');
	tt('l');
	tt('d');
	tt(' ');
	tt('I');
	tt(' ');
	tt('C');
	tt('o');
	tt('o');
	tt('l');
	tt('l');
	tt('.');

	tp(77); //вывод значений

	int res = r(1, 2);
	int res2 = r(7, 2);
	   
	if (res2 > res) {
		std::cout << "res2 is bigger";
	}
	else
	{
		std::cout << "res is bigger";
	}

	return 0;
}