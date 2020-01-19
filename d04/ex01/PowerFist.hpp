#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist(void);
	PowerFist(PowerFist &obj);
	virtual ~PowerFist(void);

	PowerFist	&operator = (PowerFist const &rhs);
	void	attack(void) const;
};

#endif