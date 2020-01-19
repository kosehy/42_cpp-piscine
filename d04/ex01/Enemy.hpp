#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{
public:
	Enemy(void);
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &obj);
	virtual ~Enemy();

	Enemy	&operator = (Enemy const &obj);

	virtual void takeDamage(int amount);

	std::string	getType(void) const;
	int		getHP(void) const;
	void	setHP(int amount);

private:
	std::string	_type;
	int	_hp;
};

#endif