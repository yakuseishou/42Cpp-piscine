/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 01:56:58 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 15:45:21 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <random>

FragTrap::FragTrap( void ) {}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->setHp(100);
    this->setMhp(100);
    this->setEp(100);
    this->setMep(100);
    this->setName(name);
    this->setLv(1);
    this->setMAtk(30);
    this->setRAtk(20);
    this->setDra(5);
    std::cout << "As lightning falls onto an metal box, an sleeping robot FR4G-TP <"
        << this->getName() << "> is awoken!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FR4G-TP <" << this->getName()
        << "> got it's battery knocked out it's body and cease to function..."
        << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
    std::cout << "Copy Constructor called" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=( const FragTrap& rhs ) {
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

void    FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP <" << this->getName() 
        << "> trips over and shoot rockets into the sky." << std::endl;
    std::cout << "<" << target 
        << "> got hit by unexpected rocket explorsion from the back and <" 
        << this->getRAtk() << "> points of damage dealt!!" << std::endl;
}

void    FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP <" << this->getName() << "> Drop the Hammer on " 
        << "<" << target << ">.  <" << this->getMAtk()
        << "> points of damage dealt!!" << std::endl;
}

void    FragTrap::missed(std::string const & target) {
    std::cout << "FR4G-TP <" << this->getName()
        << "> press down the trigger and nothing happened, the barrel was empty @A@!"
        << std::endl;
    std::cout << "No damage was dealt to " << target << "." << std::endl;
}

void    FragTrap::spAtkA(std::string const & target) {
    unsigned int     dmg = 0;//random it b/n 0 - 36

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> uid(0, 36);
    dmg = uid(gen);
    
    std::cout << "FR4G-TP <" << this->getName()
        << "> takes out a machine-gun and start shooting randomly till the barrel is empty."
        << std::endl;
    if (dmg == 0)
        std::cout << "None of the bullet hits target, < 0 > points of damage dealt!!"
            << std::endl;
    else
        std::cout << target << " got hit by some stray bullet <" 
            << dmg << "> is dealt." << std::endl;
}

void    FragTrap::spAtkB(std::string const & target) { //grenade
    std::cout << "FR4G-TP <" << this->getName()
        << "> launches a grenade towards the enemy." << std::endl;
    std::cout << "grenade detonate near <" << target
        << "> <35> damage is dealt!" << std::endl; 
}

typedef struct
{
	void		(FragTrap::*func)(const std::string&);
}				func_atk;

void    FragTrap::vaulthunter_dot_ext(std::string const & target) {
    const int atk_TOTAL = 5;
    int       i;

    if (this->getEp() < 25)
        std::cout << "o...u..t ..o...f. ...e..n...e..r...g.." << std::endl;
    else {
        this->setEp(this->getEp() - 25);
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
    unsigned int     dmg = this->dmgCal(amount);
    
    std::cout << "FR4G-TP <" << this->getName() << "> takes <" 
        << dmg << "> amount of dmg, ";
    if (this->getHp() == 0)
        std::cout << "FR4G-TP <" << this->getName()
            << "> is knocked down" << std::endl;
    else
        std::cout << "FR4G-TP <" << this->getName()
            << "> remains with " << this->getHp() << "of HP" << std::endl;
}

void    FragTrap::beRepaired(unsigned int amount)
{
    this->repairCal(amount);
    std::cout << "Kon Kon kinn... as tools hammering away at FR4G-TP <"
        << this->getName() << ">'s body, ";
    std::cout << "FR4G-TP <" << this->getName() << "> regain "
        << amount << " of HP!" << std::endl;
}
