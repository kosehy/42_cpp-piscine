#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name)
{
	_name = name;
	_hp = FragTrap::getHp();
	_maxhp = FragTrap::getMhp();
	_ep = NinjaTrap::getEp();
	_maxep = NinjaTrap::getMep();
	_lvl = 1;
	_mad = NinjaTrap::getMad();
	_rad = FragTrap::getRad();
	_adr = FragTrap::getAdr();
}

SuperTrap::SuperTrap(void) {}
SuperTrap::SuperTrap(const SuperTrap&cpy) : FragTrap(cpy), NinjaTrap(cpy) { *this = cpy; }
SuperTrap::~SuperTrap(void)
{
	std::cout << "DONE" << std::endl;
}

SuperTrap	&SuperTrap::operator = (const SuperTrap &old)
{
	_name = old.getName();
	_hp = old.getHp();
	_ep = old.getEp();
	_lvl = old.getLvl();
	std::cout << "I'm SuperTrap type!" << std::endl;
	return (*this);
}
