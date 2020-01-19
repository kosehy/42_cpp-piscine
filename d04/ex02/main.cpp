/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 16:52:10 by sko               #+#    #+#             */
/*   Updated: 2020/01/18 16:52:10 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine	*cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << "!!!!!!test1!!!!!!" << std::endl;

	AssaultTerminator	*ken = new AssaultTerminator;
	ISpaceMarine		*bab = new AssaultTerminator;
	TacticalMarine		*ko = new TacticalMarine;
	ISpaceMarine		*may = new TacticalMarine(*ko);
	ISpaceMarine		*yan = new AssaultTerminator(*ken);
	ISquad				*Team = new Squad;
	std::cout << "Done team building!" << std::endl;
	Team->push(ken);
	Team->push(bab);
	Team->push(may);
	Team->push(yan);

	ISquad	*enemy = Team;
	for (int i = 0; i < enemy->getCount(); ++i)
	{
		ISpaceMarine	*next = enemy->getUnit(i);
		next->battleCry();
		next->rangedAttack();
		next->meleeAttack();
	}

	delete enemy;

	delete ken;

	return (0);
}
