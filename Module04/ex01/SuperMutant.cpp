//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &superMutant): Enemy(superMutant) {
	*this = superMutant;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant & SuperMutant::operator=(const SuperMutant &superMutant) {
	this->_hp = superMutant.getHP();
	this->_type = superMutant.getType();
	return *this;
}
void SuperMutant::takeDamage(int damage) {
	Enemy::takeDamage(damage - 3);
}

