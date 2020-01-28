/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 21:05:27 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/14 16:07:50 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main() {
    std::string a = "HI THIS IS BRAIN";
    std::string *b = &a;
	std::string &c = a;

    std::cout << *b << std::endl;
    std::cout << a << std::endl;
	std::cout << c << std::endl;

	return (0);
}
