//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE04_RADSCORPION_HPP
# define MODULE04_RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy{
public:

	RadScorpion();
	~RadScorpion();
	RadScorpion & operator=(const RadScorpion &);
	RadScorpion(const RadScorpion &);

};

#endif
