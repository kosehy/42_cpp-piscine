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

Peon::Peon(std::string name)
{
	this->_name = name;
	std::cout << "Zog zog" << std::endl;
}
Peon::Peon(const Peon &old)
{
	*this = old;
	std::cout << "Zog zog" << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

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
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}
