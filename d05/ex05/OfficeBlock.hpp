/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:04:59 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 21:05:00 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include "Intern.hpp"

class OfficeBlock
{
public:
	/* Canonical Member Functions */
	OfficeBlock(void);
	OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executor);
	virtual	~OfficeBlock(void);

	/* Get Functions */
	int	getIntern(void);
	int	getSigner(void);
	int	getExecuter(void);
	int getEvery(void);

	Bureaucrat	ptSigner(void);
	Bureaucrat	ptExecuter(void);

	/* Set Functions */
	void	setIntern(Intern &obj);
	void	setSigner(Bureaucrat &obj);
	void	setExecuter(Bureaucrat &obj);

	/* Member Functions */
	void	doBureaucracy(std::string form, std::string target);

	/* nested classes */
	class NoInternException : public std::exception
	{
	public:
		NoInternException(void);
		NoInternException(NoInternException const &obj);
		virtual ~NoInternException(void) throw();

		NoInternException	&operator = (NoInternException const &rhs);
		virtual const char	*what() const throw();
	};
	class NoSignerException : public std::exception
	{
	public:
		NoSignerException(void);
		NoSignerException(NoSignerException const &obj);
		virtual ~NoSignerException(void) throw();

		NoSignerException	&operator = (NoSignerException const &rhs);
		virtual const char	*what() const throw();
	};
	class NoExecuterException : public std::exception
	{
	public:
		NoExecuterException(void);
		NoExecuterException(NoExecuterException const &obj);
		virtual ~NoExecuterException(void) throw();

		NoExecuterException	&operator = (NoExecuterException const &rhs);
		virtual const char	*what() const throw();
	};
	class SignerLowGradeException : public std::exception
	{
	public:
		SignerLowGradeException(void);
		SignerLowGradeException(SignerLowGradeException const &obj);
		virtual ~SignerLowGradeException(void) throw();

		SignerLowGradeException	&operator = (SignerLowGradeException const &rhs);
		virtual const char	*what() const throw();
	};
	class ExecuterLowGradeException : public std::exception
	{
	public:
		ExecuterLowGradeException(void);
		ExecuterLowGradeException(ExecuterLowGradeException const &obj);
		virtual ~ExecuterLowGradeException(void) throw();

		ExecuterLowGradeException	&operator = (ExecuterLowGradeException const &rhs);
		virtual const char	*what() const throw();
	};

private:
	OfficeBlock(OfficeBlock &obj);
	OfficeBlock &operator = (OfficeBlock const &rhs);

	Intern	*_intern;
	Bureaucrat	*_signer;
	Bureaucrat	*_executer;
};

#endif
