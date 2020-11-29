//
// Module01
//
// Created by Артур Лутфуллин on 28.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon) {
	this->_name = name;
}

HumanA::~HumanA() {
	return;
}

void HumanA::attack() const {
	std::cout << "I am tatar and my name is " << _name
				<< "and i go always ALGA with me my love " << _weapon.getType() << std::endl;
}