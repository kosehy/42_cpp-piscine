/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:52:50 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 14:52:51 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &obj)
{
	*this = obj;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat	&Bureaucrat::operator = (Bureaucrat const &rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

void	Bureaucrat::operator += (int const i)
{
	if ((this->_grade - i) > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = this->_grade - i;
}

void	Bureaucrat::operator -= (int const i)
{
	if ((this->_grade + i) < 1)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = this->_grade + i;
}

std::string		Bureaucrat::getName(void) const { return (this->_name); }
int 	Bureaucrat::getGrade(void) const { return (this->_grade); }

std::ostream	&operator << (std::ostream &output, Bureaucrat const &rhs)
{
	output << rhs.getName() << " " << rhs.getGrade() << std::endl;
	return (output);
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) {}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &obj)
{
	*this = obj;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}

Bureaucrat::GradeTooHighException	&Bureaucrat::GradeTooHighException::operator = (GradeTooHighException const &rhs)
{
	(void)rhs;
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Warning! Grade is higher than 1!!");
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) {}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &obj)
{
	*this = obj;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}

Bureaucrat::GradeTooLowException	&Bureaucrat::GradeTooLowException::operator = (GradeTooLowException const &rhs)
{
	(void)rhs;
	return (*this);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Warning! Grade is lower than 150!!");
}
