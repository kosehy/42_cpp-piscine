#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>

class FragTrap
{
public:
	// Canonical Member Funcations
	FragTrap(std::string name);
	FragTrap(void);
	FragTrap(const FragTrap & cpy);
	~FragTrap(void);

	// Operator Overload
	FragTrap	&operator = (const FragTrap &old);

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
	void	vaulthunter_dot_exe(std::string const &target);

private:
	int		_hp;	// Hit points(100)
	int		_maxhp;	// Max hit points(100)
	int		_ep;	// Energy points(100)
	int		_maxep;	// Max energy points(100)
	int		_lvl;	// level
	int		_mad;	// Melee attack damage(30)
	int		_rad;	// Ranged attack damage(20)
	int		_adr;	// Armor damage reduction(5)
	std::string		_name;
};

#endif
