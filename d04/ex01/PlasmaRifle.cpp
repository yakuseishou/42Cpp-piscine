/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:33:24 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 23:57:21 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRiffle::PlasmaRiffle()
    : AWeapon("Plasma Rifle", 21, 5) {
    this->setName("Plasma Rifle");
    this->setDamage(21);
    this->setAPCost(5);
}

PlasmaRiffle::~PlasmaRiffle() {}

PlasmaRiffle::PlasmaRiffle(PlasmaRiffle& other) 
    : AWeapon(other) {
    *this = other;
}

PlasmaRiffle& PlasmaRiffle::operator=(PlasmaRiffle& other) {
    if (this != &other) {
        this->setName(other.getName());
        this->setAPCost(other.getAPCost());
        this->setDamage(other.getDamage());
    }
    return (*this);
}

void    PlasmaRiffle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}