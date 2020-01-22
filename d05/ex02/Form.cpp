/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:53:20 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 14:53:21 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, int signGrade, int exeGrade) : _name(name), _signGrade(signGrade), _exeGrade(exeGrade)
{
	if (signGrade < 1 || exeGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || exeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form &obj) : _signGrade(obj._signGrade), _exeGrade(obj._exeGrade)
{
	*this = obj;
}

Form::~Form(void) {};

Form &Form::operator = (Form const &rhs)
{
	this->_signed = rhs._signed;
	return (*this);
}

std::string		Form::getName(void) const { return (this->_name); }

bool	Form::getSigned(void) const { return (this->_signed); }

int		Form::getSignGrade(void) const { return (this->_signGrade); }

int		Form::getExeGrade(void) const { return (this->_exeGrade); }

void	Form::signForm(void) { this->_signed = true; }

void	Form::beSigned(Bureaucrat &rhs)
{
	if (rhs.getGrade() > this->_signGrade)
	{
		std::cout << "<" << rhs.getName() << "> cannot signs <" << this->_name << "> because ";
		throw Form::GradeTooLowException();
	} else {
		if (this->_signed)
			std::cout << "<" << rhs.getName() << "> cannot sign <" << this->_name << "> because it is already signed" << std::endl;
		else {
			std::cout << "<" << rhs.getName() << "> signs <" << this->_name << "> " << std::endl;
			signForm();
		}
	}
}

std::ostream &operator << (std::ostream &output, Form const &rhs)
{
	output << "Form info: " << std::endl;
	std::cout << "Name: " << rhs.getName() << std::endl;
	std::cout << "Sign Grade Requirement: " << rhs.getSignGrade() << std::endl;
	std::cout << "Execute Grade Requirement: " << rhs.getExeGrade() << std::endl;
	if (rhs.getSigned())
		output << "From has been signed." << std::endl;
	else
		output << "Form has not been signed." << std::endl;
	return (output);
}

Form::GradeTooHighException::GradeTooHighException(void) {};
Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &obj) { *this = obj; }
Form::GradeTooHighException::~GradeTooHighException(void) throw() {}
Form::GradeTooHighException &Form::GradeTooHighException::operator = (GradeTooHighException const &rhs)
{
	(void)rhs;
	return (*this);
}

const char *	Form::GradeTooHighException::what() const throw()
{
	return ("Form Error!!! Grade is too HIGH!!!");
}

Form::GradeTooLowException::GradeTooLowException(void) {};
Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &obj) { *this = obj; }
Form::GradeTooLowException::~GradeTooLowException(void) throw() {}
Form::GradeTooLowException &Form::GradeTooLowException::operator = (GradeTooLowException const &rhs)
{
	(void)rhs;
	return (*this);
}

const char *	Form::GradeTooLowException::what() const throw()
{
	return ("Form Error!!! Grade is too LOW!!!");
}
