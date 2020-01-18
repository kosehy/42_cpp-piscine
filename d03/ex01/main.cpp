#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int 	main(void)
{
	FragTrap	ko = FragTrap("FR4G-TP");

	ko.rangedAttack("weed");
	ko.meleeAttack("Ken");
	
	ko.takeDamage(12);
	ko.takeDamage(12);
	ko.takeDamage(12);
	ko.takeDamage(12);
	ko.takeDamage(12);
	ko.takeDamage(42);
	ko.hpRestore(120);
	
	ko.vaulthunter_dot_exe("yun");
	ko.vaulthunter_dot_exe("kim");
	ko.vaulthunter_dot_exe("hwa");
	ko.vaulthunter_dot_exe("ten");
	ko.epRestore(50);
	ko.vaulthunter_dot_exe("sein");
	ko.vaulthunter_dot_exe("krowd");

	FragTrap	ko1 = ko;
	std::cout << ko1.getName() << std::endl;
	std::cout << ko1.getHp() << std::endl;
	std::cout << ko1.getEp() << std::endl;
	std::cout << ko1.getLvl() << std::endl;

	ScavTrap	sako = ScavTrap("SCAV-TP");

	sako.rangedAttack("weed");
	sako.meleeAttack("Ken");

	sako.takeDamage(12);
	sako.takeDamage(12);
	sako.takeDamage(12);
	sako.takeDamage(12);
	sako.takeDamage(12);
	sako.takeDamage(42);
	sako.hpRestore(120);

	sako.challengeNewcomer("yun");
	sako.challengeNewcomer("kim");
	sako.challengeNewcomer("hwa");
	sako.challengeNewcomer("ten");
	sako.epRestore(50);
	sako.challengeNewcomer("sein");
	sako.challengeNewcomer("krowd");

	ScavTrap	sako1 = sako;
	std::cout << sako1.getName() << std::endl;
	std::cout << sako1.getHp() << std::endl;
	std::cout << sako1.getEp() << std::endl;
	std::cout << sako1.getLvl() << std::endl;
}