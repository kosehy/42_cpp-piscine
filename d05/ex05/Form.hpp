/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:53:24 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 14:53:25 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	/* Canonical Member Functions */
	Form(void);
	Form(std::string const name, int signGrade, int exeGrade);
	Form(Form &obj);
	virtual ~Form(void);

	/* Operator Overloads */
	Form	&operator = (Form const &rhs);

	/* Get Functions */
	std::string		getName(void) const;
	bool	getSigned(void) const;
	int		getSignGrade(void) const;
	int		getExeGrade(void) const;

	/* Member Functions */
	void	signForm(void);
	void	beSigned(Bureaucrat &rhs);
	virtual void	execute(Bureaucrat const &obj) const = 0;

	/* Nested classes */
	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(void);
		GradeTooHighException(GradeTooHighException const &obj);
		virtual ~GradeTooHighException(void) throw();
		GradeTooHighException &operator = (GradeTooHighException const &rhs);
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(void);
		GradeTooLowException(GradeTooLowException const &obj);
		virtual ~GradeTooLowException(void) throw();
		GradeTooLowException &operator = (GradeTooLowException const &rhs);
		virtual const char *what() const throw();
	};

private:
	/* Variables */
	std::string const	_name;
	bool	_signed;
	int const	_signGrade;
	int const	_exeGrade;
};

/* Operator Overloads */
std::ostream	&operator << (std::ostream &output, Form const &rhs);

#endif
