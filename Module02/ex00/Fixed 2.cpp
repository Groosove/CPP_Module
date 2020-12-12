//
// Project
//
// Created by Артур Лутфуллин on 28.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _fixedPointValue;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = fixed.getRawBits();
	return *this;
}