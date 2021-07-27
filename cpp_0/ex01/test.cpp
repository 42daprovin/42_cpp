
#include <iostream>
#include <cstring>

int main(void)
{
	int	&i;
	std::string hola;

	std::cin >> hola;
	i = hola.length();
	std::cout << i  << std::endl;
	return (0);
}
