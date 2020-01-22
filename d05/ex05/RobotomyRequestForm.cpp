/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:53:37 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 16:53:38 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &obj) : Form(obj.getName(), 72, 45) { *this = obj; }

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm	&RobotomyRequestForm::operator = (RobotomyRequestForm const &rhs)
{
	(void)rhs;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	static int i = 0;
	if ((this->getSigned() == true) && (executor.getGrade() <= this->getExeGrade())) {
		std::cout << "Deureureu reureu reureu reuk!" << std::endl;
		if (i % 2 == 0)
			std::cout << "RobotomyRequest Form has been robotomized successfully" << std::endl;
		else
			std::cout << "RobotomyRequest Form has failed to be romotomized" << std::endl;
		++i;
	}
	else if (this->getSigned() == false)
		std::cout << "Bureaucrat must sign this form before executing." << std::endl;
	else
		throw	Form::GradeTooLowException();
}

std::ostream	&operator << (std::ostream &output, RobotomyRequestForm const &rhs)
{
	output << "RobotomyRequest Creation Form Info: " << std::endl;
	std::cout << "Sign Grade Requirement: " << rhs.getSignGrade() << std::endl;
	std::cout << "Execute Grade Requirement: " << rhs.getExeGrade() << std::endl;
	if (rhs.getSigned())
		output << "From has been signed." << std::endl;
	else
		output << "Form has not been signed." << std::endl;
	return (output);
}
