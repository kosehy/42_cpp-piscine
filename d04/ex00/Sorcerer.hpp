/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 22:53:02 by sko               #+#    #+#             */
/*   Updated: 2020/01/17 22:53:03 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include "Victim.hpp"

class Sorcerer
{
public:
	// Canonical Member Functions
	Sorcerer(void);
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &old);
	virtual ~Sorcerer(void);

	// Operator Overloads
	Sorcerer	&operator = (const Sorcerer &old);
	void		polymorph(Victim const &victim) const;

	// Get Functions
	std::string getName(void) const;
	std::string getTitle(void) const;

private:
	std::string 	_name;
	std::string 	_title;
};

std::ostream &operator << (std::ostream &output, Sorcerer const &old);

#endif
