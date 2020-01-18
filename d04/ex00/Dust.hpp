/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dust.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 22:53:33 by sko               #+#    #+#             */
/*   Updated: 2020/01/17 22:53:34 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUST_HPP
#define DUST_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Dust : public Victim
{
public:
	// Constructors
	Dust(void);
	Dust(std::string name);
	Dust(Dust &src);
	// Destructors
	virtual ~Dust(void);
	// Operators
	Dust	&operator = (const Dust &old);
	// Get methods
	std::string	getName(void) const;
	void	getPolymorphed(void) const;

private:
	std::string _name;
};

std::ostream	&operator << (std::ostream &output, Dust const &old);

#endif
