#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
{
	_hp = hp;
	_type = type;
}

Enemy::Enemy(Enemy const &obj)
{
	*this = obj;
}

Enemy::~Enemy(void) {}

Enemy	&Enemy::operator = (Enemy const &obj)
{
	this->_hp = obj._hp;
	this->_type = obj._type;
	return (*this);
}

void	Enemy::takeDamage(int amount)
{
	int	i = 0;

	if (amount < 0)
		return ;
	else if (amount > this->_hp)
		i = this->_hp;
	else
		i = amount;
	this->_hp -= i;
	if (this->_hp < 0)
		this->_hp = 0;
}

std::string		Enemy::getType(void) const { return (this->_type); }

int	Enemy::getHP(void) const { return (this->_hp); }

void	Enemy::setHP(int amount) { this->_hp = amount; }


