/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:32:20 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 20:32:21 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Form;

class	Intern
{
public:
	/* Canonical Member Functions */
	Intern(void);
	Intern(Intern &obj);
	virtual	~Intern(void);

	/* Operator Overloads */
	Intern	&operator = (Intern const &rhs);

	/* Member Functions */
	Form	*makeForm(std::string form, std::string target);
};

#endif

