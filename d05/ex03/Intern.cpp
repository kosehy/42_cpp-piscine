/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:32:25 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 20:32:27 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern &obj) { *this = obj; }

Intern::~Intern(void) {}

Intern	&Intern::operator = (Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

Form	*Intern::makeForm(std::string form, std::string target)
{
	if (form == "shrubbery creation")
	{
		std::cout << "Intern creates << " << form << std::endl;
		return (new ShrubberyCreationForm(target));
	} else if (form == "robotomy request")
	{
		std::cout << "Intern creates << " << form << std::endl;
		return (new RobotomyRequestForm(target));
	} else if (form == "presidential pardon")
	{
		std::cout << "Intern creates << " << form << std::endl;
		return (new PresidentialPardonForm(target));
	} else
		std::cout << "Intern failed to create " << form << std::endl;
	return (NULL);
}