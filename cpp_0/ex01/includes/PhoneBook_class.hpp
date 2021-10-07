#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "contact_class.hpp"

class PhoneBook
{
	public:
		contact	cntct[8];

		PhoneBook(void);
		~PhoneBook(void);

		void	add(void);
		void	search(void);
};

#endif
