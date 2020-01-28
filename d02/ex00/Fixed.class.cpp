/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 16:12:43 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 15:56:22 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    _fpv = 0;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy Constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=( const Fixed& rhs ) {
    std::cout << "Assignation Operator called" << std::endl;
   if (this != &rhs) 
   		_fpv = rhs.getRawBits();
    return (*this);
}

int     Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fpv);
}

void    Fixed::setRawBits(int const raw) {
    _fpv = raw;
}
