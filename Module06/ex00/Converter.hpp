//
// Created by Регина on 08.12.2020.
//

#ifndef MODULE06_CONVERTER_HPP
#define MODULE06_CONVERTER_HPP

#include <iostream>
#include <iomanip>

class Converter {
public:
    Converter(std::string const &str);
    Converter();
    Converter(const Converter&);
    Converter & operator=(const Converter&);
    ~Converter();
    Converter* toChar();
    Converter* toInt();
    Converter* toDouble();
    Converter* toFloat();

private:
    std::string _value;
};


#endif //MODULE06_CONVERTER_HPP
