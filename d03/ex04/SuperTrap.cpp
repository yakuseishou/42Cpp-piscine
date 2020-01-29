/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 00:53:09 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/16 16:15:02 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "ClapTrap.hpp"

SuperTrap::SuperTrap(void) {}

SuperTrap::SuperTrap(std::string name) : ClapTrap(),
        FragTrap(), NinjaTrap() {
    this->setHp(FragTrap::_hp);
    this->setMhp(FragTrap::_mHP);
    this->setEp(NinjaTrap::_ep);
    this->setMep(NinjaTrap::_mEP);
    this->setName(name);
    this->setLv(1);
    this->setMAtk(NinjaTrap::_mAtk);
    this->setRAtk(FragTrap::_rAtk);
    this->setDra(FragTrap::_dra);
    
    std::cout << "As lightning falls onto an metal box, an sleeping robot SUP-TP <"
    << this->getName() << "> awoken and replys \"It is I\"!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& other) : ClapTrap(other) {
    std::cout << "Copy Constructor called" << std::endl;
    *this = other;
}

SuperTrap&  SuperTrap::operator=( const SuperTrap& rhs ) {
    std::cout << "operator= called" << std::endl;
    if (this != &rhs) {
        this->setHp(rhs._hp);
        this->setMhp(rhs._mHP);
        this->setEp(rhs._ep);
        this->setMep(rhs._mEP);
        this->setName(rhs._name);
        this->setLv(rhs._lv);
        this->setMAtk(rhs._mAtk);
        this->setRAtk(rhs._rAtk);
        this->setDra(rhs._dra);
    }
    return (*this);
}

SuperTrap::~SuperTrap() {
    std::cout << "SUP-TP <" << this->getName()
        << "> got knocked down and ..."
        << std::endl;
}