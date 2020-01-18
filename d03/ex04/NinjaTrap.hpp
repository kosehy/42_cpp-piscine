#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	// Canonical Member Functions
	NinjaTrap(std::string name);
	NinjaTrap(void);
	NinjaTrap(const NinjaTrap & cpy);
	~NinjaTrap(void);

	// Operator Overload
	NinjaTrap	&operator = (const NinjaTrap &old);

	// Member Functions
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	hpRestore(unsigned int amount);
	void	epRestore(unsigned int amount);
	void	ninjaShoebox(ClapTrap const &target);
	void	ninjaShoebox(FragTrap const &target);
	void	ninjaShoebox(ScavTrap const &target);
	void	ninjaShoebox(NinjaTrap const &target);
};

#endif
