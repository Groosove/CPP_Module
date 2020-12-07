//
// Module01
//
// Created by Артур Лутфуллин on 27.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "Brain.hpp"

Brain::Brain() {
	this->_brainSerialNumber = std::rand();
}

Brain::~Brain() {
	return;
}

std::string Brain::identify() const {
	std::ostringstream ostring;

	ostring << this;
	return ostring.str();
}