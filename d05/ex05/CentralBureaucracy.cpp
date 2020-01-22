/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 22:22:10 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 22:22:12 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy(void)
{
	srand(time(0));
	Intern	iDontKnow;

	int 	count = 0;

	while (count < 20)
	{
		_officeBlock[count].setIntern(iDontKnow);
		++count;
	}
}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy &obj)
{
	*this = obj;
}

CentralBureaucracy::~CentralBureaucracy(void) {}

CentralBureaucracy	&CentralBureaucracy::operator = (CentralBureaucracy &rhs)
{
	int count = 0;
	Bureaucrat	*tmp = new Bureaucrat();

	while (rhs._target[count] != "")
	{
		this->_target[count] = rhs._target[count];
		++count;
	}

	count = 0;
	while (rhs._officeBlock[count].getSigner() == 1)
	{
		*tmp = rhs._officeBlock[count].ptSigner();
		_officeBlock[count].setSigner(*tmp);
		++count;
	}

	count = 0;
	while (rhs._officeBlock[count].getExecuter() == 1)
	{
		*tmp = rhs._officeBlock[count].ptExecuter();
		_officeBlock[count].setExecuter(*tmp);
		++count;
	}

	delete tmp;
	return (*this);
}

void	CentralBureaucracy::doBureaucracy(void)
{
	int i = 0;
	int j = 0;

	std::string	rnd_input[] =
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	if (_target[0] == "")
		std::cout << "Nothing inside the queue" << std::endl;
	while (_target[i] != "")
	{
		j = rand() % 20;
		if (_officeBlock[j].getEvery() == 1)
		{
			_officeBlock[j].doBureaucracy(rnd_input[j % 3], _target[j]);
			++i;
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "Complete!!" << std::endl;
}

void	CentralBureaucracy::feedSigner(Bureaucrat &obj)
{
	int 	count = 0;

	while (count < 20)
	{
		if (_officeBlock[count].getSigner() == 0)
			_officeBlock[count].setSigner(obj);
		++count;
	}
	std::cout << "OfficeBlock is full! No more signer" << std::endl;
}

void	CentralBureaucracy::feedExecuter(Bureaucrat &obj)
{
	int 	count = 0;

	while (count < 20)
	{
		if (_officeBlock[count].getExecuter() == 0)
			_officeBlock[count].setExecuter(obj);
		++count;
	}
	std::cout << "OfficeBlock is fulled! No more executer" << std::endl;
}

void	CentralBureaucracy::queueUp(std::string obj)
{
	int 	count = 0;

	while (count < 50)
	{
		if (_target[count] == "")
			_target[count] = obj;
		++count;
	}
	std::cout << "Target limitation is 50 in queue!!" << std::endl;
}
