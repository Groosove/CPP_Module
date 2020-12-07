//
// Module01
//
// Created by Артур Лутфуллин on 29.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main() {
	FragTrap fragTrapFirst("Nikolay");
	FragTrap fragTrapSecond("Kolya");
	FragTrap fragTrapThird("Lalilalay");

	fragTrapFirst.meleeAttack(fragTrapSecond.getName());
	fragTrapSecond.takeDamage(fragTrapFirst.getMeleeAttackDamage());

	fragTrapSecond.rangedAttack(fragTrapThird.getName());
	fragTrapThird.takeDamage(fragTrapSecond.getRangeAttackDamage());

	fragTrapThird.vaulthunterDotExe(fragTrapFirst.getName());
	fragTrapFirst.takeDamage(fragTrapThird.getRandomAttack());

	std::cout << std::endl;

	ScavTrap scavTrapFirst("Mickey Mouse");
	ScavTrap scavTrapSecond("Minnie Mouse");
	ScavTrap scavTrapThird("Donald Duck");

	scavTrapFirst.meleeAttack(scavTrapSecond.getName());
	scavTrapSecond.takeDamage(scavTrapFirst.getMeleeAttackDamage());

	scavTrapSecond.rangedAttack(scavTrapThird.getName());
	scavTrapThird.takeDamage(scavTrapSecond.getRangeAttackDamage());

	scavTrapThird.challengeNewcomer(scavTrapFirst.getName());
	scavTrapFirst.takeDamage(scavTrapThird.getRandomAttack());

	std::cout << std::endl;

	NinjaTrap ninjaTrapFirst("Leonardo");
	NinjaTrap ninjaTrapSecond("Rafael");
	ninjaTrapFirst.meleeAttack(ninjaTrapSecond.getName());
	ninjaTrapSecond.takeDamage(ninjaTrapFirst.getMeleeAttackDamage());

	ninjaTrapSecond.rangedAttack(ninjaTrapFirst.getName());
	ninjaTrapFirst.takeDamage(ninjaTrapSecond.getRangeAttackDamage());

	ninjaTrapFirst.ninjaShoebox(fragTrapFirst);
	ninjaTrapFirst.ninjaShoebox(ninjaTrapSecond);
	ninjaTrapSecond.ninjaShoebox(scavTrapFirst);
	return 0;
}