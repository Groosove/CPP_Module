//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "AWeapon.hpp"

AWeapon::AWeapon(): _name("none"), _apCost(0), _damage(0) {}

AWeapon::~AWeapon() {}

AWeapon::AWeapon(const AWeapon &weapon) { *this = weapon; }

const std::string & AWeapon::getName() const { return _name; }
int AWeapon::getAPCost() const { return _apCost; }
int AWeapon::getDamage() const { return _damage; }

AWeapon& AWeapon::operator=(const AWeapon &weapon) {
	this->_name = weapon.getName();
	this->_apCost = weapon.getAPCost();
	this->_damage = weapon.getDamage();
	return *this;
}

AWeapon::AWeapon(const std::string &name, int apCost, int damage) {
	this->_name = name;
	this->_apCost = apCost;
	this->_damage = damage;
}