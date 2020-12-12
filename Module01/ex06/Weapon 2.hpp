//
// Module01
//
// Created by Артур Лутфуллин on 28.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {
public:
	Weapon(std::string type);
	~Weapon();
	const std::string& getType() const;
	void setType(std::string newType);

private:
	std::string _type;
};


#endif
