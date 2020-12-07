//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE04_AWEAPON_HPP
# define MODULE04_AWEAPON_HPP

#include <iostream>

class AWeapon {
public:
    AWeapon(std::string const &name, int apCost, int damage);
    AWeapon(const AWeapon&);
    AWeapon& operator=(const AWeapon &);
	~AWeapon();
    std::string const& getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;

protected:
    std::string _name;
    int _apCost;
    int _damage;
	AWeapon();
};


#endif //MODULE04_AWEAPON_HPP
