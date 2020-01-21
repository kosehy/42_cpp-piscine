#include "Bureaucrat.hpp"

int		main()
{
	int x = 0;

	x = 151;
	try
	{
		Bureaucrat demo("test1", x);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		x= -1;
		Bureaucrat demo1("test2", x);
		std::cout << demo1.getName() << " <= name " << demo1.getGrade() << " <= grade" << std::endl;

	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	x = 145;
	Bureaucrat demo1("test3", x);
	std::cout << demo1.getName() << " <= name " << demo1.getGrade() << " <= grade" << std::endl;

}