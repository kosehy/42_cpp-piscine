/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:53:49 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 16:53:50 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int		main()
{
	int x = 0;
	Bureaucrat	test1("sko", 1);
	Bureaucrat	test2("yan", 150);

	Intern	intern;

	Form	*shtest;
	shtest = intern.makeForm("shrubbery creation", "chad");

	shtest->beSigned(test1);
	test2.executeForm(*shtest);

	Form	*rotest;
	rotest = intern.makeForm("robotomy request", "kindrea");

	rotest->beSigned(test1);
	test2.executeForm(*rotest);

	Form	*prtest;
	prtest = intern.makeForm("presidential pardon", "ogama");

	prtest->beSigned(test1);
	test2.executeForm(*prtest);

	Form	*errtest;
	errtest = intern.makeForm("keserasera", "jack");

	delete shtest;
	delete rotest;
	delete prtest;
	delete errtest;
}
