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
	Peon(const Peon &src);
	Peon(std::string name);
	// Destructors
	~Peon(void);
	// Operators
	Peon	&operator = (const Peon &old);
	// Get methods
	virtual void	getPolymorphed(void) const;

private:
	std::string _name;
};

#endif
