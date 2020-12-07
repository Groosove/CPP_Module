//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE04_POWERFIST_HPP
# define MODULE04_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon {
public:
	PowerFist();
	~PowerFist();
	PowerFist(const PowerFist&);
	PowerFist& operator=(const PowerFist&);
	void attack() const;
};


#endif //MODULE04_POWERFIST_HPP
