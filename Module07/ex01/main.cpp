//
// Created by Регина on 10.12.2020.
//

#include "iter.hpp"

template <typename T>
void out_arr(T data) { std::cout << data << std::endl; }
int main(void) {
    std::string a[5]  = {
            "Hello World!",
            "How are you",
            "I miss you",
            "Where are you?",
            "Call me please"
    };
    iter(a, 5, &out_arr);
    int b[10]; for (int i = 0; i < 10; ++i) b[i] = i;
    iter(b, 10, &out_arr);
    return 0;
}