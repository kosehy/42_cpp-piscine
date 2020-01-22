/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:52:56 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 16:52:57 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &obj) : Form(obj.getName(), 25, 5) { *this = obj; }

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm	&PresidentialPardonForm::operator = (PresidentialPardonForm const &rhs)
{
	(void)rhs;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if ((this->getSigned() == true) && (executor.getGrade() <= this->getExeGrade()))
		std::cout << executor.getName() << " has been robotomized successfully" << std::endl;
	else if (this->getSigned() == false)
		std::cout << "Bureaucrat must sign this form before executing." << std::endl;
	else
		throw	Form::GradeTooLowException();
}

std::ostream	&operator << (std::ostream &output, PresidentialPardonForm const &rhs)
{
	output << "PresidentialPardon Creation Form Info: " << std::endl;
	std::cout << "Sign Grade Requirement: " << rhs.getSignGrade() << std::endl;
	std::cout << "Execute Grade Requirement: " << rhs.getExeGrade() << std::endl;
	if (rhs.getSigned())
		output << "From has been signed." << std::endl;
	else
		output << "Form has not been signed." << std::endl;
	return (output);
}
