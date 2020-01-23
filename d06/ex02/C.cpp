#include "C.hpp"

C::C(void) {}

C::C(C &obj) { *this = obj; }

C::~C(void) {}

C &C::operator = (C const &rhs)
{
	(void)rhs;
	return (*this);
}