//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &plasmaRifle) : AWeapon(plasmaRifle) {
	*this = plasmaRifle;
}

PlasmaRifle & PlasmaRifle::operator=(const PlasmaRifle &plasmaRifle) {
	this->_name = plasmaRifle.getName();
	this->_apCost = plasmaRifle.getAPCost();
	this->_damage = plasmaRifle.getDamage();
	return *this;
}

PlasmaRifle::~PlasmaRifle() {}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}