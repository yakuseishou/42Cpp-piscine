/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:26:57 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 23:56:28 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) {
    _wName = name;
    _wAp = apcost;
    _wDmg = damage;
}

AWeapon::~AWeapon() {
}

AWeapon::AWeapon(AWeapon& other) {
    *this = other;
}

AWeapon&        AWeapon::operator=(AWeapon& other) {
    if (this != &other) {
        this->_wName = other._wName;
        this->_wAp = other._wAp;
        this->_wDmg = other._wDmg;
    }
    return (*this);
}


std::string     AWeapon::getName() const {
    return (_wName);
}

int             AWeapon::getAPCost() const {
    return (_wAp);
}

int             AWeapon::getDamage() const {
    return (_wDmg);
}

void            AWeapon::setName(std::string const& name) {
    _wName = name;
}

void             AWeapon::setAPCost(int apcost) {
    _wAp = apcost;
}

void             AWeapon::setDamage(int damage) {
    _wDmg = damage;
}


void            AWeapon::attack() const {
}
