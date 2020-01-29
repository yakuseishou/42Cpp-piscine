/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 16:42:51 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/23 17:34:49 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T, typename FUNC>
void    iter(T *arr, int len, FUNC f) {
    for (int i = 0; i < len; i++) {
        f(arr[i]);
    }
}

template< typename T>
void   to_minuOne(T & c) {
        c -= 1;
}

template< typename T>
void    prin(T & c) {
    std::cout << c;
}

int     main() {
    char s[4] = {'h', 'e', 'e', 'f'};

    std::cout << s << std::endl;

    iter(s, 4, ::to_minuOne<char>);

    std::cout << s << std::endl;

    int  arr[10] = {1, 3, 4, 6, 7, 8, 9, 0, 3, 5};

    iter(arr, 10, ::prin<int>);
    std::cout << std::endl;

    iter(arr, 10, ::to_minuOne<int>);

    iter(arr, 10, ::prin<int>);
    
    return (0);
}