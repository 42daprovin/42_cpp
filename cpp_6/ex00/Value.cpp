#include "Value.hpp"
#include <sstream>
#include <string>
#include <cstdlib>

Value::Value(void)
{
	return ;
}

Value::Value(std::string value) : _value(value)
{
	std::string::size_type		position;
	int		count = 0;

	if (this->_value[0] > '9' || this->_value[0] < '0')
	{
		this->_value = this->_value.substr(0, 1);
	}
	else
	{
		for (int i = 0; (this->_value[i] >= '0' && this->_value[i] <= '9') || this->_value[i] == '.'; i++)
			count++;
		this->_value = this->_value.substr(0, count + 1);
		position = this->_value.find('.');
		if (position == std::string::npos)
			return ;
		else
		{
			if (this->_value.find('.', position + 1) != std::string::npos)	//check if there are two '.'
			{
				std::cerr << "Number worng formated!\n";
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

void		Value::display(void)
{
	std::string::size_type	length;
	float					f(0.0f);
	int						i(0);
	double					d(0.0);

	length = this->_value.length();
	if (length == 1)
		this->fromChar(static_cast<char>(this->_value[0]));
	else
	{
		if (this->_value[length - 1] == 'f')
		{
			this->_value = this->_value.erase(length - 1);
			/* this->fromFloat(ss); */
		}
		/* if (this->_value.find('.') == std::string::npos) */		
		/* { */
		/* 	if (this->_value[this->_value.length() - 1]) */
		/* } */
	}
}
