//
// Module01
//
// Created by Артур Лутфуллин on 28.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#include "Replace.hpp"

Replace::Replace(std::string &filename, std::string &s1, std::string &s2) {
	this->_filename = filename;
	this->_str1 = s1;
	this->_str2 = s2;
}

Replace::~Replace() {
	return;
}

int Replace::checkArguments() const {
	if (_str1.empty())
		return 1;
	if (_str2.empty())
		return 2;
	return 0;
}

void Replace::writeStr() const {
	std::ifstream _file("/Users/arturlutfullin/Desktop/CPP Module/Module01/ex07/" + _filename);
	std::ofstream new_file("/Users/arturlutfullin/Desktop/CPP Module/Module01/ex07/" + _filename + ".replace");
	if (!_file.is_open()) {
		std::cerr << "Wrong filename" << std::endl;
		return;
	}
	std::string	tmp_str;
	while (std::getline(_file, tmp_str))
		new_file << ((tmp_str == _str1) ? _str2 : tmp_str) << std::endl;
	_file.close();
	new_file.close();
}