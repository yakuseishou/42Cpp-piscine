/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 22:10:06 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/09 00:06:43 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <fstream>

class Fixed {
private:
    int _fpv;
    static const int _frab = 8;
public:
    Fixed();
    Fixed(const Fixed& other);
    Fixed(const int x);
    Fixed(const float y);
    ~Fixed();
    Fixed& operator=( const Fixed& rhs );
    int     getRawBits( void ) const;
    void    setRawBits(int const raw);
    float   toFloat( void ) const;
    int     toInt( void ) const;
};

std::ostream& operator<<( std::ostream& out, const Fixed& other );

#endif