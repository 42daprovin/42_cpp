
#include <iostream>
#include <cstring>

int main(void)
{
	std::string hola;

	std::cout << "Hola como esta:";
	std::getline(std::cin, hola);
	std::cout << hola << std::endl;
	return (0);
}
