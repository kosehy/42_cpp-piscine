/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 22:53:38 by sko               #+#    #+#             */
/*   Updated: 2020/01/17 22:53:38 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	this->_name = name;
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(Peon &old) : Victim(old)
{
	*this = old;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon	&Peon::operator = (const Peon &old)
{
	if (this != &old)
		this->_name = old._name;
	return (*this);
}

std::string		Peon::getName(void) const
{
	return (this->_name);
}

std::ostream	&operator << (std::ostream &output, Peon const &old)
{
	output << "I'm " << old.getName() << " and I like otters !" << std::endl;
	return (output);
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
	return ;
}
