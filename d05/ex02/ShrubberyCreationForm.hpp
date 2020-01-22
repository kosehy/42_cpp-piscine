/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:53:11 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 16:53:12 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
public:
	/* Canonical Member Functions */
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm &obj);
	virtual ~ShrubberyCreationForm(void);

	/* Operator Overloads */
	ShrubberyCreationForm	&operator = (ShrubberyCreationForm const &rhs);

	/* Member Functions */
	void	execute(Bureaucrat const &executor) const;
};

/* Operator Overloads */
std::ostream	&operator << (std::ostream &output, ShrubberyCreationForm const &rhs);

#endif
