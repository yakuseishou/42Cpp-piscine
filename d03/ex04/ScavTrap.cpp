/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 14:39:27 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/14 23:22:02 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <random>

ScavTrap::ScavTrap( void ) {}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->setHp(100);
    this->setMhp(100);
    this->setEp(50);
    this->setMep(50);
    this->setName(name);
    this->setLv(1);
    this->setMAtk(20);
    this->setRAtk(15);
    this->setDra(3);

    std::cout << "As you knock on a unkown box SC4V-TP <" << this->getName() 
        << "> awoken, and request admin registration!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "SC4V-TP <" << this->getName()
        << "> blowned up, and launch off a clif." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
    std::cout << "Copy Constructor called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& rhs ) {
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

void    ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "SC4V-TP <" << this->getName()
        << "> takes out an anti-tank riffle and shoot at <" 
        << target << ">" << std::endl;
    std::cout << "Unable to handle the recoil, the aim was way off, "
        << "but the bullet still manage to glazz <" << target << "> <" 
        << this->getRAtk() << "> points of damage dealt!!" << std::endl;
}

void    ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "Knives  come out of SC4V-TP <" << this->getName()
        << ">'s finger tips, <" << this->getName()
        << "> panics and waves it's hand at the enemy randomly." << std::endl;
    std::cout << "<" << target << "> trips over and fall, while trying to dodge. <"
        << this->getMAtk() << "> points of damage dealt!!" << std::endl;
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
    std::cout << "SC4V-TP <" << this->getName() 
        << "> issues a challenge for you to complete" << std::endl;
    std::cout << "What is 1 + 1?" << std::endl;
}

void    ScavTrap::challB() {
    std::cout << "SC4V-TP <" << this->getName() 
        << "> issues a challenge for you to complete" << std::endl;
    std::cout << "Please go to the mine \"craft\" and bring me back 12 \"Iron\"."
        << std::endl;
}

void    ScavTrap::challC() {
    std::cout << "SC4V-TP <" << this->getName() 
        << "> issues a challenge for you to complete" << std::endl;
    std::cout << "Hunt 6 pack of mussels, at the lake \"Ponder\"." << std::endl;
}



typedef struct
{
	void		(ScavTrap::*func)();
}				func_chall;

void    ScavTrap::challengeNewcomer() {// need new msg for a new trap
    const int atk_TOTAL = 3;
    int       i;

    if (this->getEp() < 15)
        std::cout << "Quest complete, but I fked up the door when I was messing with it last time."
        << "You gotta find another entrance =D!" << std::endl;
    else {
        this->setEp(this->getEp() - 15);
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
    unsigned int     dmg = this->dmgCal(amount);
    
    std::cout << "SC4V-TP <" << this->getName() << "> takes <" 
        << dmg << "> amount of dmg, ";
    if (this->getHp() == 0)
        std::cout << "SC4V-TP <" << this->getName() 
            << "> malfunctions and twitches in place." << std::endl;
    else 
        std::cout << "SC4V-TP <" << this->getName() << "> remains with " 
            << this->getHp() << "of HP." << std::endl;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    this->repairCal(amount);
    std::cout << "Nano Machine sprays out of SC4V-TP <" 
        << this->getName() << ">'s body, and repair ";
    std::cout << "SC4V-TP <" << this->getName() << "> <" 
        << amount << "> of HP!" << std::endl;
}
