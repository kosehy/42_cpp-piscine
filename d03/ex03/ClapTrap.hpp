#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>

class ClapTrap
{
public:
	// Canonical Member Functions
	ClapTrap(std::string name);
	ClapTrap(void);
	ClapTrap(const ClapTrap & cpy);
	~ClapTrap(void);

	// Operator Overload
	ClapTrap	&operator = (const ClapTrap &old);

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

protected:
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
