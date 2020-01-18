#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>

class ScavTrap
{
public:
	// Canonical Member Funcations
	ScavTrap(std::string name);
	ScavTrap(void);
	ScavTrap(const ScavTrap & cpy);
	~ScavTrap(void);

	// Operator Overload
	ScavTrap	&operator = (const ScavTrap &old);

	// Get Functions
	std::string 	getName(void) const;
	int		getHp(void) const;
	int		getEp(void) const;
	int		getLvl(void) const;

	// Member Functions
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	hpRestore(unsigned int amount);
	void	epRestore(unsigned int amount);
	void	challengeNewcomer(std::string const &target);

private:
	int		_hp;	// Hit points(100)
	int		_maxhp;	// Max hit points(100)
	int		_ep;	// Energy points(50)
	int		_maxep;	// Max energy points(50)
	int		_lvl;	// level
	int		_mad;	// Melee attack damage(20)
	int		_rad;	// Ranged attack damage(15)
	int		_adr;	// Armor damage reduction(3)
	std::string		_name;
};

#endif
