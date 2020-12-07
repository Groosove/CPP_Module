//
// Module01
//
// Created by Артур Лутфуллин on 29.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//

#include "FragTrap.hpp"

int main() {
	FragTrap fragTrapFirst("Nikolay");
	FragTrap fragTrapFirst("Nikolay");
	FragTrap fragTrapSecond("Kolya");
	FragTrap fragTrapThird("Lalilalay");

	fragTrapFirst.meleeAttack(fragTrapSecond.getName());
	fragTrapSecond.takeDamage(fragTrapFirst.getMeleeAttackDamage());

	fragTrapSecond.rangedAttack(fragTrapThird.getName());
	fragTrapThird.takeDamage(fragTrapSecond.getRangeAttackDamage());

	fragTrapThird.vaulthunterDotExe(fragTrapFirst.getName());
	fragTrapFirst.takeDamage(fragTrapThird.getRandomAttack());
	return 0;
}