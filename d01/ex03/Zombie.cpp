/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 23:38:20 by sko               #+#    #+#             */
/*   Updated: 2020/01/14 23:38:21 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << _name << " has been spawned" << std::endl;
	return ;
}
// initialize
Zombie::Zombie() {};

Zombie::~Zombie(void)
{
	std::cout << _name << " has died" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << "<" << _name << "(" << _type << ")> Braiiiiiiinnnssss...." << std::endl;
	return ;
}
