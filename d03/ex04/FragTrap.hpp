#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	// Canonical Member Functions
	FragTrap(std::string name);
	FragTrap(void);
	FragTrap(const FragTrap & cpy);
	~FragTrap(void);

	// Operator Overload
	FragTrap	&operator = (const FragTrap &old);

	// Member Functions
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	hpRestore(unsigned int amount);
	void	epRestore(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const &target);

private:
	int		_hp;
	int		_maxhp;
	int		_rad;
	int		_adr;
};

#endif
