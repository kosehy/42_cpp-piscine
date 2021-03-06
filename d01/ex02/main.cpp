/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 23:38:49 by sko               #+#    #+#             */
/*   Updated: 2020/01/14 23:38:51 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h>

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void 	randomChump(void)
{
	std::string	name[8] = {"wizard", "fighter", "paladin", "mage", "assassin", "zombie", "artist", "bard"};
	Zombie	zombie = Zombie(name[rand() % 8], "random");
	zombie.announce();
	return ;
}

int 	main()
{
	ZombieEvent	event = ZombieEvent();
	Zombie*	kane = event.newZombie("Kane");
	event.setZombieType("war-machine");
	Zombie*	son	= event.newZombie("son");
	event.setZombieType("fast");
	delete kane;
	delete son;

	srand(time(NULL));
	randomChump();
	randomChump();
	randomChump();
	return (0);
}
