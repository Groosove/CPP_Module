//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE04_PLASMARIFLE_HPP
# define MODULE04_PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {
public:
	PlasmaRifle();
	~PlasmaRifle();
	PlasmaRifle(const PlasmaRifle&);
	PlasmaRifle& operator=(const PlasmaRifle&);
	void attack() const;
};


#endif //MODULE04_PLASMARIFLE_HPP
