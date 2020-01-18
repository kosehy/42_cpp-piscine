/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 22:53:43 by sko               #+#    #+#             */
/*   Updated: 2020/01/17 22:53:44 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Peon.hpp"
#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Dust.hpp"

int main(void)
{
	std::cout << "~~ Declarations ~~" << std::endl;
	Sorcerer	robert("Robert", "the Manificent");

	Victim		jim("Jimmy");
	Peon		joe("Joe");
	Dust		kim("Kim");

	std::cout << robert << jim << joe << kim;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(kim);

	return (0);
}
