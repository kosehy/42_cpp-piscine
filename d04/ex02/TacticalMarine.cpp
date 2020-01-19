/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 16:51:16 by sko               #+#    #+#             */
/*   Updated: 2020/01/18 16:51:20 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) { std::cout << "Tactical Marine ready for battle" <<std::endl; };

TacticalMarine::TacticalMarine(TacticalMarine const &obj)
{
	*this = obj;
	std::cout << "Tactical Marine ready for battle" <<std::endl;
}

TacticalMarine::~TacticalMarine(void) { std::cout << "Aaargh ..." << std::endl; }

TacticalMarine	&TacticalMarine::operator = (TacticalMarine const &rhs)
{
	(void)rhs;
	return (*this);
}

ISpaceMarine *TacticalMarine::clone() const
{
	ISpaceMarine	*ret = new TacticalMarine(*this);
	return (ret);
}

void	TacticalMarine::battleCry() const { std::cout << "For the holy PLOT !" << std::endl; }
void	TacticalMarine::rangedAttack() const { std::cout << "* attacks with bolter *" << std::endl; }
void	TacticalMarine::meleeAttack() const { std::cout << "* attacks with chainsword *" << std::endl; }
