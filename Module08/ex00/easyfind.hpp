//
// Created by Fenix Lavon on 12/11/20.
// Copyright (c) 2020 All rights reserved.
//

#ifndef MODULE08_EASYFIND_HPP
# define MODULE08_EASYFIND_HPP

#include <iterator>
#include <map>
#include <iostream>
#include <vector>

template <typename T> typename T::iterator easyfind(T &arr, int value) {
	typename T::iterator iterator;

	if ((iterator = std::find(arr.begin(), arr.end(), value)) == arr.end())
		throw std::exception();
	return iterator;
}

#endif
