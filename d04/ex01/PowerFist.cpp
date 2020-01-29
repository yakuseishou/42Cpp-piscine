/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:50:52 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 23:13:39 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist()
    : AWeapon("Power Fist", 50, 8) {
    this->setName("Power Fist");
    this->setDamage(50);
    this->setAPCost(8);
}

PowerFist::~PowerFist() {}

PowerFist::PowerFist(PowerFist& other) 
    : AWeapon(other) {
    *this = other;
}

PowerFist& PowerFist::operator=(PowerFist& other) {
    if (this != &other) {
        this->setName(other.getName());
        this->setAPCost(other.getAPCost());
        this->setDamage(other.getDamage());
    }
    return (*this);
}

void    PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}