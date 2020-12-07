//
// Module01
//
// Created by Артур Лутфуллин on 29.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//

#include "FragTrap.hpp"

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap) { *this = fragTrap; }

FragTrap::FragTrap(const std::string &name) : ClapTrap(name, 100, 100, 1, 30, 20, 5, 100, 100) {}

FragTrap::~FragTrap() { return; }

FragTrap & FragTrap::operator=(const FragTrap &fragTrap) {
	this->_maxHitPoint = fragTrap._maxHitPoint;
	this->_maxEnergyPoint = fragTrap._maxEnergyPoint;
	this->_name = fragTrap._name;
	this->_currentHitPoint = fragTrap._currentHitPoint;
	this->_energyPoint = fragTrap._energyPoint;
	this->_level = fragTrap._level;
	this->_meleeAttackDamage = fragTrap._meleeAttackDamage;
	this->_rangedAttackDamage = fragTrap._rangedAttackDamage;
	this->_armorDamageReduction = fragTrap._armorDamageReduction;
	return *this;
}

void FragTrap::rangedAttack(const std::string &target) {
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " <<
		_rangedAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target) {
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at melee, causing " <<
			  _meleeAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::beRepaired(uint amount) {
	std::cout << "FR4G-TP " << _name << " be repaired " << amount << std::endl;
	if (this->_currentHitPoint + amount <= _maxHitPoint)
		_currentHitPoint += amount;
	std::cout << "FR4G-TP " << _name << " current hit points " << _currentHitPoint << std::endl;
}

void FragTrap::takeDamage(uint amount) {
	if((this->_currentHitPoint -= (int)(amount - this->_armorDamageReduction)) < 0)
		this->_currentHitPoint = 0;
	std::cout << "FR4G-TP " << _name << " take damage " << amount << std::endl;
	std::cout << "FR4G-TP " << _name << " current hit points " << _currentHitPoint << std::endl;
}

void FragTrap::vaulthunterDotExe(const std::string &target) {
	std::srand(time(0));
	if (_energyPoint >= 25) {
		this->_energyPoint -= 25;
		std::cout << "FR4G-TP " << _name << " carries out a "
			<< randomPhraseFrag[std::rand() % 5] << " " << target <<std::endl;
	}
}