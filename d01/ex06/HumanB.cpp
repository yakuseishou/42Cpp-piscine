/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 00:27:24 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/04 01:03:41 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string s) {
    _name = s;
    _w = NULL;
    return ;
}

HumanB::~HumanB() {
    return ;
}

void    HumanB::setWeapon(Weapon& w) {
    _w = &w;
    return ;
}

void    HumanB::attack() {
    std::cout << _name << " attack with " << _w->getType() << std::endl;
    return ;
}