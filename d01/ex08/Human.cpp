/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 21:15:34 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 21:15:35 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const &target)
{
	std::cout << "Melee attack to " << target << std::endl;
}

void	Human::rangedAttack(std::string const &target)
{
	std::cout << "ranged attack to " << target << std::endl;
}

void	Human::intimidatingShout(std::string const &target)
{
	std::cout << "Intimidating shout to " << target << std::endl;
}

typedef	void(Human::*action_type) (std::string const &);

void	Human::action(std::string const &action_name, std::string const &target)
{
	std::string types[3] = { "meleeAttack", "rangedAttack", "intimidatingShout" };
	action_type actions[3] = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};

	for (int i = 0; i < 3; ++i)
	{
		if (types[i].compare(action_name) == 0)
			(this->*actions[i])(target);
	}
}
