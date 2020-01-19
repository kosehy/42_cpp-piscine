#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <sstream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
public:
	Character(void);
	Character(std::string const &name);
	Character(Character &obj);
	virtual ~Character(void);

	Character	&operator = (Character const &obj);

	void	recoverAP(void);
	void	equip(AWeapon*);
	void	attack(Enemy*);
	std::string	getName(void) const;
	int			getAP(void) const;
	AWeapon		*getWeapon(void) const;

private:
	std::string		_name;
	AWeapon			*_weapon;
	int		_ap;
};

std::ostream	&operator << (std::ostream &output, Character const &rhs);

#endif
