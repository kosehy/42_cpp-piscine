#include "TypeConvert.hpp"

/* Canonical Member Functions */
TypeConvert::TypeConvert(std::string input) : _input(input) {}

TypeConvert::TypeConvert(TypeConvert &obj) { *this = obj; }

TypeConvert::~TypeConvert(void) {}

TypeConvert	&TypeConvert::operator = (TypeConvert const &rhs)
{
	this->_input = rhs._input;
	return (*this);
}

/* Operator Overload */
TypeConvert::operator char(void) const
{
	int	tmp = 0;

	try
	{
		tmp = std::stoi(this->_input);
	} catch (const std::exception &e) {
		throw (ConvertErrorException());
	}
	return (static_cast<char>(tmp));
}

TypeConvert::operator int(void) const
{
	int	tmp = 0;

	try
	{
		tmp = std::stoi(this->_input);
	} catch (const std::exception &e) {
		throw (ConvertErrorException());
	}
	return (tmp);
}

TypeConvert::operator float(void) const
{
	float	tmp = 0.0;

	try
	{
		tmp = std::stof(this->_input);
	} catch (const std::exception &e) {
		throw (ConvertErrorException());
	}
	return (tmp);
}

TypeConvert::operator double(void) const
{
	double	tmp = 0.0;

	try
	{
		tmp = std::stof(this->_input);
	} catch (const std::exception &e) {
		throw (ConvertErrorException());
	}
	return (tmp);
}

/* Nested class for Exception */

TypeConvert::ConvertErrorException::ConvertErrorException(void) {}

TypeConvert::ConvertErrorException::ConvertErrorException(ConvertErrorException const &obj)
{
	*this = obj;
}

TypeConvert::ConvertErrorException::~ConvertErrorException(void) throw() {}

TypeConvert::ConvertErrorException	&TypeConvert::ConvertErrorException::operator = (ConvertErrorException const &rhs)
{
	(void)rhs;
	return (*this);
}

const char	*TypeConvert::ConvertErrorException::what() const throw()
{
	return ("impossible");
}
