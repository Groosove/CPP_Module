//
// Module01
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const SuperTrap &superTrap) : ClapTrap(superTrap), FragTrap(superTrap), NinjaTrap(superTrap) {}

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(name, 60, 120, 1, 60, 5, 0, 60, 120), FragTrap(name), NinjaTrap(name) {}

SuperTrap::~SuperTrap() { return; }

SuperTrap & SuperTrap::operator=(const SuperTrap &superTrap) {
	this->_maxHitPoint = superTrap._maxHitPoint;
	this->_maxEnergyPoint = superTrap._maxEnergyPoint;
	this->_name = superTrap._name;
	this->_currentHitPoint = superTrap._currentHitPoint;
	this->_energyPoint = superTrap._energyPoint;
	this->_level = superTrap._level;
	this->_meleeAttackDamage = superTrap._meleeAttackDamage;
	this->_rangedAttackDamage = superTrap._rangedAttackDamage;
	this->_armorDamageReduction = superTrap._armorDamageReduction;
	return *this;
}

void SuperTrap::beRepaired(uint amount) {
	std::cout << "SUPER-TP " << _name << " be repaired " << amount << std::endl;
	if (this->_currentHitPoint + amount <= _maxHitPoint)
		_currentHitPoint += amount;
	std::cout << "SUPER-TP " << _name << " current hit points " << _currentHitPoint << std::endl;
}

void SuperTrap::takeDamage(uint amount) {
	if((this->_currentHitPoint -= (int)(amount - this->_armorDamageReduction)) < 0)
		this->_currentHitPoint = 0;
	std::cout << "SUPER-TP " << _name << " take damage " << amount << std::endl;
	std::cout << "SUPER-TP " << _name << " current hit points " << _currentHitPoint << std::endl;
}