//
// Project
//
// Created by Артур Лутфуллин on 28.11.2020.
// Copyright (c) 2020 Артур Лутфуллин. All right reserved. 
//
#ifndef MODULE02_FIXED_HPP
# define MODULE02_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed &);
	Fixed(const int);
	Fixed(const float);
	~Fixed();
	Fixed & operator=(const Fixed&);
	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;

private:
	int					_fixedPointValue;
	static const int	_numberOfFractionalBits = 8;
};
std::ostream & operator<<(std::ostream &out, const Fixed&);
#endif
