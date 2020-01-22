/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:53:18 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 16:53:18 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 147, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj) : Form(obj.getName(), 147, 137) { *this = obj; }

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator = (ShrubberyCreationForm const &rhs)
{
	(void)rhs;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if ((this->getSigned() == true) && (executor.getGrade() <= this->getExeGrade()))
	{
		std::ofstream	ofs(this->getName() + "_shrubbery");
		ofs << ""
		 		"		v .   ._, |_  .,				" << std::endl	<<
				"	`-._'\'/  .  '\' /    |/_			" << std::endl	<<
				"		\\  _'\', y | '\'//				" << std::endl	<<
				"		_'\'_.___\\, \\/ -.'\'||		" << std::endl	<<
				"			`7-,--.`._||  / / ,			" << std::endl	<<
				"			/'     `-. `./ / |/_.'		" << std::endl	<<
				" 					|    |//			" << std::endl	<<
				" 					|_    /				" << std::endl	<<
				" 					|-   |				" << std::endl	<<
				" 					|   =|				" << std::endl	<<
				"					|    |				" << std::endl	<<
				"------------------/ ,  . '\'--------	" << std::endl;
		ofs.close();
		std::cout << "Shrubbery Form has been executed by << " << executor.getName() << std::endl;
	}
	else if (this->getSigned() == false)
		std::cout << "Bureaucrat must sign this form before executing." << std::endl;
	else
		throw	Form::GradeTooLowException();
}

std::ostream	&operator << (std::ostream &output, ShrubberyCreationForm const &rhs)
{
	output << "Shrubbery Creation Form Info: " << std::endl;
	std::cout << "Sign Grade Requirement: " << rhs.getSignGrade() << std::endl;
	std::cout << "Execute Grade Requirement: " << rhs.getExeGrade() << std::endl;
	if (rhs.getSigned())
		output << "From has been signed." << std::endl;
	else
		output << "Form has not been signed." << std::endl;
	return (output);
}