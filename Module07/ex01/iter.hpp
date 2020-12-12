//
// Created by Регина on 10.12.2020.
//

#ifndef MODULE07_ITER_HPP
#define MODULE07_ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, uint len, void(*f)(T &value)) { for (uint i = 0; i < len; ++i) f(arr[i]); }

#endif //MODULE07_ITER_HPP
