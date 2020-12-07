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
	std::ifstream _file(_filename);
	std::ofstream new_file(_filename + ".replace");
	if (!_file.is_open()) {
		std::cerr << "Wrong filename" << std::endl;
		return;
	}
	std::string	tmp_str;
	size_t i;
	while (std::getline(_file, tmp_str)) { 
		i = 0;
		if ((i = tmp_str.find(_str1, i)) != std::string::npos)
			tmp_str.replace(tmp_str.begin() + i, tmp_str.begin() + i + _str2.length(), _str2);
		new_file << tmp_str << std::endl;
	}
	_file.close();
	new_file.close();
}