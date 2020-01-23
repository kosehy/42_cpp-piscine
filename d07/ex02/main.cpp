#include "Array.hpp"

int		main(void)
{
	srand(time(0));
	int n = rand() % 42;
	Array<int> arrTest(n);

	try {
		unsigned int i = 0;
		while (i < arrTest.size())
		{
			arrTest[i] = rand() % 42;
			++i;
		}
		i = 0;
		std::cout << "Index : " << n << std::endl;
		while (i <= arrTest.size())
		{
			std::cout << "Array[" << i << "] : " << arrTest[i] << std::endl;
			++i;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}