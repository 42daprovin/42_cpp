#include <iostream>
#include <fstream>

std::string		replace(std::string line, std::string del, std::string rep)	
{
	std::string		newline;
	std::size_t		pos = 0;
	std::size_t		prev_pos = 0;

	pos = line.find(del, pos);
	if (pos == std::string::npos)
		return (line);
	pos = 0;
	prev_pos = 0;
	while ((pos = line.find(del, pos)) != std::string::npos)
	{
		newline += line.substr(prev_pos, pos - prev_pos);
		newline += rep;
		prev_pos = line.find(del, pos + del.length());
		if (prev_pos == std::string::npos)
			newline += line.substr(pos + del.length());
		pos += del.length();
		prev_pos = pos;
	}
	return (newline);
}

void	read_and_replace(std::ifstream &ifs, std::ofstream &ofs, std::string del, std::string rep)
{
	std::string		line;
	std::string		newline;

	while (getline(ifs, line))
	{
		newline = replace(line, del, rep);	
		ofs << newline;
		if (ifs.eof())
			return;
		ofs << "\n";
	}
}

int		main(int ac, char **av)
{
	std::string		name;
	std::ifstream	ifs;
	std::ofstream	ofs;

	if (ac != 4)
	{
		std::cerr << "Error: need 3 arguments" << std::endl;
		return (1);
	}
	name = av[1];
	ifs.open(name);
	if (ifs.fail())
	{
		std::cout << "Error reading\n";
		exit(1);
	}
	ofs.open(name + ".replace");
	if (ofs.fail())
	{
		std::cout << "Error writing\n";
		exit(1);
	}
	read_and_replace(ifs, ofs, av[2], av[3]);
}
