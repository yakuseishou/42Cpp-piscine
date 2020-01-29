/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 22:28:33 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/16 16:38:44 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name) : _name(name), _lv(1) {
    std::cout << "Find an unusual metal box <" << _name << ">." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    std::cout << "Clap copied itself!!?" << std::endl;
    *this = other;
}

ClapTrap&  ClapTrap::operator=( const ClapTrap& rhs ) {
    std::cout << "Clap = Clap!!?" << std::endl;
    if (this != &rhs) {
        this->_hp =     rhs._hp;
        this->_ep =     rhs._ep;
        this->_name =   rhs._name;
        this->_lv =     rhs._lv;
        this->_mAtk =   rhs._mAtk;
        this->_rAtk =   rhs._rAtk;
        this->_dra =    rhs._dra;
    }
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap <" << _name << "> has shut down..." << std::endl;
}

void    ClapTrap::rangedAttack(std::string const & target) {
    std::cout << "ClapTrap <" << _name << " shut <" << target
        << "> with a pistol and dealt >" << _rAtk
        << "> amount of damage." << std::endl;
}

void    ClapTrap::meleeAttack(std::string const & target) {
    std::cout << "ClapTrap <" << _name << " slashes <" << target
        << "> with a dagger and dealt >" << _mAtk
        << "> amount of damage." << std::endl;
}

unsigned int    ClapTrap::dmgCal(unsigned int amount) {
    unsigned int     dmg = 0;
    
    if (amount >= this->getDra())
        dmg = amount - this->getDra();
    if (this->getHp() < dmg)
        this->setHp(0);
    else
        this->setHp(this->getHp() - dmg);
    return (dmg);
}

void    ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap <" << _name << " takes <" << amount
        << "> amount of damage." << std::endl;
    unsigned int     dmg = this->dmgCal(amount);
    
    std::cout << "ClapTrap <" << _name << "> takes <" << dmg << "> amount of dmg, ";
    if (_hp == 0)
        std::cout << "ClapTrap <" << _name << "> is K.O.ED" << std::endl;
    else
        std::cout << "ClapTrap <" << _name << "> remains with "
            << _hp << "of HP" << std::endl;
}

void    ClapTrap::repairCal(unsigned int amount) {
    unsigned int     h = this->getHp() + amount;

    if (h > _mHP)
        this->setHp(_mHP);
    else
        this->setHp(h);
}

void    ClapTrap::beRepaired(unsigned int amount) {
    this->repairCal(amount);
    std::cout << "Kon Kon kinn... as tools hammering away at FR4G-TP <" << _name << ">'s body, ";
    std::cout << "FR4G-TP <" << _name << "> regain " << amount << " of HP!" << std::endl;
}

void    ClapTrap::setHp(unsigned int n) {
    _hp = n;
}

void    ClapTrap::setEp(unsigned int n) {
    _ep = n;
}

void    ClapTrap::setName(std::string name) {
    _name = name;
}

void    ClapTrap::setLv(unsigned int n) {
    _lv = n;
}

void    ClapTrap::setMAtk(unsigned int n) {
    _mAtk = n;
}

void    ClapTrap::setRAtk(unsigned int n) {
    _rAtk = n;
}

void    ClapTrap::setDra(unsigned int n) {
    _dra = n;
}

void    ClapTrap::setMhp(unsigned int n) {
    _mHP = n;
}

void    ClapTrap::setMep(unsigned int n) {
    _mEP = n;
}

unsigned int    ClapTrap::getHp() {
    return (_hp);
}

unsigned int ClapTrap::getMhp() const {
    return (_mHP);
}

unsigned int    ClapTrap::getEp() {
    return (_ep);
}

unsigned int ClapTrap::getMep() const {
    return (_mEP);
}

std::string    ClapTrap::getName() {
    return (_name);
}

unsigned int    ClapTrap::getLv() {
    return (_lv);
}

unsigned int    ClapTrap::getMAtk() {
    return (_mAtk);
}

unsigned int    ClapTrap::getRAtk() {
    return (_rAtk);
}

unsigned int    ClapTrap::getDra() {
    return (_dra);
}


