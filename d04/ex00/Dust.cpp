/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dust.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 22:53:38 by sko               #+#    #+#             */
/*   Updated: 2020/01/17 22:53:38 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dust.hpp"

Dust::Dust(std::string name) : Victim(name)
{
	this->_name = name;
	std::cout << "I'm Dust !" << std::endl;
	return ;
}

Dust::Dust(Dust &old) : Victim(old)
{
	*this = old;
	std::cout << "I'm Dust !" << std::endl;
}

Dust::~Dust(void)
{
	std::cout << "Ah..." << std::endl;
	return ;
}

Dust	&Dust::operator = (const Dust &old)
{
	if (this != &old)
		this->_name = old._name;
	return (*this);
}

std::string		Dust::getName(void) const
{
	return (this->_name);
}

std::ostream	&operator << (std::ostream &output, Dust const &old)
{
	output << "I'm " << old.getName() << " and I like chocolate !" << std::endl;
	return (output);
}

void	Dust::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a yellow stone !" << std::endl;
	return ;
}
