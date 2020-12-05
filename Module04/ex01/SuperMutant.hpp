//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE04_SUPERMUTANT_HPP
# define MODULE04_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant: public Enemy {
public:
	SuperMutant();
	~SuperMutant();
	SuperMutant& operator=(const SuperMutant&);
	SuperMutant(const SuperMutant&);
	virtual void takeDamage(int damage);
};


#endif //MODULE04_SUPERMUTANT_HPP
