//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE04_ICE_HPP
# define MODULE04_ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
public:
	Ice();
	virtual ~Ice();
	Ice &operator=(const Ice &);
	Ice(const Ice &);
	AMateria* clone() const;
	void use(ICharacter &target);
};

#endif
