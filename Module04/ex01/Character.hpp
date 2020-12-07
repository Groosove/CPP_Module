//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE04_CHARACTER_HPP
# define MODULE04_CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
public:

	Character();
	~Character();
	Character(const std::string &name);
	Character &operator=(const Character &);
	Character(const Character &);
	void recoverAP();
	void equip(AWeapon *);
	void attack(Enemy *);
	std::string const& getName() const;
	int	getAP() const;
	AWeapon* getWeapon() const;

private:
	std::string _name;
	int			_apCost;
	AWeapon		*_weapon;

};

std::ostream & operator<<(std::ostream &out, const Character &character);

#endif
