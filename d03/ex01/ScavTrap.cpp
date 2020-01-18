#include "ScavTrap.hpp"

#define ATK_NUM 5

// Canonical Member Function
ScavTrap::ScavTrap(std::string name) : _name(name), _hp(100), _maxhp(100), _ep(50), _maxep(50),\
										_lvl(1), _mad(20), _rad(15), _adr(3)
{
	std::cout << _name << "(Type: Scav): " << "Finish!" << std::endl;
	srand(time(NULL));
};
ScavTrap::ScavTrap(void) {};
ScavTrap::ScavTrap(const ScavTrap &cpy) { *this = cpy; }
ScavTrap::~ScavTrap(void)
{
	std::cout << _name << "(Type: Scav): Finish!" << std::endl;
};

// Operator Overload
ScavTrap	&ScavTrap::operator = (const ScavTrap &old)
{
	_name = old.getName();
	_hp = old.getHp();
	_ep = old.getEp();
	_lvl = old.getLvl();
	std::cout << _name << ": " << "operator overload1" << std::endl;
	return (*this);
}

// Get Functions
std::string		ScavTrap::getName(void) const { return (_name); }
int		ScavTrap::getHp(void) const { return (_hp); };
int		ScavTrap::getEp(void) const { return (_ep); };
int		ScavTrap::getLvl(void) const { return (_lvl); };

// Member Functions
void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << _name << "do range attacks "<< target << "causing " << _rad << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << _name << "do melee attacks "<< target << "causing " << _mad << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	amount -= _adr;
	_hp -= amount;
	if (_hp < 0)
	{
		_hp = 0;
		std::cout << "Who... am... I....." << std::endl;
	}
	else
		std::cout << "HMMMMM" << std::endl;
	std::cout << _name << ": "<< amount << " of damage is taken!" << std::endl;
	std::cout << "current hp: " << _hp << std::endl;
}

void	ScavTrap::hpRestore(unsigned int amount)
{
	_hp += amount;
	std::cout << amount << " hp is restored!" << std::endl;
	if (_hp > 100)
	{
		amount = _hp - 100;
		_hp = 100;
		std::cout << "my health: " << amount << " is over restored!" << std::endl;
	}
	std::cout << "current hp: " << _hp << std::endl;
}

void	ScavTrap::epRestore(unsigned int amount)
{
	_ep += amount;
	std::cout << amount << " ep is restored!" << std::endl;
	if (_ep > 100)
	{
		amount = _ep - 100;
		_ep = 100;
		std::cout << "my enery point: " << amount << " is over restored!" << std::endl;
	}
	std::cout << "current ep: " << _ep << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string		challenges[] = {"Don't move until you die!!!!",\
									"Make me laugh!",\
									"Don't Speak!",\
									"Jump as mush as possible!",\
									"Dance until tomorrow!!!"};
	std::cout << "challeng is activated: " << challenges[rand() % ATK_NUM] \
	<< " on " << target << std::endl;
}
