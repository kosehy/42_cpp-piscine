/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:21:56 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 19:21:57 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Item type is " << type << std::endl;
};

Weapon::~Weapon(void) {};

std::string 	Weapon::getType(void) const
{
	return (_type);
}

void			Weapon::setType(std::string type)
{
	_type = type;
}
