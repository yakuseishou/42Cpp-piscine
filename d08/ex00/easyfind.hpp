/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 23:14:45 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/24 04:57:44 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>

template< typename T >

void     EasyFind(T t, int n) {
    int  r;
    try {
        if (std::find(t.begin(), t.end(), n) == t.end())
            throw "can not find " + std::to_string(n);
        r = *std::find(t.begin(), t.end(), n);
        std::cout << "Find " << n << " at index " << r << std::endl;
    } catch (std::string &e) {
        std::cout << e << std::endl;
    }
};

// class EasyFind {

// public:
//     EasyFind<T>(void) {};
//     ~EasyFind<T>(void) {};
//     EasyFind<T>(EasyFind& other) {*this = other};
//     EasyFind<T>& operator=(EasyFind& other) {
//         (void)other;
//         return (*this);
//     };
//     EasyFind<T> Ezf() const {
//         for (int i = 0; i < )
//     }
//     class overLimit : public std::exception {
//         public:
//             virtual const char  *what(void) const throw() {
//                 return ("Invalid Index");
//             };
//             overLimit(void) {};
//             overLimit(const overLimit & other) {
//                 *this = other;
//             };
//             ~overLimit(void) throw() {};
//             overLimit& operator=(const overLimit &) {
//                 return (*this);
//             };
//     };
// };

#endif