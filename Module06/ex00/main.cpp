//
// Created by Регина on 08.12.2020.
//

#include "Converter.hpp"

int main(int ac, char **av) {
    if (ac == 2) {
        Converter converter(av[1]);
        converter.toChar()->toInt()->toFloat()->toDouble();
    } else if (ac > 2) std::cerr << "Too many arguments" << std::endl;
    else std::cerr << "Run program with single arguments" << std::endl;
    return 0;
}
