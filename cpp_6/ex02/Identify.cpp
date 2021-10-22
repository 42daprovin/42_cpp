#include <iostream>
#include <ctime>

class Base {public: virtual ~Base(void) {} };
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate(void)
{
	int	n = rand() % 3;
	Base *base;

	switch (n)
	{
		case 0:
			base = new A;
			return (base);
		case 1:
			base = new B;
			return (base);
		case 2:
			base = new C;
			return (base);
	}
	return (NULL);
}

void	identify(Base* p)
{
	A		*a;
	B		*b;
	C		*c;
	char	print[3] = {'A', 'B', 'C'};

	a = dynamic_cast<A *>(p);
	b = dynamic_cast<B *>(p);
	c = dynamic_cast<C *>(p);
	Base*	class_list[3] = {a, b, c};

	for (int i=0; i < 3; i++)
	{
		if (class_list[i] != NULL)	
			std::cout << "Pointer identifier " << print[i] << std::endl;
	}
}

void	identify(Base & p)
{
	A	a;
	B	b;
	C	c;
	
	try
	{
		a = dynamic_cast<A &>(p);
		std::cout << "Reference identifier A\n";
	}
	catch (std::bad_cast &bc)
	{}
	try
	{
		b = dynamic_cast<B &>(p);
		std::cout << "Reference identifier B\n";
	}
	catch (std::bad_cast &bc)
	{}
	try
	{
		c = dynamic_cast<C &>(p);
		std::cout << "Reference identifier C\n";
	}
	catch (std::bad_cast &bc)
	{}
}

int		main(void)
{
	srand(time(NULL));

	Base	*base = generate();
	
	identify(base);
	identify(*base);

	return (0);
}
