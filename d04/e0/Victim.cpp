/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 22:53:27 by sko               #+#    #+#             */
/*   Updated: 2020/01/18 00:41:04 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{
	this->_name = "J";
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " <<  name << " just popped !" << std::endl;
}
Victim::Victim(const Victim &old)
{
	*this = old;
	std::cout << "Some random victim called " <<  _name << " just popped !" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

Victim	&Victim::operator = (const Victim &old)
{
	if (this != &old)
	{
		this->_name = old._name;
	}
	return (*this);
}

std::string Victim::getName(void) const { return (this->_name); }

void	Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream &operator << (std::ostream &output, Victim const &old)
{
	output << "I am " << old.getName() << " and I like otters !" << std::endl;
	return (output);
}

