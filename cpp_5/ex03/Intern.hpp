#ifndef INTERN_HPP
# define INTERN_HPP

class Intern
{
	public:
	
		Intern(void);
		Intern(Intern const & rhs);
		~Intern(void);

		Intern &	operator=(Intern const & rhs);

		Form	*makeform(std::string name, std::string target);

	private:


};

#endif
