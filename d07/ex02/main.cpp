/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:04:54 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/23 20:49:54 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int     main() {
    unsigned int l = 5;
    Array<int>a(5);
    for (unsigned int i = 0; i < l; i++) {
        a[i] = i;
    }
    for (unsigned int i = 0; i < l; i++) {
        std::cout << a[i];
    }
    std::cout << std::endl;

    l = 10;
    Array<char>c(l);
    for (unsigned int i = 0; i < c.size(); i++) {
        c[i] = 'a' + i;
    }
    for (unsigned int i = 0; i < c.size(); i++) {
       std::cout << c[i];
    }
    std::cout << std::endl;
    
    try {
        std::cout << c[c.size() + 1];
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}