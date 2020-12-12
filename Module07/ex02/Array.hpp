//
// Created by Регина on 10.12.2020.
//

#ifndef MODULE07_ARRAY_HPP
#define MODULE07_ARRAY_HPP

#include <iostream>
template <typename T>

class Array {
private:
    uint _size;
    T *_arr;
public:
    Array(): _size(0), _arr(nullptr) {};
    Array(uint size): _size(size), _arr(new T[_size]){};
    ~Array(){};
    Array(const Array<T> &arr): _size(0), _arr(nullptr) { *this = arr; }
    Array<T>& operator=(const Array &arr) {
        if (_arr) delete [] this->_arr;
        this->_size = arr._size;
        this->_arr = new T[this->_size];
        for (uint i = 0; i < _size; ++i) this->_arr[i] = arr._arr[i];
        return *this;
    }
    T& operator[](uint index) {
        if (_size <= index)
            throw std::out_of_range("index higher size array\n");
        return this->_arr[index];
    }
    uint size() { return _size; }
};


#endif //MODULE07_ARRAY_HPP
