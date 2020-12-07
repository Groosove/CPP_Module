//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() { for (int i = 0; i < 4; ++i) _aMateria[i] = nullptr; }

MateriaSource::MateriaSource(const MateriaSource &materiaSource) { *this = materiaSource; }

MateriaSource::~MateriaSource() { for (int i = 0; i < 4; ++i) delete this->_aMateria[i]; }

MateriaSource & MateriaSource::operator=(const MateriaSource &materiaSource) {
	for (int i = 0; i < 4; ++i) {
		if (_aMateria[i] != nullptr)
			delete this->_aMateria[i];
		this->_aMateria[i] = materiaSource._aMateria[i]->clone();
	}
	return *this;
}

AMateria * MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; ++i)
		if (_aMateria[i]->getType() == type)
			return this->_aMateria[i]->clone();
	return nullptr;
}

void MateriaSource::learnMateria(AMateria *aMateria) {
	if (aMateria == nullptr)
		return;
	for (int i = 0; i < 4; ++i)
		if (_aMateria[i] == nullptr) { this->_aMateria[i] = aMateria->clone(); break; }
		else if (_aMateria[i] == aMateria) return;
		else continue;
}




