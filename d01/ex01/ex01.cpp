/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/31 16:43:11 by kchen2            #+#    #+#             */
/*   Updated: 2019/12/31 17:03:08 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    memoryLeak() {
    std::string*    panthere = new std::string("String panthere");

    std::cout << *panthere << std::endl;
    delete panthere;
    return ;
}