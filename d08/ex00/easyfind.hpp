#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <ctime>
#include <exception>
#include <list>
#include <vector>
#include <map>
#include <algorithm>

template <typename T>
int		easyfind(T list, int value)
{
	std::list<int>::const_iterator	start = list.begin();
	std::list<int>::const_iterator	end = list.end();

	ptrdiff_t	i = 0;

	try{
		while (start != end)
		{
			if (*start == value)
				return (i);
			++start;
			++i;
		}
	}
	catch (std::exception &e)
	{
		throw std::exception();
	}
	if (start != end)
		return (i);
	throw std::exception();
}

#endif