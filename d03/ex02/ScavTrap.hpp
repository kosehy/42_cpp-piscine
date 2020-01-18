#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	// Canonical Member Functions
	ScavTrap(std::string name);
	ScavTrap(void);
	ScavTrap(const ScavTrap & cpy);
	~ScavTrap(void);

	// Operator Overload
	ScavTrap	&operator = (const ScavTrap &old);

	// Member Functions
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	hpRestore(unsigned int amount);
	void	epRestore(unsigned int amount);
	void	challengeNewcomer(std::string const &target);
};

#endif
