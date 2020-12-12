//
// Created by Fenix Lavon on 12/11/20.
// Copyright (c) 2020. All rights reserved.
//

#include "easyfind.hpp"

int main() {
	std::vector<int> arr;
	arr.push_back(0);
	arr.push_back(1);
	arr.push_back(2);
	std::cout << *easyfind(arr, 2) << std::endl;
	try { std::cout << *easyfind(arr, 3) << std::endl; }
	catch (std::exception &e) { std::cerr << "Don't found it" << std::endl; }
	return 0;
}

