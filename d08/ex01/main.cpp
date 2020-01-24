/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 17:01:56 by sko               #+#    #+#             */
/*   Updated: 2020/01/23 17:01:57 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Invalied input! Enter positive number!" << "\n";
	}

	unsigned int i = atoi(av[1]);
	srand(time(0));

	if (i <= 0)
	{
		std::cout << "Invalied input! Enter positive number!" << "\n";
	}
	Span	demo(i);
	unsigned int j = 0;
	int k = 0;
	std::cout << "data" << "\n";
	while (j < i)
	{
		k = rand() % 10000;
		demo.addNumber(k);
		std::cout << "(" << k << ") ";
		if (j == 0) {}
		else
			if (j % 20 == 0)
				std::cout << "\n";
		++j;
	}
	std::cout << "\n" << "\n";
	try {
		std::cout << "Smallest span in data: " << demo.shortestSpan() << std::endl;
		std::cout << "Largest span in storage: " << demo.longestSpan() << std::endl;
	}
	catch ( Span::NotEnoughNumberException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "No span to find!" << "\n";
	}
	try {
		demo.addNumber(rand() % 10000);
	}
	catch (Span::NoSpaceException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "???" << "\n";
	}
	return (0);
}
