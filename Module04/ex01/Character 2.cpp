//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "Character.hpp"

Character::Character(): _name(nullptr), _apCost(40), _weapon(0) {}
Character::Character(const std::string &name) {
	this->_name = name;
	this->_apCost = 40;
	this->_weapon = 0;
}
Character::~Character() {}
Character::Character(const Character &character) { *this = character; }

Character& Character::operator=(const Character &character) {
	this->_name = character.getName();
	this->_apCost = character.getAP();
	this->_weapon = character.getWeapon();
	return *this;
}

void Character::attack(Enemy *enemy) {
	if (!this->_weapon || !enemy || _apCost < _weapon->getAPCost())
		return;
	std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
	_weapon->attack();
	this->_apCost -= _weapon->getAPCost();
	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

void Character::recoverAP() { _apCost = (_apCost > 40) ? 40 : _apCost + 10; }
void Character::equip(AWeapon *aWeapon) { this->_weapon = aWeapon; }
const std::string & Character::getName() const { return _name; }
int Character::getAP() const { return _apCost; }
AWeapon* Character::getWeapon() const { return _weapon; }

std::ostream & operator<<(std::ostream &out, const Character &ch) {
	if (!ch.getWeapon())
		out << ch.getName() << " has " << ch.getAP() << " AP and is unarmed" << std::endl;
	else
		out << ch.getName() << " has " << ch.getAP() << " AP and wields a " << ch.getWeapon()->getName() << std::endl;
	return out;
}