//
// Created by Fenix Lavon on 12/11/20.
// Copyright (c) 2020 All rights reserved.
//

#include "Mutantstack.hpp"

int main()
{
	MutantStack<int> mStack;
	mStack.push(5);
	mStack.push(17);
	std::cout << mStack.top() << std::endl;
	mStack.pop();
	std::cout << mStack.size() << std::endl << std::endl;
	mStack.push(3);
	mStack.push(24);
	mStack.push(737);
	MutantStack<int>::iterator it = mStack.begin();
	MutantStack<int>::iterator ite = mStack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		it++;
	}
	std::cout << *it << std::endl;
	std::stack<int> s(mStack);
	return 0;
}