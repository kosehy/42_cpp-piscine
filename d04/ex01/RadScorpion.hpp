#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	RadScorpion(void);
	RadScorpion(RadScorpion const &ojb);
	virtual ~RadScorpion(void);

	RadScorpion	&operator = (RadScorpion const &obj);
};

#endif