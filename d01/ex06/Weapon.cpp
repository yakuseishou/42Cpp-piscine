/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 23:48:52 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/04 00:41:26 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) {
    _type = str;
    return ;
}

Weapon::~Weapon() {
    return ;
}

std::string Weapon::getType() {
    return (_type);
}

void        Weapon::setType(std::string str) {
    _type = str;
    return ;
}