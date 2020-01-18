#include "FragTrap.hpp"

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
	
}