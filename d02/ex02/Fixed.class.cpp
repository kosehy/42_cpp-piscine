#include "Fixed.class.hpp"

int Fixed::_bit = 8;

Fixed::Fixed(void) : _fp(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int fp) : _fp(fp << _bit)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fp) : _fp(fp * ( 1 << _bit))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &old)
{
	std::cout << "Copy constructor called" << std::endl;
	_fp = old.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator = (Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fp = rhs.getRawBits();
	return (*this);
}

bool 	Fixed::operator >  (const Fixed &rhs) const
{
	return (_fp > rhs.getRawBits());
}

bool 	Fixed::operator <  (const Fixed &rhs) const
{
	return (_fp < rhs.getRawBits());
}

bool 	Fixed::operator >= (const Fixed &rhs) const
{
	return (_fp >= rhs.getRawBits());
}

bool 	Fixed::operator <= (const Fixed &rhs) const
{
	return (_fp <= rhs.getRawBits());
}

bool 	Fixed::operator == (const Fixed &rhs) const
{
	return (_fp == rhs.getRawBits());
}

bool 	Fixed::operator != (const Fixed &rhs) const
{
	return (_fp != rhs.getRawBits());
}

Fixed	Fixed::operator + (Fixed const &rhs) const
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator - (Fixed const &rhs) const
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator * (Fixed const &rhs) const
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator / (Fixed const &rhs) const
{
	return (this->toFloat() / rhs.toFloat());
}

Fixed&	Fixed::operator ++(void)
{
	++_fp;
	return (*this);
}

Fixed	Fixed::operator ++(int)
{
	Fixed	tmp = *this;
	this->_fp++;
	return (tmp);
}

Fixed&	Fixed::operator --(void)
{
	--_fp;
	return (*this);
}

Fixed	Fixed::operator --(int)
{
	Fixed	tmp = *this;
	this->_fp--;
	return (tmp);
}
int 	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fp);
}
void 	Fixed::setRawBits(int const raw)	{_fp = raw;}

float 	Fixed::toFloat(void) const
{
	return ((float)_fp / ( 1 << _bit));
}

int 	Fixed::toInt(void) const
{
	return (_fp >> _bit);
}

std::ostream &operator << (std::ostream &o, const Fixed &rhs)
{
	o << rhs.toFloat();
	return (o);
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}
const Fixed&	Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}
