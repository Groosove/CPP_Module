//
// Created by Fenix Lavon on 12/11/20.
// Copyright (c) 2020 All rights reserved.
//

#include "span.hpp"

int f() {
	return std::rand() % 1000;
}
int main() {

	std::srand(time(0));
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp2 = Span(20);
	std::vector<int> arr(20);
	std::generate(arr.begin(), arr.end(), f);
	sp2.addNumber(arr.begin(), arr.end());

	std::cout << "Shortest sp2: " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest sp2: " << sp2.longestSpan() << std::endl;
	std::sort(arr.begin(), arr.end());
	std::cout << "Vector:" << std::endl;
	std::vector<int>::iterator iterator = arr.begin();
	for (; iterator != arr.end() ;)
		std::cout << *iterator++ << std::endl;
}
