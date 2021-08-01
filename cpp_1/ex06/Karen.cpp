
#include <iostream>
#include "Karen.hpp"

void Karen::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	return ;
}

void Karen::info()
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	return ;
}

void Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	return ;
}

void Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	return ;
}

Karen::Karen()
{
	comp[0] = &Karen::debug;
	comp[1] = &Karen::info;
	comp[2] = &Karen::warning;
	comp[3] = &Karen::error;
}

int		Karen::select(std::string level)
{
	if (level == "DEBUG")
		return (0);
	else if (level == "INFO")
		return (1);
	else if (level == "WARNING")
		return (2);
	else
		return (3);
}

void	Karen::complain(std::string level)
{
	(this->*comp[this->select(level)])();
	return ;
}
