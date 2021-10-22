#include "Value.hpp"
#include <sstream>
#include <string>
#include <cstdlib>
#include <iomanip>

Value::Value(void)
{
	return ;
}

Value::Value(std::string value) : _value(value)
{
	std::string::size_type		position;
	int		count = 0;

	if (this->_value == "-inf" || this->_value == "+inf" || this->_value == "nan"
		|| this->_value == "-inff" || this->_value == "+inff" || this->_value == "nanf" || this->_value == "inf" || this->_value == "inff")
		return ;

	if ((this->_value[0] > '9' || this->_value[0] < '0') && this->_value[0] != '-' && this->_value[0] != '+')
	{
		this->_value = this->_value.substr(0, 1);
	}
	else
	{
		if (this->_value[0] == '-' || this->_value[0] == '+')
			count++;
		while ((this->_value[count] >= '0' && this->_value[count] <= '9') || this->_value[count] == '.')
			count++;
		this->_value = this->_value.substr(0, count + 1);
		position = this->_value.find('.');
		if (position == std::string::npos)
			return ;
		else
		{
			if (this->_value.find('.', position + 1) != std::string::npos)
			{
				std::cerr << "Number wrong formated!\n";
				exit(1);
			}
			else
				return ;
		}
	}
	return ;
}

Value::Value(Value const & src)
{
	*this = src;
	return ;
}

Value::~Value(void)
{
	return ;
}

Value	& Value::operator=(Value const & rhs)
{
	this->_value = rhs.getvalue();
	return *this;
}

std::string		Value::getvalue(void) const
{
	return (this->_value);
}

void		Value::fromFloat(std::string f) const
{
	float	number(0.0f);

	if (f == "inf" || f == "+inf" || f == "-inf" || f == "nan")
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: " << f << "f\n";
		std::cout << "double: " << f << std::endl;
		return ;
	}
	std::stringstream(f) >> number; 	
	if (static_cast<int>(number) > 127 || static_cast<int>(number) < 0)
		std::cout << "char: impossible\n";
	else if (static_cast<char>(number) >= 0 && static_cast<char>(number) <= 31)
		std::cout << "char: Non displayalbe\n";
	else
		std::cout << "char: '" << static_cast<char>(number) << "'\n";
	std::cout << "int: " << static_cast<int>(number) << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(number) << "f\n";
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(number) << std::endl;
}

void		Value::fromChar(char c) const
{
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(c) << std::endl;
}

void		Value::fromDouble(std::string d) const
{
	double	number(0.0);
	
	if (d == "inf" || d == "+inf" || d == "-inf" || d == "nan")
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: " << d << "f\n";
		std::cout << "double: " << d << std::endl;
		return ;
	}
	std::stringstream(d) >> number; 	
	if (static_cast<int>(number) > 127 || static_cast<int>(number) < 0)
		std::cout << "char: impossible\n";
	else if (static_cast<char>(number) >= 0 && static_cast<char>(number) <= 31)
		std::cout << "char: Non displayalbe\n";
	else
		std::cout << "char: '" << static_cast<char>(number) << "'\n";
	std::cout << "int: " << static_cast<int>(number) << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(number) << "f\n";
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(number) << std::endl;
}

void		Value::fromInt(int i) const
{
	if (i > 127 || i < 0)
		std::cout << "char: impossible\n";
	else if (i >= 0 && i <= 31)
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << static_cast<char>(i) << "'\n";
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(i) << "f\n";
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(i) << std::endl;
}

void		Value::display(void)
{
	std::string::size_type	length;
	int						i(0);

	length = this->_value.length();
	if (length == 1 && (this->_value[0] < '0' || this->_value[0] > '9'))
	{
		this->fromChar(static_cast<char>(this->_value[0]));
		return ;
	}
	else
	{
		if (this->_value[length - 1] == 'f' && this->_value != "-inf" && this->_value != "+inf" && this->_value != "inf")
		{
			this->_value = this->_value.erase(length - 1);
			this->fromFloat(this->_value);
			return ;
		}
		if (this->_value[length - 1] < '0' || this->_value[length - 1] > '9')
			this->_value = this->_value.erase(length - 1);
		if (this->_value.find('.') == std::string::npos)
		{
			std::stringstream(this->_value) >> i;
			this->fromInt(i);
		}
		else
			this->fromDouble(this->_value);	
	}
}
