#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(PowerFist &obj) : AWeapon(obj)
{
	*this = obj;
}

PowerFist::~PowerFist(void) {}

PowerFist	&PowerFist::operator = (PowerFist const &rhs)
{
	AWeapon::operator = (rhs);
	return (*this);
}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! * " << std::endl;
}