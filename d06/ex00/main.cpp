/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 01:13:02 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/22 20:38:22 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Convert.hpp"

int     main(int ac, char *av[]) {
    if (ac == 2) {
        Convert a(av[1]);
        a.prinConvert();
    }
    else
        std::cout << "Usage: ./Convert [argument]" << std::endl;
    return (0);
}