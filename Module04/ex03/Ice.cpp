//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::Ice(const Ice &ice): AMateria(ice) { *this = ice; }

Ice::~Ice() {}

Ice & Ice::operator=(const Ice &ice) {
	this->_xp = ice.getXP();
	this->_type = ice.getType();
	return *this;
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}