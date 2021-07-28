
#ifndef TEST_CLASS_H
# define TEST_CLASS_H

class contact
{
	public:
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		phone_number;
		std::string		darkest_secret;

		contact(void);
		~contact(void);
	
		int		getfull(void) const;
		void	setfull(void);
		int		getold(void) const;
		void	setold(int oldest);
	private:
		int		_old;
		int		_full;
};

int		get_oldest(contact *contact);

int		print_list(contact *contact);

void	print_contact_info(contact contact);

#endif
