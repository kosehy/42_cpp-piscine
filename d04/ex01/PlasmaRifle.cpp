#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle &obj) : AWeapon(obj)
{
	*this = obj;
}

PlasmaRifle::~PlasmaRifle(void) {}

PlasmaRifle	&PlasmaRifle::operator = (PlasmaRifle const &rhs)
{
	AWeapon::operator = (rhs);
	return (*this);
}

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu * " << std::endl;
}