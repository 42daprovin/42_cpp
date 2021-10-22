#include "Serialize.hpp"

Data::Data(void) : n(42), str("This is a string")
{
	return ;
}

Data::Data(Data const & src)
{
	*this = src;
	return ;
}

Data::~Data(void)
{
	return ;
}

Data &	Data::operator=(Data const & rhc)
{
	this->n = rhc.n;
	this->str = rhc.str;
	return *this;
}

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
