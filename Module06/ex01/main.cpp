//
// Created by Регина on 10.12.2020.
//

#include <iostream>
struct Data {
    std::string str1;
    int number;
    std::string str2;
};

void * serialize(void) {
    std::srand(time(0));
    char *res = new char[20];
    *reinterpret_cast<int*>(&res[8]) = std::rand();
    for (int i = 0, j = 12; i < 8 && j < 20; ++i, ++j) {
        res[i] = "abcdefghijklmnopqrstuvwxyz"[std::rand() % 26];
        res[j] = "abcdefghijklmnopqrstuvwxyz"[std::rand() % 26];
    }
    return res;
}

Data *deserialize(void *raw) {
    Data *data = new Data;

    data->str1 = std::string(reinterpret_cast<char*>(raw), 8);
    data->str2 = std::string(&reinterpret_cast<char*>(raw)[12], 8);
    data->number = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
    return data;
}

int main() {
    void *str = serialize();
    Data *data = deserialize(str);

    std::cout << "str: " << static_cast<char*>(str) << std::endl;
    std::cout << "str1: " << data->str1 << std::endl;
    std::cout << "number: " << data->number << std::endl;
    std::cout << "str2: " << data->str2 << std::endl;

    delete static_cast<char*>(str);
    delete data;
}