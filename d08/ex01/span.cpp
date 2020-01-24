/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 17:01:44 by sko               #+#    #+#             */
/*   Updated: 2020/01/23 17:01:45 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

/* Canonical Functions */
Span::Span(unsigned int nbr) : _len(nbr) { _data.reserve(nbr); }

Span::Span(Span &obj) { *this = obj; }

Span::~Span(void) {}

/* Operator Overload */
Span	&Span::operator = (Span const &rhs)
{
	this->_data = rhs._data;
	return (*this);
}

/* Member Functions */
void	Span::addNumber(int num)
{
	if (_data.size() < _len)
		_data.push_back(num);
	else
		throw Span::NoSpaceException();
}

int		Span::shortestSpan(void)
{
	if (_len <= 1)
		throw Span::NoSpaceException();
	std::vector<int>	data = _data;
	std::sort(data.begin(),data.end());
	std::vector<int>::iterator cur = data.begin();
	std::vector<int>::iterator begin = data.begin();
	std::vector<int>::iterator end = data.end();
	++cur;
	--end;
	unsigned int i = 0;

	while (i < (_len - 1)) {
		if (abs(*begin - *cur) < abs(*begin - *end))
			end = cur;
		else if (abs(*end - *cur) < abs(*begin - *end))
			begin = cur;
		++i;
		++cur;
	}
	return (abs(*begin - *end));
}

int		Span::longestSpan(void)
{
	if (_len <= 1)
		throw Span::NoSpaceException();
	std::vector<int>	max = _data;
	int n1 = *std::max_element(max.begin(), max.end());
	int n2 = *std::min_element(max.begin(), max.end());
	return (n1 - n2);
}

/* Nested Classes for exception */

Span::NoSpaceException::NoSpaceException(void) {}
Span::NoSpaceException::NoSpaceException(NoSpaceException const &obj)
{
	*this = obj;
}
Span::NoSpaceException::~NoSpaceException(void) throw() {}

Span::NoSpaceException	&Span::NoSpaceException::operator = (NoSpaceException const &rhs)
{
	(void)rhs;
	return (*this);
}

const char	*Span::NoSpaceException::what() const throw()
{
	return ("Space is already full!");
}

Span::NotEnoughNumberException::NotEnoughNumberException(void) {}
Span::NotEnoughNumberException::NotEnoughNumberException(NotEnoughNumberException const &obj)
{
	*this = obj;
}
Span::NotEnoughNumberException::~NotEnoughNumberException(void) throw() {}

Span::NotEnoughNumberException	&Span::NotEnoughNumberException::operator = (NotEnoughNumberException const &rhs)
{
	(void)rhs;
	return (*this);
}

const char	*Span::NotEnoughNumberException::what() const throw()
{
	return ("Not enough numbers stored!");
}
