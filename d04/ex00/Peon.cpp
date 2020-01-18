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

Peon::Peon(void)
{
	this->_name = "H";
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(std::string name)
{
	this->_name = name;
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return ;
};

Peon	&Peon::operator = (const Peon &old)
{
	if (this != &old)
	{
		this->_name = old._name;
	}
	return (*this);
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
	return ;
}
