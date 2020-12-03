//
// Module01
//
// Created by Артур Лутфуллин on 01.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const NinjaTrap &ninjaTrap) : ClapTrap(ninjaTrap) { *this = ninjaTrap; }

NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(name, 60, 120, 1, 60, 5, 0, 60, 120) {}

NinjaTrap::~NinjaTrap() { return; }

NinjaTrap & NinjaTrap::operator=(const NinjaTrap &ninjaTrap) {
	this->_maxHitPoint = ninjaTrap._maxHitPoint;
	this->_maxEnergyPoint = ninjaTrap._maxEnergyPoint;
	this->_name = ninjaTrap._name;
	this->_currentHitPoint = ninjaTrap._currentHitPoint;
	this->_energyPoint = ninjaTrap._energyPoint;
	this->_level = ninjaTrap._level;
	this->_meleeAttackDamage = ninjaTrap._meleeAttackDamage;
	this->_rangedAttackDamage = ninjaTrap._rangedAttackDamage;
	this->_armorDamageReduction = ninjaTrap._armorDamageReduction;
	return *this;
}

void NinjaTrap::rangedAttack(const std::string &target) {
	std::cout << "NINJ4-TP " << _name << " attacks " << target << " at range, causing " <<
			  _rangedAttackDamage << " points of damage!" << std::endl;
}

void NinjaTrap::meleeAttack(const std::string &target) {
	std::cout << "NINJ4-TP " << _name << " attacks " << target << " at melee, causing " <<
			  _meleeAttackDamage << " points of damage!" << std::endl;
}

void NinjaTrap::beRepaired(uint amount) {
	std::cout << "NINJ4-TP " << _name << " be repaired " << amount << std::endl;
	if (this->_currentHitPoint + amount <= _maxHitPoint)
		_currentHitPoint += amount;
	std::cout << "FR4G-TP " << _name << " current hit points " << _currentHitPoint << std::endl;
}

void NinjaTrap::takeDamage(uint amount) {
	if((this->_currentHitPoint -= (int)(amount - this->_armorDamageReduction)) < 0)
		this->_currentHitPoint = 0;
	std::cout << "NINJ4-TP " << _name << " take damage " << amount << std::endl;
	std::cout << "NINJ4-TP " << _name << " current hit points " << _currentHitPoint << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &clapTrap) {
	std::srand(time(0));
	if (_energyPoint >= 25) {
		this->_energyPoint -= 25;
		std::cout << "NINJ4-TP " << _name << " carries out a "
				  << randomPhraseNinja[std::rand() % 5] << " " << clapTrap.getName() << std::endl;
		clapTrap.takeDamage(std::rand() % 100);
	}
}

void NinjaTrap::ninjaShoebox(FragTrap &fragTrap) {
	std::srand(time(0));
	if (_energyPoint >= 25) {
		this->_energyPoint -= 25;
		std::cout << "NINJ4-TP " << _name << " carries out a "
				  << randomPhraseNinja[std::rand() % 5] << " " << fragTrap.getName() << std::endl;
		fragTrap.takeDamage(std::rand() % 100);
	}
}

void NinjaTrap::ninjaShoebox(ScavTrap &scavTrap) {
	std::srand(time(0));
	if (_energyPoint >= 25) {
		this->_energyPoint -= 25;
		std::cout << "NINJ4-TP " << _name << " carries out a "
				  << randomPhraseNinja[std::rand() % 5] << " " << scavTrap.getName() << std::endl;
		scavTrap.takeDamage(std::rand() % 100);
	}
}

void NinjaTrap::ninjaShoebox(NinjaTrap &ninjaTrap) {
	std::srand(time(0));
	if (_energyPoint >= 25) {
		this->_energyPoint -= 25;
		std::cout << "NINJ4-TP " << _name << " carries out a "
				  << randomPhraseNinja[std::rand() % 5] << " " << ninjaTrap.getName() << std::endl;
		ninjaTrap.takeDamage(std::rand() % 100);
	}
}