#include "B.hpp"

B::B(void) {}

B::B(B &obj) { *this = obj; }

B::~B(void) {}

B &B::operator = (B const &rhs)
{
	(void)rhs;
	return (*this);
}