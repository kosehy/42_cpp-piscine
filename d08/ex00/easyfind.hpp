#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <ctime>
#include <exception>
#include <list>

template <typename T>
int		easyfind(T list, int value)
{
	std::list<int>::const_iterator	start = list.begin();
	std::list<int>::const_iterator	end = list.end();

	ptrdiff_t	i = 0;
}

#endif