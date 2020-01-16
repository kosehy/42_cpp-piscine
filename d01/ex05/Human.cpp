/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 16:53:42 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 16:53:43 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Human.hpp>

Human::Human(void)
{
	_brain = new Brain();
};

Human::~Human(void)
{
	delete _brain;
};

std::string 	Human::identify(void)
{
	return (_brain->identify());
}

Brain&			Human::getBrain(void)
{
	return (*_brain);
}
