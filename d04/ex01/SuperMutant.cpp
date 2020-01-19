#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(80, "SuperMutant")
{
	std::cout << "* Gaaah. Me want smash heads *" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &obj) : Enemy(obj)
{
	*this = obj;
	std::cout << "* Gaaah. Me want smash heads *" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "* Aaargh ..." << std::endl;
}

SuperMutant	&SuperMutant::operator = (SuperMutant const &obj)
{
	Enemy::operator = (obj);
	return (*this);
}

void	SuperMutant::takeDamage(int amount)
{
	int	i = 0;

	if (amount < 3)
		return ;
	else if (amount > this->getHP())
		i = this->getHP();
	else
		i = amount;
	this->setHP(this->getHP() - i + 3);
	if (this->getHP() < 0)
		this->setHP(0);
}
