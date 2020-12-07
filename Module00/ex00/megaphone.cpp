/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 04:57:09 by flavon            #+#    #+#             */
/*   Updated: 2020/11/06 05:14:58 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; ++i)
			for (int j = 0; argv[i][j] != 0; ++j)
				std::cout << (char)((argv[i][j] >= 97 && argv[i][j] <= 122) ? argv[i][j] - 32 : argv[i][j]);
	std::cout << std::endl;
	return (0);
}