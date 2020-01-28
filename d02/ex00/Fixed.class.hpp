/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 22:10:06 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/07 16:49:09 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed
{
private:
    int _fpv;
    static const int _frab = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& other);
    Fixed& operator=( const Fixed& other );
    int     getRawBits( void ) const;
    void    setRawBits(int const raw);
};

#endif