//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
public:
	AMateria(const std::string &type);
	virtual ~AMateria();
	AMateria &operator=(const AMateria &);
	AMateria(const AMateria &);
	std::string const & getType() const;
	uint getXP() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);

protected:
	uint		_xp;
	std::string _type;
	AMateria();
};

#endif
