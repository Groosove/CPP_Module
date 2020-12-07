//
// Module01
//
// Created by Артур Лутфуллин on 01.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "ClapTrap.hpp"

ClapTrap::~ClapTrap() { return; }

ClapTrap & ClapTrap::operator=(const ClapTrap &clapTrap) {
	this->_maxHitPoint = clapTrap._maxHitPoint;
	this->_maxEnergyPoint = clapTrap._maxEnergyPoint;
	this->_name = clapTrap._name;
	this->_currentHitPoint = clapTrap._currentHitPoint;
	this->_energyPoint = clapTrap._energyPoint;
	this->_level = clapTrap._level;
	this->_meleeAttackDamage = clapTrap._meleeAttackDamage;
	this->_rangedAttackDamage = clapTrap._rangedAttackDamage;
	this->_armorDamageReduction = clapTrap._armorDamageReduction;
	return *this;
}

ClapTrap::ClapTrap(std::string name, int currentHitPoint,
				   int energyPoint, uint level,
				   uint meleeAttackDamage, uint rangedAttackDamage, uint armorDamageReduction, uint maxEnergyPoint = 100, uint maxHitPoint = 100) {
	this->_name = name;
	this->_maxHitPoint = maxHitPoint;
	this->_currentHitPoint = currentHitPoint;
	this->_energyPoint = energyPoint;
	this->_maxEnergyPoint = maxEnergyPoint;
	this->_level = level;
	this->_meleeAttackDamage = meleeAttackDamage;
	this->_rangedAttackDamage = rangedAttackDamage;
	this->_armorDamageReduction = armorDamageReduction;
}
void ClapTrap::rangedAttack(const std::string &target) {
	std::cout << "CL4P-TP " << _name << " attacks " << target << " at range, causing " <<
			  _rangedAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target) {
	std::cout << "CL4P-TP " << _name << " attacks " << target << " at melee, causing " <<
			  _meleeAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(uint amount) {
	std::cout << "CL4P-TP " << _name << " be repaired " << amount << std::endl;
	if (this->_currentHitPoint + amount <= _maxHitPoint)
		_currentHitPoint += amount;
	std::cout << "CL4P-TP " << _name << " current hit points " << _currentHitPoint << std::endl;
}

void ClapTrap::takeDamage(uint amount) {
	if((this->_currentHitPoint -= (int)(amount - this->_armorDamageReduction)) < 0)
		this->_currentHitPoint = 0;
	std::cout << "CL4P-TP " << _name << " take damage " << amount << std::endl;
	std::cout << "CL4P-TP " << _name << " current hit points " << _currentHitPoint << std::endl;
}

std::string ClapTrap::getName() const {
	return _name;
}

uint ClapTrap::getMeleeAttackDamage() const {
	return _meleeAttackDamage;
}

uint ClapTrap::getRangeAttackDamage() const {
	return _rangedAttackDamage;
}

uint ClapTrap::getRandomAttack() const {
	std::srand(time(0));
	return (std::rand() % 100);
}