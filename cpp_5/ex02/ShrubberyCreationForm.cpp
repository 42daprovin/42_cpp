#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery", 145, 147), _target("Default")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("Shrubbery", 145, 147), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & rhs) : Form("Shrubbery", 145, 147)
{
	*this = rhs;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

std::string const	ShrubberyCreationForm::get_target(void) const
{
	return (this->_target);
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	(std::string)this->_target = rhs.get_name();
	return *this;
}

void		ShrubberyCreationForm::execAction(void) const
{
	std::ofstream	os;

	os.open(this->_target);
	if (os.fail())
	{
		std::cerr << "Error writing" << std::endl;
		exit(1);
	}
    os << "          .     .  .      +     .      .          .              .     .  .      +     .      .          .    " << std::endl;
    os << "     .       .      .     #       .           .             .       .      .     #       .           .        " << std::endl;
    os << "        .      .         ###            .      .      .        .      .         ###            .      .      ." << std::endl;
	os << "        .      .         ###            .      .      .        .      .         ###            .      .      ." << std::endl;
	os << "      .      .    #:. .:#####:. .:#   .      .               .      .    #:. .:#####:. .:#   .      .         " << std::endl;
	os << "          .      .  #############   .                            .      .  #############   .                  " << std::endl;
	os << "       .      #:.    .:# ### #:.    .:#   .        .          .      #:.    .:# ### #:.    .:#   .        .   " << std::endl;
	os << "  .              ######### #########         .        .  .              ######### #########         .        ." << std::endl;
	os << "        .     #:.   #### ### ####   .:#    .       .           .     #:.   #### ### ####   .:#    .       .   " << std::endl;
	os << "     .     .   #######  ## ##  #######                      .     .   #######  ## ##  #######                 " << std::endl;
	os << "                . ## ##### ##### ##            .      .                . ## ##### ##### ##            .      ." << std::endl;
	os << "    .    #:. ...  .:## ### ### ##:.  ... .:#      .        .    #:. ...  .:## ### ### ##:.  ... .:#      .    " << std::endl;
	os << "      .      ####### ## ##### ## #######       .      .      .      ####### ## ##### ## #######       .      ." << std::endl;
	os << "    .    .      #####  #######  #####     .           .    .    .      #####  #######  #####     .           ." << std::endl;
	os << "            .     '      000      '    .              .            .     '      000      '    .              ." << std::endl;
	os << "       .         .   .   000     .        .       .           .         .   .   000     .        .       .    " << std::endl;
	os << ".. .. ..................O000O........................ ... .. ..................O000O........................ ." << std::endl;

	std::cout << this->_target << " created." << std::endl;
}
