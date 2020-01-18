#include "FragTrap.hpp"

#define ATK_NUM 5

// Canonical Member Function
FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hp = 100;
	_maxhp = 100;
	_ep = 100;
	_maxep = 100;
	_lvl = 1;
	_mad = 30;
	_rad = 20;
	_adr = 5;
	srand(time(NULL));
};
FragTrap::FragTrap(void) {};
FragTrap::FragTrap(const FragTrap &cpy) { *this = cpy; }
FragTrap::~FragTrap(void)
{
	std::cout << _name << "(Type: Frag): Finish!" << std::endl;
};

// Operator Overload
FragTrap	&FragTrap::operator = (const FragTrap &old)
{
	_name = old.getName();
	_hp = old.getHp();
	_ep = old.getEp();
	_lvl = old.getLvl();
	std::cout << _name << ": " << "operator overload" << std::endl;
	return (*this);
}

// Get Functions
std::string		FragTrap::getName(void) const { return (_name); }
int		FragTrap::getHp(void) const { return (_hp); };
int		FragTrap::getEp(void) const { return (_ep); };
int		FragTrap::getLvl(void) const { return (_lvl); };

// Member Functions
void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << _name << "attacks "<< target << " at range, causing " << _rad << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << _name << "attacks "<< target << " at melee, causing " << _mad << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	amount -= _adr;
	_hp -= amount;
	if (_hp < 0)
	{
		_hp = 0;
		std::cout << "NOOOOOOOOOOOO...." << std::endl;
	}
	else
		std::cout << "HMMMMM" << std::endl;
	std::cout << _name << "takes "<< amount << " of damage!" << std::endl;
	std::cout << "current hp: " << _hp << std::endl;
}

void	FragTrap::hpRestore(unsigned int amount)
{
	_hp += amount;
	std::cout << amount << " hp is restored!" << std::endl;
	if (_hp > _maxhp)
	{
		amount = _hp - 100;
		_hp = 100;
		std::cout << amount << " hp is over restored!" << std::endl;
	}
	std::cout << "current hp: " << _hp << std::endl;
}

void	FragTrap::epRestore(unsigned int amount)
{
	_ep += amount;
	std::cout << amount << " ep is restored!" << std::endl;
	if (_ep > 100)
	{
		_ep = 100;
		amount = _ep - 100;
		std::cout << "EP: " << amount << " is over restored!" << std::endl;
	}
	std::cout << "current ep: " << _ep << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string		attacks[] = {"Snakes!!!",\
								 "Piercing Arrow!",\
								 "Wind Cutter!",\
								 "Fire Ball!",\
								 "Electric Field!!"};
	if (_ep < 25)
		std::cout << "Not enough of energy!!" << std::endl;
	else
	{
		_ep -= 25;
		std::cout << "vaulthunter.exe is activated: " << attacks[rand() % ATK_NUM] \
		<< " on " << target << std::endl;
	}
}
