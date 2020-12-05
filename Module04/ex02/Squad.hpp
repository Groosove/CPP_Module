//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE04_SQUAD_HPP
# define MODULE04_SQUAD_HPP

#include "ISquad.hpp"

class Squad: public ISquad {
public:
	Squad();
	~Squad();
	Squad &operator=(const Squad &);
	Squad(const Squad &);
	int getCount() const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine*);

private:
	int _count;
	ISpaceMarine **_spaceMarine;
};

#endif
