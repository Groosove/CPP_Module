//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type) {
	this->_hp = hp;
	this->_type = type;
}
Enemy::~Enemy() {}
Enemy::Enemy(): _hp(0), _type("none") {}

int Enemy::getHP() const { return _hp; }
const std::string & Enemy::getType() const { return _type; }

void Enemy::takeDamage(int damage) {
	if (_hp < 0)
		return;
	this->_hp -= damage;
}