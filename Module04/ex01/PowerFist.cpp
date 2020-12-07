//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(const PowerFist &plasmaRifle) : AWeapon(plasmaRifle) {
	*this = plasmaRifle;
}

PowerFist & PowerFist::operator=(const PowerFist &powerFist) {
	this->_name = powerFist.getName();
	this->_apCost = powerFist.getAPCost();
	this->_damage = powerFist.getDamage();
	return *this;
}

PowerFist::~PowerFist() {}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}