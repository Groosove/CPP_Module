//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "AMateria.hpp"

AMateria::AMateria(): _xp(0), _type(nullptr) {}

AMateria::AMateria(const std::string &type): _xp(0), _type(type) {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &aMateria) { *this = aMateria; }

const std::string & AMateria::getType() const { return _type; }

uint AMateria::getXP() const { return  _xp; }

AMateria & AMateria::operator=(const AMateria &aMateria) {
	this->_xp = aMateria.getXP();
	this->_type = aMateria.getType();
	return *this;
}

void AMateria::use(ICharacter &target) {
	(void)target;
	this->_xp += 10;
}