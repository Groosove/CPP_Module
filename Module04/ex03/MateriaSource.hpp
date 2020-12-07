//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE04_MATERIASOURCE_HPP
# define MODULE04_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource &operator=(const MateriaSource &);
	MateriaSource(const MateriaSource &);
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);

private:
	AMateria* _aMateria[4];
};


#endif
