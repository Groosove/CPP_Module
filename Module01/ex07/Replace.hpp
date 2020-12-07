//
// Module01
//
// Created by Артур Лутфуллин on 28.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//

#ifndef MODULE01_REPLACE_HPP
# define MODULE01_REPLACE_HPP

#include <iostream>
#include <fstream>
#include <istream>

class Replace {
public:
	Replace(std::string &filename, std::string &s1, std::string &s2);
	~Replace();
	int checkArguments() const;
	void writeStr() const;

private:
	std::string _filename;
	std::string _str1;
	std::string _str2;
};


#endif //MODULE01_REPLACE_HPP
