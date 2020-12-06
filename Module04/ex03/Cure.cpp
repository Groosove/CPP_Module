//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure(const Cure &cure): AMateria(cure) { *this = cure; }

Cure::~Cure() {}

Cure & Cure::operator=(const Cure &cure) {
	this->_xp = cure.getXP();
	this->_type = cure.getType();
	return *this;
}

AMateria * Cure::clone() const { return new Cure(*this); }

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}