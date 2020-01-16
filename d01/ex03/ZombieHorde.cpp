/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:23:41 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 15:23:42 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _n(n)
{
	_zombies = new Zombie[n]();
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
		_zombies[i] = createRand();
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] _zombies;
}

void 	ZombieHorde::announce(void)
{
	for (int i = 0; i < _n; ++i)
		_zombies[i].announce();
	return ;
}


Zombie& ZombieHorde::createRand(void)
{
	std::string 	name[8] = {"a", "b", "c", "d", "e", "f", "g", "h"};
	Zombie	*zombie = new Zombie(name[rand() % 8], "horde");
	return (*zombie);
}