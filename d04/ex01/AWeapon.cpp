#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _ap(apcost), _dmg(damage) {}

AWeapon::AWeapon(AWeapon &obj)
{
	*this = obj;
}

AWeapon::~AWeapon(void) {}

AWeapon	&AWeapon::operator = (AWeapon const &rhs)
{
	this->_name = rhs.getName();
	this->_ap = rhs.getAPCost();
	this->_dmg = rhs.getDamage();
	return (*this);
}

std::string		AWeapon::getName() const { return (this->_name); }
int		AWeapon::getAPCost() const { return (this->_ap); }
int		AWeapon::getDamage() const { return (this->_dmg); }
