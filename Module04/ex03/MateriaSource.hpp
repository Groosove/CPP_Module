//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE04_MATERIASOURCE_HPP
# define MODULE04_MATERIASOURCE_HPP

class MateriaSource {
public:
	MateriaSource();

	~MateriaSource();

	MateriaSource &operator=(const MateriaSource &);

	MateriaSource(const MateriaSource &);
};

#endif
