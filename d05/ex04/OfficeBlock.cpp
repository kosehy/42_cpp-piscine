/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:05:26 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 21:05:27 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

/* Canonical Member Functions */
OfficeBlock::OfficeBlock(void) : _intern(NULL), _signer(NULL), _executer(NULL) {}

OfficeBlock::OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executer) : _intern(&intern), _signer(&signer), _executer(&executer) {}

OfficeBlock::~OfficeBlock(void) {}

/* Set Functions */
void	OfficeBlock::setIntern(Intern &obj) { this->_intern = &obj; }
void	OfficeBlock::setSigner(Bureaucrat &obj) { this->_signer = &obj; }
void	OfficeBlock::setExecutor(Bureaucrat &obj) { this->_executer = &obj; }

/* Member Functions */
void	OfficeBlock::doBureaucracy(std::string form, std::string target)
{
	Form	*do_create = NULL;

	if (!this->_intern)
		throw OfficeBlock::NoInternException();
	if (!this->_signer)
		throw OfficeBlock::NoSignerException();
	if (!this->_signer)
		throw OfficeBlock::NoExecuterException();
	do_create = this->_intern->makeForm(form, target);

	if (this->_signer->getGrade() > do_create->getSignGrade())
	{
		delete do_create;
		throw OfficeBlock::SignerLowGradeException();
	}
	do_create->beSigned(*this->_signer);

	if (this->_executer->getGrade() > do_create->getExeGrade())
	{
		delete do_create;
		throw OfficeBlock::ExecuterLowGradeException();
	}
	this->_executer->executeForm(*do_create);

	delete do_create;
}

/* nested classes */
OfficeBlock::NoInternException::NoInternException(void) {}
OfficeBlock::NoInternException::NoInternException(NoInternException const &obj)
{
	*this = obj;
}

OfficeBlock::NoInternException::~NoInternException(void) throw() {}

OfficeBlock::NoInternException	&OfficeBlock::NoInternException::operator = (NoInternException const &rhs)
{
	(void)rhs;
	return (*this);
}

const char *OfficeBlock::NoInternException::what() const throw()
{
	return ("OfficeBlock Error: No Intern existing");
}

OfficeBlock::NoSignerException::NoSignerException(void) {}
OfficeBlock::NoSignerException::NoSignerException(NoSignerException const &obj)
{
	*this = obj;
}

OfficeBlock::NoSignerException::~NoSignerException(void) throw() {}

OfficeBlock::NoSignerException	&OfficeBlock::NoSignerException::operator = (NoSignerException const &rhs)
{
	(void)rhs;
	return (*this);
}

const char *OfficeBlock::NoSignerException::what() const throw()
{
	return ("OfficeBlock Error: No Signer existing");
}

OfficeBlock::NoExecuterException::NoExecuterException(void) {}
OfficeBlock::NoExecuterException::NoExecuterException(NoExecuterException const &obj)
{
	*this = obj;
}

OfficeBlock::NoExecuterException::~NoExecuterException(void) throw() {}

OfficeBlock::NoExecuterException	&OfficeBlock::NoExecuterException::operator = (NoExecuterException const &rhs)
{
	(void)rhs;
	return (*this);
}

const char *OfficeBlock::NoExecuterException::what() const throw()
{
	return ("OfficeBlock Error: No Executer existing");
}

OfficeBlock::SignerLowGradeException::SignerLowGradeException(void) {}
OfficeBlock::SignerLowGradeException::SignerLowGradeException(SignerLowGradeException const &obj)
{
	*this = obj;
}

OfficeBlock::SignerLowGradeException::~SignerLowGradeException(void) throw() {}

OfficeBlock::SignerLowGradeException	&OfficeBlock::SignerLowGradeException::operator = (SignerLowGradeException const &rhs)
{
	(void)rhs;
	return (*this);
}

const char *OfficeBlock::SignerLowGradeException::what() const throw()
{
	return ("OfficeBlock Error: Signer's Grade is too low");
}

OfficeBlock::ExecuterLowGradeException::ExecuterLowGradeException(void) {}
OfficeBlock::ExecuterLowGradeException::ExecuterLowGradeException(ExecuterLowGradeException const &obj)
{
	*this = obj;
}

OfficeBlock::ExecuterLowGradeException::~ExecuterLowGradeException(void) throw() {}

OfficeBlock::ExecuterLowGradeException	&OfficeBlock::ExecuterLowGradeException::operator = (ExecuterLowGradeException const &rhs)
{
	(void)rhs;
	return (*this);
}

const char *OfficeBlock::ExecuterLowGradeException::what() const throw()
{
	return ("OfficeBlock Error: Executer's Grade is too low");
}
