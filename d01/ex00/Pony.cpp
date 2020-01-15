/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 23:02:58 by sko               #+#    #+#             */
/*   Updated: 2020/01/14 23:03:11 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << _name << " is born" << std::endl;
	return ;
}

Pony::~Pony(void)
{
	std::cout << _name << " had died" << std::endl;
	return ;
}

void Pony::type(void) { std::cout << _name << "'s type is " << _type << std::endl; }
