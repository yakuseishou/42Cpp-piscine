/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 16:12:43 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/09 20:47:06 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_frab = 8;

Fixed::Fixed() : _fpv(0) {
    // std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const Fixed& other) {
    // std::cout << "Copy Constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int x) : _fpv(x << _frab) {
    // std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(const float y) : _fpv(roundf(y * (1 << _frab))) {
    // std::cout << "Float Constructor called" << std::endl;
}

Fixed::~Fixed() {
    // std::cout << "Deconstructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& rhs ) {
    // std::cout << "Assignation Operator called" << std::endl;
    if (this != &rhs)
        this->_fpv = rhs._fpv;
    return (*this);
}

//>, <, >=, <=, == and !=.
bool Fixed::operator>( const Fixed& rhs ) const
{
    return (_fpv > rhs._fpv);
}

bool Fixed::operator<( const Fixed& rhs ) const
{
    return (_fpv < rhs._fpv);
}

bool Fixed::operator>=( const Fixed& rhs ) const
{
    return (_fpv >= rhs._fpv);
}

bool Fixed::operator<=( const Fixed& rhs ) const
{
    return (_fpv <= rhs._fpv);
}

bool Fixed::operator==( const Fixed& rhs ) const
{
    return (_fpv == rhs._fpv);
}

bool Fixed::operator!=( const Fixed& rhs ) const
{
    return (_fpv != rhs._fpv);
}

//+, -, *, and /.
Fixed& Fixed::operator+( const Fixed& rhs )
{
    return ( *this = Fixed(this->toFloat() + rhs.toFloat()) );
}

Fixed& Fixed::operator-( const Fixed& rhs )
{
    return ( *this = Fixed(this->toFloat() - rhs.toFloat()) );
}

Fixed& Fixed::operator*( const Fixed& rhs )
{
    return ( *this = Fixed(this->toFloat() * rhs.toFloat()) );
}

Fixed& Fixed::operator/( const Fixed& rhs )
{
    return ( *this = Fixed(this->toFloat() / rhs.toFloat()) );
}

//++, --
Fixed& Fixed::operator++( void ) {  // ++a
    ++_fpv;
    return (*this);
}

Fixed& Fixed::operator--( void ) {
    --_fpv;
    return (*this);
}

Fixed Fixed::operator++( int ) { // a++
    Fixed tmp = *this;
    _fpv++;
    return (tmp);
}

Fixed Fixed::operator--( int ) {
    Fixed tmp = *this;
    _fpv--;
    return (tmp);
}


int     Fixed::getRawBits( void ) const{
    // std::cout << "getRawBits member function called" << std::endl;
    return (_fpv);
}

void    Fixed::setRawBits(int const raw) {
    _fpv = raw;
}

float   Fixed::toFloat( void ) const {
    return ((float)this->getRawBits() / (1 << _frab));
}

int     Fixed::toInt( void ) const {
    return (this->getRawBits() >> _frab);
}

std::ostream& operator<<( std::ostream& out, const Fixed& in ) {
    out << in.toFloat();
    return (out);
}

Fixed&    Fixed::min(Fixed& a, Fixed& b) {
    return (a < b ? a : b);
}

Fixed&    Fixed::max(Fixed& a, Fixed& b) {
    return (a > b ? a : b);
}

const Fixed&    Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b ? a : b);
}

const Fixed&    Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b ? a : b);
}

Fixed&    min(Fixed& a, Fixed& b) {
    return (a < b ? a : b);
}

Fixed&    max(Fixed& a, Fixed& b) {
    return (a > b ? a : b);
}

const Fixed&    min(const Fixed& a, const Fixed& b) {
    return (a < b ? a : b);
}

const Fixed&    max(const Fixed& a, const Fixed& b) {
    return (a > b ? a : b);
}