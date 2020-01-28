/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 22:04:35 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/03 17:42:16 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iomanip>
#include <string>
#include <sstream>

Human::Human() {
    _brain = Brain();
    return ;
}

Human::~Human() {
    return ;
}

std::string  Human::identify() {
    return (_brain.identify());
}

Brain&   Human::getBrain() {
    return (_brain);
}