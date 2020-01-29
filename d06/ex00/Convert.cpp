/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:49:47 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/22 21:19:42 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <ios>
#include <string>
#include <cmath>

Convert::Convert(void) {}

Convert::Convert(std::string s) : _in(s) {
    try {
        if (s.length() == 1 && !isdigit(s[0])) {
            _inD = static_cast<double>(s[0]);
        }
        else
            _inD = std::stod(s);
    } catch (std::exception& e) {
        std::cout << "Invalid input" << std::endl;
        exit(EXIT_FAILURE);
    }
}

Convert::~Convert(void) {}

Convert::Convert(Convert& other) {
    *this = other;
}

Convert& Convert::operator=(Convert& other) {
    if (this != &other) {
        this->_in = other._in;
        this->_inD = other._inD;
    }
    return (*this);
}

void    Convert::ToChar(void) {
    std::cout << "char: ";
    if (std::isnan(_inD))
        std::cout << "impossible";
    else if (!isprint(_inD))
        std::cout << "Non displayable";
    else
        std::cout << "'" << static_cast<char>(_inD) << "'";
    std::cout << std::endl;
}

void    Convert::ToInt(void) {
    std::cout << "int: ";
    if (std::isinf(_inD) || std::isnan(_inD))
        std::cout << "impossible";
    else
        std::cout << static_cast<int>(_inD);
    std::cout << std::endl;
}

void    Convert::ToFloat(void) {
    std::cout << "float: ";
    if (floor(_inD) == _inD && !(std::isinf(_inD)))
        std::cout << _inD << ".0f";
    else
        std::cout << _inD << "f";
    std::cout << std::endl;
}

void    Convert::ToDouble(void) {
    std::cout << "double: ";
    if (floor(_inD) == _inD && !(std::isinf(_inD)))
        std::cout << _inD << ".0";
    else
        std::cout << _inD;
    std::cout << std::endl;
}

void    Convert::prinConvert(void) {
    this->ToChar();
    this->ToInt();
    this->ToFloat();
    this->ToDouble();
}