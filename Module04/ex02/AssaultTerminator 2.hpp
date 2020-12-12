//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE04_ASSAULTTERMINATOR_HPP
# define MODULE04_ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {
public:
	AssaultTerminator();
	virtual ~AssaultTerminator();
	AssaultTerminator &operator=(const AssaultTerminator &);
	AssaultTerminator(const AssaultTerminator &);
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
