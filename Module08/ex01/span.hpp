//
// Created by Fenix Lavon on 12/11/20.
// Copyright (c) 2020 All rights reserved.
//

#ifndef MODULE08_SPAN_HPP
# define MODULE08_SPAN_HPP

#include <iterator>
#include <vector>
#include <iostream>

class Span {
public:
	Span(uint count);
	Span(const Span &);
	Span &operator=(const Span &);
	~Span();
	void addNumber(int n);
	void addNumber(std::vector<int>::iterator , std::vector<int>::iterator);
	int shortestSpan();
	int longestSpan();

struct OutOfRangeException: public std::exception { const char *what() const throw(); };
struct SpanToLowException: public std::exception { const char *what() const throw(); };

private:
	uint 				_size;
	std::vector<int> 	_arr;
	bool 				_sorted;
	void	sortedVector();
	Span();
};


#endif //MODULE08_SPAN_HPP
