//
// Created by Регина on 10.12.2020.
//

#include "Array.hpp"

int main() {
    Array<double> tmp_arr;
    Array<int> tmp2_arr(7);

    std::cout << tmp2_arr.size() << std::endl;
    try { std::cout << tmp2_arr[7] << std::endl; }
    catch (std::exception &e) { std::cerr << e.what() << std::endl; }
    tmp2_arr[0] = 5;
    Array<int> cp_arr = tmp2_arr;
    std::cout << cp_arr[0] << std::endl;
    Array<int> cp_constructor(tmp2_arr);
    std::cout << cp_constructor[0] << std::endl;
    return 0;
}