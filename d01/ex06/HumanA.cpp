/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:22:07 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 19:22:08 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(&weapon) {};

HumanA::~HumanA(void) {};

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}