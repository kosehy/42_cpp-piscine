/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:22:19 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 19:22:20 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {};

HumanB::~HumanB(void) {};

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void 	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}
