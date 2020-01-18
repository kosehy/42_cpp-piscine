#include "ClapTrap.hpp"

#define ATK_NUM 5

// Canonical Member Function
ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << _name << "! Here I am" << std::endl;
	srand(time(NULL));
};
ClapTrap::ClapTrap(void) {};
ClapTrap::ClapTrap(const ClapTrap &cpy) { *this = cpy; }
ClapTrap::~ClapTrap(void)
{
	std::cout << _name << "Mission Complete" << std::endl;
};

// Operator Overload
ClapTrap	&ClapTrap::operator = (const ClapTrap &old)
{
	_name = old.getName();
	_hp = old.getHp();
	_ep = old.getEp();
	_lvl = old.getLvl();
	std::cout << _name << ": " << "operator overload2" << std::endl;
	return (*this);
}

// Get Functions
std::string		ClapTrap::getName(void) const { return (_name); }
int		ClapTrap::getHp(void) const { return (_hp); };
int		ClapTrap::getEp(void) const { return (_ep); };
int		ClapTrap::getLvl(void) const { return (_lvl); };

// Member Functions
void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << _name << "attacks "<< target << " " << _rad << " ranged damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << _name << "attacks "<< target << " " << _mad << " melee damage!" << std::endl;}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount -= _adr;
	_hp -= amount;
	if (_hp < 0)
	{
		_hp = 0;
		std::cout << "de..a..c...t..i.....v...a..t..e...." << std::endl;
	}
	else
		std::cout << "HMMMMM" << std::endl;
	std::cout << _name << "takes "<< amount << " of damage! What a shame" << std::endl;
	std::cout << "current hp: " << _hp << std::endl;
}

void	ClapTrap::hpRestore(unsigned int amount)
{
	_hp += amount;
	std::cout << amount << " hp is restored! Thanks" << std::endl;
	if (_hp > 100)
	{
		amount = _hp - 100;
		_hp = 100;
		std::cout << "HP: " << amount << " is over restored! It's enough!" << std::endl;
	}
	std::cout << "current hp: " << _hp << std::endl;
}

void	ClapTrap::epRestore(unsigned int amount) {
	_ep += amount;
	std::cout << amount << " ep is restored! I'm powerful" << std::endl;
	if (_ep > 100)
	{
		amount = _ep - 100;
		_ep = 100;
		std::cout << "EP: " << amount << " is over restored! No..." << std::endl;
	}
	std::cout << "current ep: " << _ep << std::endl;
}
