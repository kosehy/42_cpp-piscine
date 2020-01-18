/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 22:53:16 by sko               #+#    #+#             */
/*   Updated: 2020/01/17 22:53:18 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
public:
	// Canonical Member Functions
	// Constructors
	Victim(void);
	Victim(std::string name);
	Victim(const Victim &old);
	// Destructors
	~Victim(void);

	// Operator Overloads
	Victim	&operator = (const Victim &old);

	// Get Functions
	std::string getName(void) const;
	void	getPolymorphed(void) const;

private:
	std::string 	_name;
};

std::ostream &operator << (std::ostream &output, Victim const &old);

#endif

