//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &radScorpion) : Enemy(radScorpion) {
	*this = radScorpion;
}

RadScorpion & RadScorpion::operator=(const RadScorpion &radScorpion) {
	this->_type = radScorpion.getType();
	this->_hp = radScorpion.getHP();
	return *this;
}



