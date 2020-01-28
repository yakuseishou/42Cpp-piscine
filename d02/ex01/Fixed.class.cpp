/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 16:12:43 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 16:06:28 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _fpv(0) {
    std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy Constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int x) : _fpv(x << _frab) {
    std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(const float y) : _fpv(roundf(y * (1 << _frab))) {
    std::cout << "Float Constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& rhs ) {
    std::cout << "Assignation Operator called" << std::endl;
    if (this != &rhs)
        _fpv = rhs._fpv;
    return (*this);
}

int     Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (_fpv);
}

void    Fixed::setRawBits(int const raw) {
    _fpv = raw;
}

float   Fixed::toFloat( void ) const {
    return ((float)_fpv / (1 << _frab));
}

int     Fixed::toInt( void ) const {
    return (_fpv >> _frab);
}

std::ostream& operator<<( std::ostream& out, const Fixed& in ) {
    out << in.toFloat();
    return (out);
}
