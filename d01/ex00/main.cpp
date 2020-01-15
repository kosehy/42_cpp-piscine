/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 23:03:45 by sko               #+#    #+#             */
/*   Updated: 2020/01/14 23:04:06 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"


void	ponyOnTheHeap(void)
{
	Pony *pony1 = new Pony("Heap1", "Red");
	Pony *pony2 = new Pony("Heap2", "Yellow");
	pony1->type();
	pony2->type();
	std::cout << "pony1's address is " << &pony1 << std::endl;
	std::cout << "pony2's address is " << &pony2 << std::endl;
	delete pony1;
	delete pony2;
	return ;
}

void	ponyOnTheStack(void)
{
	Pony pony1 = Pony("Stack1", "Blue");
	Pony pony2 = Pony("Stack2", "Black");
	std::cout << "pony1's address is " << &pony1 << std::endl;
	std::cout << "pony2's address is " << &pony2 << std::endl;
	pony1.type();
	pony2.type();
	return ;
}

int 	main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}