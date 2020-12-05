//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "Character.hpp"

Character::Character() : _name(nullptr), _count(4) {
	for (int i = 0; i < _count; ++i)
		this->_aMateria[i] = nullptr;
}

Character::~Character() {
	for (int i = 0; i < _count; ++i)
		delete this->_aMateria[i];
}

Character::Character(const Character &character) {
	for (int i = 0; i < _count; ++i)
		delete this->_aMateria[i];
	*this = character;
}

Character & Character::operator=(const Character &character) {
	this->_name = character.getName();
	
}