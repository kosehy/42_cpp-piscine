/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:52:48 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 16:52:50 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class	PresidentialPardonForm : public Form
{
public:
	/* Canonical Member Functions */
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm &obj);
	virtual ~PresidentialPardonForm(void);

	/* Operator Overloads */
	PresidentialPardonForm	&operator = (PresidentialPardonForm const &rhs);

	/* Member Functions */
	void	execute(Bureaucrat const &executor) const;
};

/* Operator Overloads */
std::ostream	&operator << (std::ostream &output, PresidentialPardonForm const &rhs);

#endif
