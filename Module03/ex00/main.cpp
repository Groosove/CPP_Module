//
// Module01
//
// Created by Артур Лутфуллин on 29.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//

#include "FragTrap.hpp"

int main() {
	FragTrap fragTrapFirst("Nikolay");
	FragTrap fragTrapSecond("Kolya");
	FragTrap fragTrapThird("Lalilalay");

	fragTrapFirst.meleeAttack(fragTrapSecond.getName());
	fragTrapFirst.takeDamage(fragTrapFirst.getMeleeAttackDamage());

	fragTrapSecond.rangedAttack(fragTrapThird.getName());
	fragTrapSecond.takeDamage(fragTrapSecond.getRangeAttackDamage());

	fragTrapThird.vaulthunerDotExe(fragTrapFirst.getName());
	fragTrapThird.takeDamage(fragTrapThird.getRandomAttack());
	return 0;
}