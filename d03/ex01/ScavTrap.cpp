/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 14:39:27 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/14 22:34:15 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <random>
// need new msg for a new trap!!!!!

const unsigned int ScavTrap::_mHP = 100;
const unsigned int ScavTrap::_mEP = 50;

ScavTrap::ScavTrap( void ) {}

ScavTrap::ScavTrap(std::string name) : _hp(100), 
    _ep(50), _name(name), _lv(1), _mAtk(20), _rAtk(15), _adr(3) {
    std::cout << "As you knock on a unkown box SC4V-TP <" << _name 
        << "> awoken, and request admin registration!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "SC4V-TP <" << _name << "> blowned up, and launch off a clif." 
        << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
    std::cout << "Copy Constructor called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& rhs ) {
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

void    ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "SC4V-TP <" << _name << "> takes out an anti-tank riffle and shoot at <" 
        << target << ">" << std::endl;
    std::cout << "Unable to handle the recoil, the aim was way off, " <<
        "but the bullet still manage to glazz <" << target << "> <" 
        << _rAtk << "> points of damage dealt!!" << std::endl;
}

void    ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "Knives  come out of SC4V-TP <" << _name << ">'s finger tips, <" 
    << _name << "> panics and waves it's hand at the enemy randomly." << std::endl;
    std::cout << "<" << target << "> trips over and fall, while trying to dodge. <" << _mAtk 
        << "> points of damage dealt!!" << std::endl;
}

// void    ScavTrap::missed(std::string const & target) {
//     int     rec = 0;//random it b/n 0 - 36

//     std::random_device rd;
//     std::mt19937 gen(rd());
//     std::uniform_int_distribution<> uid(0, 12);
//     rec = uid(gen);

//     std::cout << "SC4V-TP <" << _name 
//         << "> takes out a ball shaped object, thinking it's a bomb and toss at <"
//         << target << ">, but it was a nano-machine repair pack." << std::endl;
//     std::cout << target << "recovered <" << rec << "> amount HP." << std::endl;
// }

// void    ScavTrap::spAtkA(std::string const & target) {
//     int     n = 0;//random it b/n 0 - 36

//     std::random_device rd;
//     std::mt19937 gen(rd());
//     std::uniform_int_distribution<> uid(0, 6);
//     n = uid(gen);
    
//     std::cout << "SC4V-TP <" << _name 
//         << "> opens up all it's missle pots and launches all the missles." 
//         << std::endl;
//     if (n == 0)
//         std::cout << target << "swiftly dodges all the missles, <0> points of damage dealt!!" 
//             << std::endl;
//     else
//         std::cout << target << " unable to dodges the swarm of missles, <"
//             << (n * 8) << "> points of damage is dealt." << std::endl;
// }

// void    ScavTrap::spAtkB(std::string const & target) {
//     std::cout << "SC4V-TP <" << _name << "> uses thunder wave." 
//         << std::endl;
//     std::cout << "<" << target << "> takes <3> points of damage, and is paralysized for 5 second!" 
//         << std::endl; 
// }

void    ScavTrap::challA() {
    std::cout << "SC4V-TP <" << _name << "> issues a challenge for you to complete" << std::endl;
    std::cout << "What is 1 + 1?" << std::endl;
}

void    ScavTrap::challB() {
    std::cout << "SC4V-TP <" << _name << "> issues a challenge for you to complete" << std::endl;
    std::cout << "Please go to the mine \"craft\" and bring me back 12 \"Iron\"." << std::endl;
}

void    ScavTrap::challC() {
    std::cout << "SC4V-TP <" << _name << "> issues a challenge for you to complete" << std::endl;
    std::cout << "Hunt 6 pack of mussels, at the lake \"Ponder\"." << std::endl;
}



typedef struct
{
	void		(ScavTrap::*func)();
}				func_chall;

void    ScavTrap::challengeNewcomer() {// need new msg for a new trap
    const int atk_TOTAL = 3;
    int       i;

    if (_ep < 15)
        std::cout << "Quest complete, but I fked up the door when I was messing with it last time."
        << "You gotta find another entrance =D!" << std::endl;
    else {
        _ep -= 15;
        func_chall	atk_action[atk_TOTAL] =
        {
        	{ &ScavTrap::challA },
        	{ &ScavTrap::challB },
            { &ScavTrap::challC }
        };

        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> uid(0, 1000);
        i = uid(gen) % 3;
        (*this.*atk_action[i].func)();
    }
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    unsigned int     dmg = 0;
    
    if (amount >= _adr)
        dmg = amount - _adr;
    std::cout << "SC4V-TP <" << _name << "> takes <" << dmg << "> amount of dmg, ";
    if (_hp < dmg) {
        _hp = 0;
        std::cout << "SC4V-TP <" << _name 
            << "> malfunctions and twitches in place." << std::endl;
    }
    else {
        _hp -= dmg;
        std::cout << "SC4V-TP <" << _name << "> remains with " 
            << _hp << "of HP." << std::endl;
    }
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    _hp += amount;
    std::cout << "Nano Machine sprays out of SC4V-TP <" 
        << _name << ">'s body, and repair ";
    std::cout << "SC4V-TP <" << _name << "> <" 
        << amount << "> of HP!" << std::endl;
    if (_hp > _mHP)
        _hp = _mHP;
}

unsigned int    ScavTrap::getLv() {
    return (_lv);
}

unsigned int    ScavTrap::getHp() {
    return (_hp);
}

unsigned int    ScavTrap::getEp() {
    return (_ep);
}
