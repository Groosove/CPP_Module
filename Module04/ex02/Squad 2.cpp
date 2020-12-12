//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "Squad.hpp"

Squad::Squad() : _count(0), _spaceMarine(0) {}

Squad::~Squad() {
	for (int i = 0; i < _count; ++i)
		delete this->_spaceMarine[i];
	delete _spaceMarine;
}

Squad & Squad::operator=(const Squad &squad) {
	this->_count = squad.getCount();
	for (int i = 0; i < squad.getCount(); ++i)
		push(squad.getUnit(i)->clone());
	return *this;
}

Squad::Squad(const Squad &squad) { *this = squad; }

int Squad::getCount() const { return _count; }

ISpaceMarine* Squad::getUnit(int index) const {
	if (index >= _count || index < 0 || _count == 0)
		return nullptr;
	return this->_spaceMarine[index];
}

int Squad::push(ISpaceMarine *spaceMarine) {
	if (spaceMarine == 0)
		return _count;
	if (_count == 0) {
		this->_spaceMarine = new ISpaceMarine*[++this->_count];
		this->_spaceMarine[_count - 1] = spaceMarine;
	} else {
		for (int i = 0; i < _count; ++i)
			if (_spaceMarine[i] == spaceMarine)
				return this->_count;
		ISpaceMarine **newSpaceMarine = new ISpaceMarine*[++this->_count];
		for (int i = 0; i < _count - 1; ++i)
			newSpaceMarine[i] = _spaceMarine[i];
		newSpaceMarine[_count - 1] = spaceMarine;
		delete [] _spaceMarine;
		this->_spaceMarine = newSpaceMarine;
	}
	return _count;
}