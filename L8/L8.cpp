//L8
#include <iostream>

int main()
{
	int masiv[4]; //4*4=16 byte
	masiv[0] = 4;
	masiv[1] = 50;
	masiv[2] = 100;
	masiv[3] = 78;

	char masiv2[5] = { 'I','d','o','l','"' };

	std::cout << masiv[2] << std::endl;
	std::cout << masiv2[0] << masiv2[1] << masiv2[2] << masiv2[3] << masiv2[4];
	return 0;
}