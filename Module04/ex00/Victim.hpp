//
// Module04
//
// Created by Артур Лутфуллин on 03.12.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE04_VICTIM_HPP
# define MODULE04_VICTIM_HPP

#include <iostream>

class Victim {
public:
	~Victim();
	Victim(const std::string &name);
	Victim(const Victim&);
	Victim operator=(const  Victim&);
	std::string getName() const;

private:
	std::string _name;
	Victim();
};


#endif //MODULE04_VICTIM_HPP
