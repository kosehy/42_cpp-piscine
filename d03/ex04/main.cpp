#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int 	main(void)
{
//	std::cout << "FragTrap!" << std::endl;
//	FragTrap	ko = FragTrap("FR4G-TP");
//
//	ko.rangedAttack("weed");
//	ko.meleeAttack("Ken");
//
//	ko.takeDamage(12);
//	ko.takeDamage(12);
//	ko.takeDamage(12);
//	ko.takeDamage(12);
//	ko.takeDamage(12);
//	ko.takeDamage(42);
//	ko.takeDamage(100);
//	ko.hpRestore(10);
//
//	ko.vaulthunter_dot_exe("yun");
//	ko.vaulthunter_dot_exe("kim");
//	ko.vaulthunter_dot_exe("hwa");
//	ko.vaulthunter_dot_exe("ten");
//	ko.epRestore(50);
//	ko.vaulthunter_dot_exe("sein");
//	ko.vaulthunter_dot_exe("krowd");
//
//	FragTrap	ko1 = ko;
//	std::cout << ko1.getName() << std::endl;
//	std::cout << ko1.getHp() << std::endl;
//	std::cout << ko1.getEp() << std::endl;
//	std::cout << ko1.getLvl() << std::endl;
//
//	std::cout << "ScavTrap!" << std::endl;
//	ScavTrap	sako = ScavTrap("SCAV-TP");
//
//	sako.rangedAttack("weed");
//	sako.meleeAttack("Ken");
//
//	sako.takeDamage(12);
//	sako.takeDamage(12);
//	sako.takeDamage(12);
//	sako.takeDamage(12);
//	sako.takeDamage(12);
//	sako.takeDamage(42);
//	sako.hpRestore(120);
//
//	sako.challengeNewcomer("yun");
//	sako.challengeNewcomer("kim");
//	sako.challengeNewcomer("hwa");
//	sako.challengeNewcomer("ten");
//	sako.epRestore(50);
//	sako.challengeNewcomer("sein");
//	sako.challengeNewcomer("krowd");
//
//	ScavTrap	sako1 = sako;
//	std::cout << sako1.getName() << std::endl;
//	std::cout << sako1.getHp() << std::endl;
//	std::cout << sako1.getEp() << std::endl;
//	std::cout << sako1.getLvl() << std::endl;
//
//	std::cout << "NinjaTrap!" << std::endl;
//	NinjaTrap	ren = NinjaTrap("SCAV-TP");
//
//	ren.rangedAttack("weed");
//	ren.meleeAttack("Ken");
//
//	ren.takeDamage(12);
//	ren.takeDamage(12);
//	ren.takeDamage(12);
//	ren.takeDamage(12);
//	ren.takeDamage(12);
//	ren.takeDamage(42);
//	ren.hpRestore(120);
//
//	NinjaTrap	kyo = NinjaTrap("KYO-TP");
//	ClapTrap	kim = ClapTrap("KIM-TP");
//	ren.ninjaShoebox(ko);
//	ren.ninjaShoebox(sako);
//	ren.ninjaShoebox(kyo);
//	ren.ninjaShoebox(kim);
//
//	NinjaTrap	ren1 = ren;
//	std::cout << ren1.getName() << std::endl;
//	std::cout << ren1.getHp() << std::endl;
//	std::cout << ren1.getEp() << std::endl;
//	std::cout << ren1.getLvl() << std::endl;

	NinjaTrap	ren = NinjaTrap("SCAV-TP");

	std::cout << "SuperTrap!" << std::endl;
	SuperTrap kun = SuperTrap("Superman");
	std::cout << "HP is " << kun.getHp() << std::endl;
	std::cout << "EP is " << kun.getEp() << std::endl;
	kun.rangedAttack("Steven");
	kun.meleeAttack("Alex");
	kun.vaulthunter_dot_exe("Andy");
	kun.ninjaShoebox(ren);
}