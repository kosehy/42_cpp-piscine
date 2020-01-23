#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <ctime>

template <typename T>

class Array
{
public:
	/* Canonical Functions */
	Array<T>(void) : _array(NULL), _n(0) {}

	Array<T>(unsigned int n)
	{
		_n = n;
		_array = new T[n];
	}

	Array<T>(Array const &rhs) { *this = rhs; }

	~Array<T>(void) {}

	/* Operator Overloading */

	Array<T> &operator = (Array const &rhs)
	{
		int i = 0;

		this->_n = rhs._n;
		delete this->_array;
		this->_array = new T[this->_n];

		while (i < this->_n)
			this->_array[i] = rhs._array[i++];
	}

	T	&operator[](unsigned int n)
	{
		if (n >= this->_n)
			throw std::exception();
		return (this->_array[n]);
	}

	/* Member Function */
	unsigned int size() const { return (this->_n); }

private:
	T	*_array;
	unsigned int	_n;
};

#endif