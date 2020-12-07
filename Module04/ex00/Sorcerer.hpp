//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE04_SORCERER_HPP
# define MODULE04_SORCERER_HPP

#include "Victim.hpp"
#include <iostream>

class Sorcerer {
public:
	Sorcerer(const std::string &name, const std::string &title);
	Sorcerer(const Sorcerer&);
	Sorcerer& operator=(const Sorcerer&);
	~Sorcerer();

	void polymorph(Victim const &) const;
	std::string getName() const;
	std::string getTitle() const;

private:
	std::string _name;
	std::string _title;
	Sorcerer();
};

std::ostream& operator<<(std::ostream &out, const Sorcerer &sorcerer);

#endif //MODULE04_SORCERER_HPP
