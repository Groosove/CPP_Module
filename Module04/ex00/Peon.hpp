//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon: public Victim {
public:
	Peon();
	Peon(const Peon&);
	Peon(const std::string &name);
	Peon &operator=(const Peon&);
	~Peon();
    virtual void getPolymorphed() const;
};

#endif
