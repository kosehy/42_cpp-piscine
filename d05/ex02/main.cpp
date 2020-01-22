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

int		main()
{
	int x = 0;
	Bureaucrat	test1("sko", 1);
	Bureaucrat	test2("yan", 150);

	ShrubberyCreationForm sh1("Shut");
	sh1.execute(test1);
	sh1.execute(test1);
	sh1.beSigned(test1);
	test1.executeForm(sh1);

	try
	{
		test2.executeForm(sh1);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	RobotomyRequestForm robo1("robo1");
	robo1.execute(test1);
	robo1.execute(test1);
	robo1.beSigned(test1);
	test1.executeForm(robo1);
	x = -1;
	try
	{
		test2.executeForm(robo1);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	PresidentialPardonForm pred("#1");
	pred.execute(test1);
	pred.execute(test1);
	pred.beSigned(test1);
	test1.executeForm(pred);
	x = -1;
	try
	{
		test2.executeForm(pred);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
