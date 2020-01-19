#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <sstream>
#include <fstream>

class AWeapon
{
public:
	AWeapon(void);
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon &obj);
	virtual ~AWeapon(void);

	AWeapon	&operator = (AWeapon const &rhs);

	virtual void	attack() const = 0;

	std::string		getName(void) const;
	int		getAPCost(void) const;
	int		getDamage(void) const;

private:
	std::string		_name;
	int		_ap;
	int		_dmg;
};

#endif