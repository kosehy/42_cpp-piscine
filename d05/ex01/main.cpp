/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:53:29 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 14:53:29 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int		main()
{
	int x = 0;

//	x = 151;
//	try
//	{
//		Bureaucrat demo("test1", x);
//	}
//	catch (Bureaucrat::GradeTooHighException &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//	catch (Bureaucrat::GradeTooLowException &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//	catch(const std::exception &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//
//	try
//	{
//		x= -1;
//		Bureaucrat demo1("test2", x);
//		std::cout << demo1.getName() << " <= name " << demo1.getGrade() << " <= grade" << std::endl;
//
//	}
//	catch (Bureaucrat::GradeTooHighException &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//	catch (Bureaucrat::GradeTooLowException &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//	catch(const std::exception &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//	x = 145;
//	Bureaucrat demo1("test3", x);
//	std::cout << demo1.getName() << " <= name " << demo1.getGrade() << " <= grade" << std::endl;
	Bureaucrat	test("sko", 1);

	Form	form("Allow Docker for Macs!", 100, 100);
	form.beSigned(test);
	form.beSigned(test);
	x = 151;
	try
	{
		Form	form2("Error test1", x, x);
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
	x = -1;
	try
	{
		Form	form3("Error test1", x, x);
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
	try
	{
		Bureaucrat test3("sako", 140);
		Form	form4("Allow Docker for Macs!", 100, 100);
		form.beSigned(test3);
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
