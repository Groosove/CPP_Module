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
	~Fixed();
	Fixed & operator=(const Fixed&);
	int		getRawBits() const;
	void	setRawBits(int const raw);

private:
	int					_fixedPointValue;
	static const int	_numberOfFractionalBits = 8;
};

#endif
