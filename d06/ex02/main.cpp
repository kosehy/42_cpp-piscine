#include <iostream>
#include <string>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int r = rand() % 3;

	if (r == 0)
		return (new A());
	else if (r == 1)
		return (new B());
	else
		return (new C());
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base &p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}

int	main()
{
	srand(time(0));

	std::cout << "A, B or C sanjou!" << std::endl;
	Base	*test = generate();

	std::cout << "using pointer: ";
	identify_from_pointer(test);

	std::cout << "using reference: ";
	identify_from_reference(*test);

	delete test;
}
