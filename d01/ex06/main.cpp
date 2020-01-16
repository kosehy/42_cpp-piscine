/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:22:35 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 19:22:36 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int 	main()
{
	{
		Weapon		club = Weapon("crude spiked club");

		HumanA		sala("Bob", club);
		sala.attack();
		club.setType("some other type of club");
		sala.attack();
	}
	{
		Weapon		club = Weapon("crude spiked club");

		HumanB		mane("Jim");
		mane.setWeapon(club);
		mane.attack();
		club.setType("some other type of club");
		mane.attack();
	}
}
