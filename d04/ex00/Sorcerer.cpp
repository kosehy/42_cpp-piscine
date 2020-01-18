/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 22:53:08 by sko               #+#    #+#             */
/*   Updated: 2020/01/17 22:53:09 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	this->_name = "";
	this->_title = "";
	std::cout << this->_name << ", " << this->_title << ",is born !" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << name << ", " << title << ",is born !" << std::endl;
}
Sorcerer::Sorcerer(const Sorcerer &old)
{
	*this = old;
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer	&Sorcerer::operator = (const Sorcerer &old)
{
	_name = old.getName();
	_title = old.getTitle();
	return (*this);
}

std::string Sorcerer::getName(void) const { return (_name); }
std::string Sorcerer::getTitle(void) const { return (_title); }
void	Sorcerer::polymorph(Victim const &victim) const
{
	return (victim.getPolymorphed());
}

std::ostream &operator << (std::ostream &output, Sorcerer const &old)
{
	output << "I am " << old.getName() << ", " << old.getTitle() << ", and I like ponies !" << std::endl;
	return (output);
}
