#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
	}
	{
		std::cout << "---->Int array<----\n" << std::endl;
		Array<int>	arr(5);
		arr[0] = 1;
		arr[1] = 2;
		arr[2] = 3;
		arr[3] = 4;
		arr[4] = 5;
		Array<int>	tmp(arr);
		tmp[0] = 6;

		for (int i=0; i < arr.size(); i++)
			std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
		std::cout << std::endl;
		for (int i=0; i < tmp.size(); i++)
			std::cout << "tmp[" << i << "] = " << tmp[i] << std::endl;
	}
	{
		std::cout << "---->Int array<----\n" << std::endl;
		Array<std::string>	arr(5);
		arr[0] = "This";
		arr[1] = "is";
		arr[2] = "a";
		arr[3] = "string";
		arr[4] = "array";
		Array<std::string>	tmp(arr);
		tmp[2] = "tmp";

		for (int i=0; i < arr.size(); i++)
			std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
		std::cout << std::endl;
		for (int i=0; i < tmp.size(); i++)
			std::cout << "tmp[" << i << "] = " << tmp[i] << std::endl;
	}
}
