//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE04_CURE_HPP
# define MODULE04_CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {
public:
	Cure();
	virtual ~Cure();
	Cure &operator=(const Cure &);
	Cure(const Cure &);
	virtual AMateria* clone() const;
	virtual void use(ICharacter &target);
};

#endif
