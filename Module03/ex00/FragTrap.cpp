//
// Module01
//
// Created by Артур Лутфуллин on 29.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//

#include "FragTrap.hpp"

FragTrap::FragTrap(const FragTrap &fragTrap) { *this = fragTrap; }

FragTrap::FragTrap(const std::string &name) {
	this->_maxHitPoint = 100;
	this->_maxEnergyPoint = 100;
	this->_name = name;
	this->_currentHitPoint = 100;
	this->_energyPoint = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAtackDamage = 20;
	this->_armorDamageReduction = 5;
}

FragTrap::~FragTrap() { return; }

FragTrap & FragTrap::operator=(const FragTrap &fragTrap) {
	this->_maxHitPoint = fragTrap._maxHitPoint;
	this->_maxEnergyPoint = fragTrap._maxEnergyPoint;
	this->_name = fragTrap._name;
	this->_currentHitPoint = fragTrap._currentHitPoint;
	this->_energyPoint = fragTrap._energyPoint;
	this->_level = fragTrap._level;
	this->_meleeAttackDamage = fragTrap._meleeAttackDamage;
	this->_rangedAtackDamage = fragTrap._rangedAtackDamage;
	this->_armorDamageReduction = fragTrap._armorDamageReduction;
	return *this;
}

void FragTrap::rangedAttack(const std::string &target) {

}

void FragTrap::meleeAttack(const std::string &target) {

}

void FragTrap::beRepaired(uint amount) {

}

void FragTrap::takeDamage(uint amount) {

}

void FragTrap::vaulthunerDotExe(const std::string &target) {

}


