//
// Created by Fenix Lavon on 12/11/20.
// Copyright (c) 2020 All rights reserved.
//

#ifndef MODULE08_MUTANTSTACK_HPP
# define MODULE08_MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <list>
template <typename T>
class MutantStack: public std::stack<T> {
public:
	MutantStack(): std::stack<T>() {};
	~MutantStack() {};
	MutantStack(const MutantStack &mutantStack) {*this = mutantStack; };
	MutantStack &operator=(const MutantStack &mutantStack) { *this = mutantStack; return *this; };

	class iterator: std::iterator<std::bidirectional_iterator_tag, T> {
	public:
		iterator() { this->_it = nullptr; };
		~iterator() { };
		MutantStack<T>::iterator& operator=(const MutantStack<T>::iterator &it) { this->_it = it._it; return *this; };
		iterator(const MutantStack<T>::iterator &it) { *this = it; }
		iterator(T *it) { this->_it = it; }
		bool operator==(const MutantStack<T>::iterator it1) { return this->_it == it1._it; };
		bool operator!=(const MutantStack<T>::iterator it1) { return this->_it != it1._it; };

		MutantStack<T>::iterator & operator++() { this->_it -= 1; return *this; }; // prefix increment
		MutantStack<T>::iterator & operator--() { this->_it += 1; return *this; }; // prefix decrement

		MutantStack<T>::iterator operator++(int) { // postfix increment
			MutantStack<T>::iterator cp_it(_it);
			this->operator++();
			return _it;
		};
		MutantStack<T>::iterator operator--(int) { // postfix decrement
			MutantStack<T>::iterator cp_it(_it);
			this->operator--();
			return _it;
		};
		T &operator*() { return *(this->_it); }

	private:
		T *_it;
	};
	MutantStack<T>::iterator begin() { return &this->top(); };
	MutantStack<T>::iterator end() {
		MutantStack<T>::iterator it = begin();
		for (u_long i = 0; i < this->size() - 1; ++i)
			++it;
		return it;
	};
};


#endif //MODULE08_MUTANTSTACK_HPP
