/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 01:56:58 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/14 22:33:51 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <random>

const unsigned int FragTrap::_mHP = 100;
const unsigned int FragTrap::_mEP = 100;

FragTrap::FragTrap( void ) {}

FragTrap::FragTrap(std::string name) : _hp(100), 
    _ep(100), _name(name), _lv(1), _mAtk(30), _rAtk(20), _adr(5) {
    std::cout << "As lightning falls onto an metal box, an sleeping robot FR4G-TP <" << _name << "> is awoken!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FR4G-TP <" << _name << "> got it's battery knocked out it's body and cease to function..." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) {
    std::cout << "Copy Constructor called" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=( const FragTrap& rhs ) {
    std::cout << "operator= called" << std::endl;
    if (this != &rhs) {
        this->_hp =     rhs._hp;
        this->_ep =     rhs._ep;
        this->_name =   rhs._name;
        this->_lv =     rhs._lv;
        this->_mAtk =   rhs._mAtk;
        this->_rAtk =   rhs._rAtk;
        this->_adr =    rhs._adr;
    }
    return (*this);
}

void    FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP <" << _name << "> trips over and shoot rockets into the sky." << std::endl;
    std::cout << "<" << target << "> got hit by unexpected rocket explorsion from the back and <" << _rAtk << "> points of damage dealt!!" << std::endl;
}

void    FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP <" << _name << "> Drop the Hammer on " 
        << "<" << target << ">.  <" << _mAtk << "> points of damage dealt!!" << std::endl;
}

void    FragTrap::missed(std::string const & target) {
    std::cout << "FR4G-TP <" << _name << "> press down the trigger and nothing happened, the barrel was empty @A@!" << std::endl;
    std::cout << "No damage was dealt to " << target << "." << std::endl;
}

void    FragTrap::spAtkA(std::string const & target) { //sprayNPray
    int     dmg = 0;//random it b/n 0 - 36

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> uid(0, 36);
    dmg = uid(gen);
    
    std::cout << "FR4G-TP <" << _name << "> takes out a machine-gun and start shooting randomly till the barrel is empty." << std::endl;
    if (dmg == 0)
        std::cout << "None of the bullet hits target, < 0 > points of damage dealt!!" << std::endl;
    else
        std::cout << target << " got hit by some stray bullet <" << dmg << "> is dealt." << std::endl;
}

void    FragTrap::spAtkB(std::string const & target) { //grenade
    std::cout << "FR4G-TP <" << _name << "> launches a grenade towards the enemy." << std::endl;
    std::cout << "grenade detonate near <" << target << "> <35> damage is dealt!" << std::endl; 
}

typedef struct
{
	void		(FragTrap::*func)(const std::string&);
}				func_atk;

void    FragTrap::vaulthunter_dot_ext(std::string const & target) {
    const int atk_TOTAL = 5;
    int       i;

    if (_ep < 25)
        std::cout << "o...u..t ..o...f. ...e..n...e..r...g.." << std::endl;
    else {
        _ep -= 25;
        func_atk	atk_action[atk_TOTAL] =
        {
        	{ &FragTrap::meleeAttack },
        	{ &FragTrap::rangedAttack },
            { &FragTrap::missed },
            { &FragTrap::spAtkA },
            { &FragTrap::spAtkB }
        };

        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> uid(0, 1000);
        i = uid(gen) % 5;
        (*this.*atk_action[i].func)(target);
    }
}

void    FragTrap::takeDamage(unsigned int amount)
{
    unsigned int     dmg = 0;
    
    if (amount >= _adr)
        dmg = amount - _adr;
    std::cout << "FR4G-TP <" << _name << "> takes <" << dmg << "> amount of dmg, ";
    if (_hp < dmg) {
        _hp = 0;
        std::cout << "FR4G-TP <" << _name << "> is knocked down" << std::endl;
    }
    else {
        _hp -= dmg;
        std::cout << "FR4G-TP <" << _name << "> remains with " << _hp << "of HP" << std::endl;
    }
}

void    FragTrap::beRepaired(unsigned int amount)
{
    _hp += amount;
    std::cout << "Kon Kon kinn... as tools hammering away at FR4G-TP <" << _name << ">'s body, ";
    std::cout << "FR4G-TP <" << _name << "> regain " << amount << " of HP!" << std::endl;
    if (_hp > _mHP)
        _hp = _mHP;
}

unsigned int    FragTrap::getLv() {
    return (_lv);
}

unsigned int    FragTrap::getHp() {
    return (_hp);
}

unsigned int    FragTrap::getEp() {
    return (_ep);
}
