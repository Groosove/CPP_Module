//
// Created by Регина on 10.12.2020.
//

#include "whatever.hpp"

int main(void) {
    int a = 5, b = 10;
    std::cout << "a = " << a << "\nb = " << b << std::endl;
    swap(a, b);
    std::cout << "a = " << a << "\nb = " << b << std::endl;
    swap(a, b);
    std::cout << std::endl;
    std::cout << "max(a,b) = " << max(a, b) << std::endl;
    std::cout << "min(a,b) = " << min(a, b) << std::endl;
}