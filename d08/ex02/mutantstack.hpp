/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 22:32:32 by sko               #+#    #+#             */
/*   Updated: 2020/01/23 22:32:33 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <ctime>
#include <vector>
#include <map>
#include <list>
#include <algorithm>
#include <exception>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	/* Canonical Functions */
	MutantStack<T>(void) {}
	MutantStack(MutantStack const &rhs) { (void)rhs; }
	~MutantStack(void) {}

	/* Operator Overload */
	MutantStack &operator = (MutantStack const &rhs) { (void)rhs; }

	/* Member Functions */
	T top (void) { return (_stack.front()); }
	T size(void) { return (_stack.size()); }

	typedef std::list<int>::iterator iterator;

	iterator begin() { return (_stack.begin()); }
	iterator end() { return (_stack.end()); }
	void push(T value) { _stack.push_front(value); }
	void pop(void) { _stack.pop_front(); }

private:
	std::list<T> _stack;
};

#endif
