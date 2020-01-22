/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:52:56 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 14:52:58 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	Bureaucrat(void);
	Bureaucrat(std::string const name, int grace);
	Bureaucrat(Bureaucrat &obj);
	virtual ~Bureaucrat(void);

	Bureaucrat	&operator = (Bureaucrat const &rhs);

	void operator += (int const i);
	void operator -= (int const i);

	std::string		getName(void) const;
	int 	getGrade(void) const;
	void	executeForm(Form const &form);

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
	std::string _name;
	int		_grade;
};

std::ostream	&operator << (std::ostream &output, Bureaucrat const &rhs);

#endif
