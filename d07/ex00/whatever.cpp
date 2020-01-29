/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 16:04:33 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/27 16:48:02 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

template< typename T >

void    swap( T & x, T & y ) {
    T tmp = x;
    x = y;
    y = tmp;
}

template< typename T >

T const &   max( T const & x, T const & y ) {
    return (x > y ? x : y);
}

template< typename T >

T const &   min( T const & x, T const & y ) {
    return (x < y ? x : y);
}

int     main() {
    std::cout << "------------------int------------------------" << std::endl;
    int     a = 2;
    int     b = 6;

    std::cout << "max of " << a << " and " << b << std::endl;
    std::cout << ::max<int>(a, b) << std::endl;

    std::cout << "min of " << a << " and " << b << std::endl;
    std::cout << ::min<int>(a, b) << std::endl;

    swap(a, b);
    std::cout << "swap of " << a << " and " << b << std::endl;

    std::cout << "------------------float------------------------" << std::endl;
    float     c = 7;
    float     d = 3;

    std::cout << "max of " << c << " and " << d << std::endl;
    std::cout << ::max<float>(c, d) << std::endl;

    std::cout << "min of " << c << " and " << d << std::endl;
    std::cout << ::min<float>(c, d) << std::endl;

    swap(c, d);
    std::cout << "swap of " << c << " and " << d << std::endl;

    std::cout << "------------------string------------------------" << std::endl;
    std::string     e = "hella";
    std::string     f = "wprd";

    std::cout << "max of " << e << " and " << f << std::endl;
    std::cout << ::max<std::string>(e, f) << std::endl;

    std::cout << "min of " << e << " and " << f << std::endl;
    std::cout << ::min<std::string>(e, f) << std::endl;

    swap(e, f);
    std::cout << "swap of " << e << " and " << f << std::endl;

    Awesome g(2);
    Awesome h(3);
    swap(g, h);
    std::cout << "swap of " << g.getN() << " and " << h.getN() << std::endl;
    std::cout << "max of " << g.getN() << " and " << h.getN() << std::endl;
    std::cout << ::max<Awesome>(g, h).getN() << std::endl;

    std::cout << "min of " << g.getN() << " and " << h.getN() << std::endl;
    std::cout << ::min<Awesome>(g, h).getN() << std::endl;


    return (0);
}


// • swap : Swaps the values of two arguments. Does not return anything.
// • min : Compares the two arguments and returns the smallest one. If the two arguments are equal, then it returns the second one.
// • max : Compares the two arguments and returns the biggest one. If the two arguments are equal, then it returns the second one.