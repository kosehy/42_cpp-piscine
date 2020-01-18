#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

#define ATK_NUM 5

// Canonical Member Function
NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_hp = 60;
	_maxhp = 60;
	_ep = 120;
	_maxep = 120;
	_lvl = 1;
	_mad = 60;
	_rad = 5;
	_adr = 0;
	std::cout << name << "(Type: Ninja): Created!" << std::endl;
	srand(time(NULL));
};
NinjaTrap::NinjaTrap(void) {};
NinjaTrap::NinjaTrap(const NinjaTrap &cpy) { *this = cpy; }
NinjaTrap::~NinjaTrap(void)
{
	std::cout << _name << "(Type: Ninja): Finish!" << std::endl;
};

// Operator Overload
NinjaTrap	&NinjaTrap::operator = (const NinjaTrap &old)
{
	_name = old.getName();
	_hp = old.getHp();
	_ep = old.getEp();
	_lvl = old.getLvl();
	std::cout << _name << ": " << "operator overload de gojaru" << std::endl;
	return (*this);
}


// Member Functions
void	NinjaTrap::rangedAttack(std::string const &target)
{
	ClapTrap::rangedAttack(target);
	std::cout << "Range Attack de gojaru!" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const &target)
{
	ClapTrap::meleeAttack(target);
	std::cout << "Melee Attack de gojaru!" << std::endl;

}

void	NinjaTrap::takeDamage(unsigned int amount)
{
	amount -= _adr;
	_hp -= amount;
	if (_hp < 0)
	{
		_hp = 0;
		std::cout << "ah....hikariga......" << std::endl;
	}
	else
		std::cout << "kkk" << std::endl;
	std::cout << _name << "takes "<< amount << " of damage!" << std::endl;
	std::cout << "current hp: " << _hp << std::endl;
}

void	NinjaTrap::hpRestore(unsigned int amount)
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

void	NinjaTrap::epRestore(unsigned int amount)
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

void	NinjaTrap::ninjaShoebox(ClapTrap const &target)
{
	std::cout << target.getName() << " finds a pony in this showbox!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap const &target)
{
	std::cout << target.getName() << " finds a knife in this showbox!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const &target)
{
	std::cout << target.getName() << " finds a pistol in this showbox!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const &target)
{
	std::cout << target.getName() << " finds a lucky bell in this showbox!" << std::endl;
}