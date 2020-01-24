/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 17:01:50 by sko               #+#    #+#             */
/*   Updated: 2020/01/23 17:01:51 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <ctime>
#include <vector>
#include <map>
#include <list>
#include <algorithm>
#include <exception>

class Span
{
public:
	/* Canonical Functions */
	Span(void);
	Span(unsigned int nbr);
	Span(Span &obj);
	virtual ~Span(void);

	/* Operator Overload */
	Span	&operator = (Span const &rhs);

	/* Member Functions */
	void	addNumber(int num);
	int		shortestSpan(void);
	int		longestSpan(void);

	/* Nested Classes for exception */
	class NoSpaceException : public std::exception
	{
	public:
		NoSpaceException(void);
		NoSpaceException(NoSpaceException const &obj);
		virtual ~NoSpaceException(void) throw();

		NoSpaceException &operator = (NoSpaceException const &ojb);
		virtual const char *what() const throw();
	};

	class NotEnoughNumberException : public std::exception
	{
	public:
		NotEnoughNumberException(void);
		NotEnoughNumberException(NotEnoughNumberException const &obj);
		virtual ~NotEnoughNumberException(void) throw();

		NotEnoughNumberException &operator = (NotEnoughNumberException const &ojb);
		virtual const char *what() const throw();
	};

private:
	std::vector<int>	_data;
	unsigned int	_len;
};

#endif
