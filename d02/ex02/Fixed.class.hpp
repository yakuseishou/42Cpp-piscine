/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 22:10:06 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/09 20:47:03 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <fstream>


class Fixed {
private:
    int _fpv;
    static const int _frab;
public:
    Fixed();
    Fixed(const int x);
    Fixed(const float y);
    Fixed(const Fixed& other);
    ~Fixed();
    Fixed&  operator=( const Fixed& rhs );

    //>, <, >=, <=, == and !=.
    bool    operator>( const Fixed& rhs ) const;
    bool    operator<( const Fixed& rhs ) const;
    bool    operator>=( const Fixed& rhs ) const;
    bool    operator<=( const Fixed& rhs ) const;
    bool    operator==( const Fixed& rhs ) const;
    bool    operator!=( const Fixed& rhs ) const;
    //+, -, *, and /.
    Fixed&  operator+( const Fixed& rhs );
    Fixed&  operator-( const Fixed& rhs );
    Fixed&  operator*( const Fixed& rhs );
    Fixed&  operator/( const Fixed& rhs );

    //++, --
    Fixed   operator++( int );
    Fixed   operator--( int );
    Fixed&  operator++( void );
    Fixed&  operator--( void );

    static Fixed&    min(Fixed& a, Fixed& b);
    static const Fixed&    min(const Fixed& a, const Fixed& b);
    static Fixed&    max(Fixed& a, Fixed& b);
    static const Fixed&    max(const Fixed& a, const Fixed& b);

    int     getRawBits( void ) const;
    void    setRawBits(int const raw);
    float   toFloat( void ) const;
    int     toInt( void ) const;
};

std::ostream& operator<<( std::ostream& out, const Fixed& other );
Fixed&    min(Fixed& a, Fixed& b);
const Fixed&    min(const Fixed& a, const Fixed& b);
Fixed&    max(Fixed& a, Fixed& b);
const Fixed&    max(const Fixed& a, const Fixed& b);

#endif