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
#include <sstream>

class Victim {
public:
	// Constructors
	Victim(void);
	Victim(std::string name);
	Victim(const Victim &old);
	// Destructors
	~Victim(void);
	// Operators
	Victim &operator=(const Victim &old);
	// Get Functions
	std::string getName(void) const;

	void getPolymorphed(void) const;

private:
	std::string _name;
};

std::ostream	&operator << (std::ostream & out, const Victim &old);

#endif
