//
// Module01
//
// Created by Артур Лутфуллин on 01.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap) { *this = scavTrap; }

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name, 100, 50, 1, 20, 15, 3, 100, 50) {}

ScavTrap::~ScavTrap() { return; }

ScavTrap & ScavTrap::operator=(const ScavTrap &scavTrap) {
	this->_maxHitPoint = scavTrap._maxHitPoint;
	this->_maxEnergyPoint = scavTrap._maxEnergyPoint;
	this->_name = scavTrap._name;
	this->_currentHitPoint = scavTrap._currentHitPoint;
	this->_energyPoint = scavTrap._energyPoint;
	this->_level = scavTrap._level;
	this->_meleeAttackDamage = scavTrap._meleeAttackDamage;
	this->_rangedAttackDamage = scavTrap._rangedAttackDamage;
	this->_armorDamageReduction = scavTrap._armorDamageReduction;
	return *this;
}

void ScavTrap::rangedAttack(const std::string &target) {
	std::cout << "SC4V-TP " << _name << " attacks " << target << " at range, causing " <<
			  _rangedAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target) {
	std::cout << "SC4V-TP " << _name << " attacks " << target << " at melee, causing " <<
			  _meleeAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::beRepaired(uint amount) {
	std::cout << "SC4V-TP " << _name << " be repaired " << amount << std::endl;
	if (this->_currentHitPoint + amount <= _maxHitPoint)
		_currentHitPoint += amount;
	std::cout << "SC4V-TP " << _name << " current hit points " << _currentHitPoint << std::endl;
}

void ScavTrap::takeDamage(uint amount) {
	if((this->_currentHitPoint -= (int)(amount - this->_armorDamageReduction)) < 0)
		this->_currentHitPoint = 0;
	std::cout << "SC4V-TP " << _name << " take damage " << amount << std::endl;
	std::cout << "SC4V-TP " << _name << " current hit points " << _currentHitPoint << std::endl;
}

void ScavTrap::challengeNewcomer(const std::string &target) {
	std::srand(time(0));
	if (_energyPoint >= 25) {
		this->_energyPoint -= 25;
		std::cout << "SC4V-TP " << _name << " carries out a "
				  << randomPhraseScav[std::rand() % 5] << " " << target <<std::endl;
	}
}