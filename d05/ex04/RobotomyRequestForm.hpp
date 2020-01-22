/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:53:29 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 16:53:31 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class	RobotomyRequestForm : public Form
{
public:
	/* Canonical Member Functions */
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm &obj);
	virtual ~RobotomyRequestForm(void);

	/* Operator Overloads */
	RobotomyRequestForm	&operator = (RobotomyRequestForm const &rhs);

	/* Member Functions */
	void	execute(Bureaucrat const &executor) const;
};

/* Operator Overloads */
std::ostream	&operator << (std::ostream &output, RobotomyRequestForm const &rhs);

#endif

