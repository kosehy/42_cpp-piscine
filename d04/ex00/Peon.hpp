/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 22:53:33 by sko               #+#    #+#             */
/*   Updated: 2020/01/17 22:53:34 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
public:
	// Constructors
	Peon(void);
	Peon(std::string name);
	Peon(Peon &src);
	// Destructors
	virtual ~Peon(void);
	// Operators
	Peon	&operator = (const Peon &old);
	// Get methods
	std::string	getName(void) const;
	void	getPolymorphed(void) const;

private:
	std::string _name;
};

std::ostream	&operator << (std::ostream &output, Peon const &old);

#endif
