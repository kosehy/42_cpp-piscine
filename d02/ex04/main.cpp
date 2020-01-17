#include "Fixed.class.hpp"

Fixed	eval_expr(char *str)
{
	Fixed	calc;

	calc = parseSum(&str);
	return (calc);
}

int 	main(int ac, char **av)
{
	char 	*str;
	if (ac == 2)
	{
		str = av[1];
		checkInput(str);
		str = cleanSpaces(str);
		std::cout << eval_expr(str) << std::endl;
	}
	else
	{
		std::cout << "Wrong!!" << std::endl;
		std::cout << "usage : ./eval_expr [str]" << std::endl;
	}
	return (0);
}