//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "Character.hpp"

Character::Character(const std::string &name): _name(name) {
	for (int i = 0; i < 4; ++i)
		this->_aMateria[i] = nullptr;
}

Character::Character() : _name(nullptr) {
	for (int i = 0; i < 4; ++i)
		this->_aMateria[i] = nullptr;
}

Character::~Character() {
	for (int i = 0; i < 4; ++i)
		delete this->_aMateria[i];
}

Character::Character(const Character &character) {
	for (int i = 0; i < 4; ++i)
		delete this->_aMateria[i];
	*this = character;
}

Character & Character::operator=(const Character &character) {
	this->_name = character.getName();
	for (int i = 0; i < 4; ++i) {
		delete this->_aMateria[i];
		this->_aMateria[i] = character._aMateria[i]->clone();
	}
	return *this;
}

void Character::unequip(int idx) {
	if (idx >= 4 || idx < 0 || _aMateria[idx] == nullptr)
		return;
	this->_aMateria[idx] = nullptr;
}

void Character::equip(AMateria *m) {
	if (m == nullptr)
		return;
	for (int i = 0; i < 4; ++i) {
		if (_aMateria[i] != nullptr)
			continue;
		_aMateria[i] = m->clone();
		break;
	}
}

const std::string & Character::getName() const { return _name; }

void Character::use(int idx, ICharacter &target) {
	if (idx >= 4 || idx < 0 || _aMateria[idx] == nullptr)
		return;
	this->_aMateria[idx]->use(target);
}