#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _weapon(NULL), _ap(40) {}

Character::Character(Character &obj)
{
	*this = obj;
}

Character::~Character(void) {}

Character	&Character::operator = (Character const &obj)
{
	this->_name = obj.getName();
	this->_weapon = obj._weapon;
	this->_ap = obj._ap;
	return (*this);
}

std::string		Character::getName(void) const {
	return (this->_name);
}

int		Character::getAP(void) const
{
	return (this->_ap);
}

AWeapon		*Character::getWeapon(void) const
{
	return (this->_weapon);
}

void		Character::recoverAP(void) {
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void		Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void		Character::attack(Enemy *enemy)
{
	if (!enemy->getHP())
		return ;
	if (this->_weapon)
	{
		if (this->_ap != 0 && (this->_ap >= this->_weapon->getAPCost()))
		{
			std::cout << this->_name << " attacks " << enemy->getType() << " with a " << \
			this->_weapon->getName() << std::endl;
			this->_weapon->attack();
			enemy->takeDamage(this->_weapon->getDamage());
			this->_ap = this->_ap - this->_weapon->getAPCost();
			if (enemy->getHP() <= 0)
				delete enemy;
		}
	}
	return ;
}

std::ostream	&operator << (std::ostream &output, Character const &rhs) {
	if (rhs.getWeapon())
		output << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName()
			   << std::endl;
	else
		output << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
	return (output);
}
