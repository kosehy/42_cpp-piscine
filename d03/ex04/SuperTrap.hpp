#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	// Canonical Member Functions
	SuperTrap(std::string name);
	SuperTrap(void);
	SuperTrap(const SuperTrap & cpy);
	~SuperTrap(void);

	// Operator Overload
	SuperTrap	&operator = (const SuperTrap &old);

	// Member Functions
	using	NinjaTrap::meleeAttack;
	using	FragTrap::rangedAttack;
	using	NinjaTrap::ninjaShoebox;
	using	FragTrap::vaulthunter_dot_exe;
private:
	int		_hp;
	int		_maxhp;
	int		_ep;
	int		_maxep;
	int		_mad;
	int		_rad;
	int		_adr;
};

#endif
