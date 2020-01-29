/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 22:37:16 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/16 00:21:01 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) {
    _cName = name;
    _cAp = 40;
    _aw = NULL;
}

Character::~Character() {
}

Character::Character(Character& other) {
    *this = other;
}

Character&      Character::operator=(Character& other) {
    if (this != &other) {
        this->_cName = other._cName;
        this->_cAp = other._cAp;
        this->_aw = other._aw;
    }
    return (*this);
}

void            Character::recoverAP() {
    if (_cAp >= 40)
        return ;
    else
        _cAp += 10;
    if (_cAp > 40)
        _cAp = 40;
}

void            Character::equip(AWeapon* aw) {
    _aw = aw;
}

void            Character::attack(Enemy* en) {
    if (!_aw || (_aw->getAPCost() > this->getAp()))
        return ;
    std::cout << "\"" << _cName << " attacks " << en->getType() << " with a "
        << _aw->getName() << "\"" << std::endl;
    _aw->attack();
    _cAp -= _aw->getAPCost();
    en->takeDamage(_aw->getDamage());
}

std::string     Character::getName() const {
    return (_cName);
}

AWeapon*        Character::getWeapon() const {
    return (_aw);
}

int             Character::getAp() const {
    return (_cAp);
}

std::ostream& operator<<( std::ostream& out, Character& in ) {
    std::cout << in.getName() << " has " << in.getAp() << " AP and ";
    if (in.getWeapon())
        std::cout << "wields a " << in.getWeapon()->getName();
    else
        std::cout << "is unarmed";
    std::cout << std::endl;
    return (out);
}
