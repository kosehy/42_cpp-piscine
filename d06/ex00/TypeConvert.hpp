#ifndef TYPECONVERT_HPP
#define TYPECONVERT_HPP

#include <iostream>
#include <string>
#include <exception>
#include <fstream>

class TypeConvert
{
public:
	/* Canonical Member Functions */
	TypeConvert(void);
	TypeConvert(std::string input);
	TypeConvert(TypeConvert &obj);
	virtual ~TypeConvert(void);

	/* Operator Overload */
	TypeConvert	&operator = (TypeConvert const &rhs);

	/* Type Operator Overload */
	operator char(void) const;
	operator int(void) const;
	operator float(void) const;
	operator double(void) const;

	/* Nested class for Exception */
	class ConvertErrorException : public std::exception
	{
	public:

		ConvertErrorException(void);
		ConvertErrorException(ConvertErrorException const &obj);
		virtual ~ConvertErrorException(void) throw();
		ConvertErrorException &operator=(ConvertErrorException const &r);
		virtual const char* what() const throw();
	};

private:
	std::string _input;
};

#endif