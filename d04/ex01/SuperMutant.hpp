#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant(void);
	SuperMutant(SuperMutant const &ojb);
	virtual ~SuperMutant(void);

	SuperMutant	&operator = (SuperMutant const &obj);

	virtual void takeDamage(int amount);
};

#endif