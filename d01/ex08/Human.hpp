/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 21:15:29 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 21:15:30 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include <string>

class Human
{
private:
	void meleeAttack(std::string const &target);

	void rangedAttack(std::string const &target);

	void intimidatingShout(std::string const &target);

public:
	void action(std::string const &action_name, std::string const &target);
};

#endif
