/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 23:49:28 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/24 05:21:48 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>
#include <vector>

int     main() {
    std::array<int, 5> arr1 = {{2, 3, 45, 7, 11}};
    std::vector<int> arr3   = { 2, 3, 45, 7, 11 };
    std::cout << "------------------find 3 in the array which is index 1------------------------" << std::endl;
    EasyFind(arr1, 3);
    EasyFind(arr3, 3);

    std::cout << "------------------no 5 in the array------------------------" << std::endl;
    EasyFind(arr1, 5);
    EasyFind(arr3, 5);

    return (0);
}