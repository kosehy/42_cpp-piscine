/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 21:15:38 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 21:15:39 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int 	main()
{
	Human hu;
	std::string target1 = "A";
	std::string target2 = "B";
	std::string target3 = "C";
	hu.action("meleeAttack", target1);
	hu.action("rangedAttack", target2);
	hu.action("intimidatingShout", target3);
}
