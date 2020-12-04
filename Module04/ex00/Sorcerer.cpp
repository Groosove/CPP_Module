//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, std::string &title) : _name(name), _title(title) {
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {	std::cout << _name << ", " << _title << ", is died!" << std::endl; }

Sorcerer::Sorcerer(const Sorcerer &sorcerer) {
	*this = sorcerer;
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

std::string Sorcerer::getName() const { return _name; }
std::string Sorcerer::getTitle() const {return _title;}

Sorcerer & Sorcerer::operator=(const Sorcerer &sorcerer) {
	this->_title = sorcerer.getTitle();
	this->_name = sorcerer.getName();
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Sorcerer &sorcerer) {
	out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return out;
}

Sorcerer::Sorcerer(): _name("none"), _title("none") {}


