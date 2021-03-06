/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 23:38:36 by sko               #+#    #+#             */
/*   Updated: 2020/01/14 23:38:37 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	_type = "none";
}

ZombieEvent::~ZombieEvent(void) {}

void	ZombieEvent::setZombieType(std::string type)
{
	_type = type;
};

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie*	zombie = new Zombie(name, _type);
	return (zombie);
}
