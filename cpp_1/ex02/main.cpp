#include <iostream>

int		main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "This is the address with PTR:" << stringPTR << std::endl; 
	std::cout << "This is the address with REF:" << &stringREF << std::endl; 
	std::cout << std::endl;
	std::cout << "This is the value with PTR:" << *stringPTR << std::endl; 
	std::cout << "This is the value with REF:" << stringREF << std::endl; 

	return (0);
}
