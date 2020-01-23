#include "TypeConvert.hpp"

int isAlpha(int c)
{
	if (c >= 33 && c <= 126)
		return (1);
	else
		return (0);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Type valid Input plz" << std::endl;
		return (0);
	}
	TypeConvert	typeTest(av[1]);
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "char : ";
	try
	{
		int check = static_cast<int>(typeTest);

		if (check >= 33 && check <= 126)
			std::cout << "'" << static_cast<char>(check) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	catch (TypeConvert::ConvertErrorException &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "int : ";
	try
	{
		std::cout << static_cast<int>(typeTest) << std::endl;
	}
	catch (TypeConvert::ConvertErrorException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "?" << std::endl;
	}

	std::cout << "float : ";
	try
	{
		std::cout << static_cast<float>(typeTest) << "f" << std::endl;
	}
	catch (TypeConvert::ConvertErrorException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "?" << std::endl;
	}

	std::cout << "double: ";
	try
	{
		std::cout << static_cast<double>(typeTest) << std::endl;
	}
	catch (TypeConvert::ConvertErrorException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "?" << std::endl;
	}

	return (0);
}
