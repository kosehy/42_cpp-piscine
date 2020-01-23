#include "A.hpp"

A::A(void) {}

A::A(A &obj) { *this = obj; }

A::~A(void) {}

A &A::operator = (A const &rhs)
{
	(void)rhs;
	return (*this);
}
