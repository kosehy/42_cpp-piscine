#include "easyfind.hpp"

void	showTheContent(std::list<int> list)
{
	std::list<int>::iterator it;
	for (it=list.begin(); it != list.end(); ++it)
	{
		std::cout << *it << " " ;
	}
	std::cout << "\n";
}

int	main(int ac, char **av) {
	srand(time(0));
	if (ac != 2)
	{
		std::cout << "Invalid Input!! Type number between 0 - 9!" << std::endl;
		return (0);
	}

	std::list<int>	test;
	int i = 0;
	while (i < 10)
	{
		test.push_back(rand() % 10);
		++i;
	}
	showTheContent(test);
	int	search = atoi(av[1]);
	if (search < 0 || search > 9)
	{
		std::cout << "Invalid Input!! Type number between 0 - 9!" << std::endl;
	}
	try{
		int	index = easyfind(test, search);
		std::cout << "Search Result : " << search << " at test[" << index << "]" << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << "cannot find the "<< search << " in The test!!!" << std::endl;
	}
	return (0);
}