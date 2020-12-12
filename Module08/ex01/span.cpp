//
// Created by Fenix Lavon on 12/11/20.
// Copyright (c) 2020 All rights reserved.
//

#include "span.hpp"
Span::Span(): _size(0) {}
Span::Span(uint count): _size(count) {}

Span::Span(const Span &span): _size(span._size), _arr(span._arr), _sorted(span._sorted) {}

Span & Span::operator=(const Span &span) {
	this->_size = span._size;
	this->_arr = span._arr;
	this->_sorted = span._sorted;
	return *this;
}

Span::~Span() {}

const char * Span::OutOfRangeException::what() const throw() { return "Span is full\n"; }
const char * Span::SpanToLowException::what() const throw() { return "Span is empty\n"; }

void Span::sortedVector() {
	_sorted = true;
	std::sort(this->_arr.begin(), this->_arr.end());
}

void Span::addNumber(int n) {
	if (_arr.size() == this->_size)
		throw OutOfRangeException();
	_arr.push_back(n);
	_sorted = false;
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	for (; begin != end; ++begin)
		addNumber(*begin);
}

int Span::shortestSpan() {
	if (_arr.empty() || _arr.size() == 1)
		throw SpanToLowException();
	if (!_sorted)
		sortedVector();
	int shortestValue = INT_MAX;
	std::vector<int>::iterator i = _arr.begin();
	std::vector<int>::iterator next = ++_arr.begin();
	for (; i != _arr.end()- 1; ++i, ++next) {
		if (*next - *i < shortestValue)
			shortestValue = *next - *i;
	}
	return shortestValue;
}

int Span::longestSpan() {
	if (_arr.empty() || _arr.size() == 1)
		throw SpanToLowException();
	if (!_sorted)
		sortedVector();
	return _arr.back() - _arr.front();
}

