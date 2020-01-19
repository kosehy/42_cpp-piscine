#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle &obj);
	virtual ~PlasmaRifle(void);

	PlasmaRifle	&operator = (PlasmaRifle const &rhs);
	void	attack(void) const;
};

#endif