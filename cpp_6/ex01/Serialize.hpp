#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

# include <iostream>

class Data
{
	public:
		Data(void);
		Data(Data const & src);
		~Data(void);

		Data &	operator=(Data const & rhc);

		int	n;
		std::string	str;
};

Data *	deserialize(uintptr_t raw);
uintptr_t	serialize(Data * ptr);

#endif
