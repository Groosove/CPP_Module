//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {
public:
	TacticalMarine();
	virtual ~TacticalMarine();
	TacticalMarine &operator=(const TacticalMarine &);
	TacticalMarine(const TacticalMarine &);
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
