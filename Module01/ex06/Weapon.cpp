//
// Module01
//
// Created by Артур Лутфуллин on 28.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->_type = type;
}

Weapon::~Weapon() {
	return;
}

const std::string& Weapon::getType() const {
	return _type;
}

void Weapon::setType(std::string newType) {
	this->_type = newType;
}
