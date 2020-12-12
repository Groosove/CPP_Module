//
// Created by Регина on 08.12.2020.
//

#include "Converter.hpp"
Converter::~Converter() {}
Converter::Converter() : _value(nullptr) {}
Converter & Converter::operator=(const Converter &converter) { this->_value = converter._value; return *this; }
Converter::Converter(const Converter &converter) { *this = converter; }
Converter::Converter(std::string const &value): _value(value) {}

Converter* Converter::toChar() {
    if (_value.length() == 1 && !std::isdigit(_value[0]) && std::isprint(_value[0]))
        std::cout << "char: '" << _value[0] << "'" << std::endl;
    else if (_value == "nan" || _value == "inf")
        std::cout << "char: impossible" << std::endl;
    else
        try {
            int value = std::stoi(_value);
            if (value >= -128 && value < 128) (std::isprint(value)) ?
                std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl :
                std::cout << "char: Non displayable" << std::endl;
            else std::cout << "char: impossible" << std::endl ;
        } catch (std::exception &e) { std::cout << "char: impossible" << std::endl; }
    return this;
}

Converter* Converter::toInt() {
    if (_value == "nan" || _value == "inf")
        std::cout << "int: impossible" << std::endl;
    else try { std::cout << "int: " << std::stoi(_value) << std::endl; }
        catch (std::exception &e) { std::cout << "int: impossible"; }
    return this;
}

Converter* Converter::toFloat() {
    if (_value == "nan" || _value == "inf")
        std::cout << "float: " << std::stof(_value) << "f" << std::endl;
    else try { std::cout << "float: " << std::fixed << std::setprecision(1) << std::stof(_value) << "f"<< std::endl; }
        catch (std::exception &e) { std::cout << "float: impossible"; }
    return this;
}

Converter* Converter::toDouble() {
    if (_value == "nan" || _value == "inf")
        std::cout << "double: " << std::stod(_value) << std::endl;
    else try { std::cout << "double: " << std::fixed << std::setprecision(1) << std::stod(_value) << std::endl; }
        catch (std::exception &e) { std::cout << "double: impossible"; }
    return this;
}
