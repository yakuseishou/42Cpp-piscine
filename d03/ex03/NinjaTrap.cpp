/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 20:39:45 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 15:45:14 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <random>

NinjaTrap::NinjaTrap(void) {}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) { //new output msg required
    this->setHp(60);
    this->setMhp(60);
    this->setEp(120);
    this->setMep(120);
    this->setName(name);
    this->setLv(1);
    this->setMAtk(60);
    this->setRAtk(5);
    this->setDra(0);
    std::cout << "As you knock on the box and says \"knock knock who is there\" N1nj4-TP <"
        << this->getName() << "> awoken and replys \"It is I\"!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& other) : ClapTrap(other) {
    std::cout << "NinjaTrap has cloned itself" << std::endl;
    *this = other;
}

NinjaTrap&  NinjaTrap::operator=( const NinjaTrap& rhs ) {
    std::cout << "Ninja Trap has switched place with it's clone" << std::endl;
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

NinjaTrap::~NinjaTrap() { //new output msg required
    std::cout << "N1nj4-TP <" << this->getName()
        << "> dramaticly falls onto the floor and cease to function..."
        << std::endl;
}

void    NinjaTrap::rangedAttack(std::string const & target)
{
    std::cout << "N1nj4-TP <" << this->getName()
        << "> launches waves of shiriken at <" 
        << target << ">" << std::endl;
    std::cout << "Unable to dodge the large amount of shiriken"
        << target << "> takes <" << this->getRAtk() 
        << "> points of damage dealt!!" << std::endl;
}

void    NinjaTrap::meleeAttack(std::string const & target)
{
    std::cout << "N1nj4-TP <" << this->getName() << "> uses zipzap bat." 
        << std::endl;
    std::cout << "<" << target << "> takes <"
        << this->getMAtk() << "> points of damage, and is paralysized for 5 second!" 
        << std::endl; 
}

void    NinjaTrap::takeDamage(unsigned int amount)
{
    unsigned int     dmg = this->dmgCal(amount);
    
    std::cout << "N1nj4-TP <" << this->getName() << "> takes <" 
        << dmg << "> amount of dmg, ";
    if (this->getHp() == 0)
        std::cout << "N1nj4-TP <" << this->getName() 
            << "> malfunctions and twitches in place." << std::endl;
    else 
        std::cout << "N1nj4-TP <" << this->getName() << "> remains with " 
            << this->getHp() << "of HP." << std::endl;
}

void    NinjaTrap::beRepaired(unsigned int amount)
{
    this->repairCal(amount);
    std::cout << "N1nj4-TP <" << this->getName()
    << "> takes out ducktape and tapes over it's own parts, and repair ";
    std::cout << "N1nj4-TP <" << this->getName() << "> <" 
        << amount << "> of HP!" << std::endl;
}

typedef struct
{
	void		(NinjaTrap::*func)(ClapTrap&);
}				func_trick;

void    NinjaTrap::mAtkbuff(ClapTrap& ct) {
    std::cout << "N1nj4-TP <" << this->getName()
    << "> takes out poisonous liquid and applied it on <"
    << ct.getName() << ">'s weapon increase mAtk by 6"
    << std::endl;
    ct.setMAtk(ct.getMAtk() + 6);
}

void    NinjaTrap::drabuff(ClapTrap& ct) {
    std::cout << "N1nj4-TP <" << this->getName()
    << "> punches the ground and create a stone wall in front of <"
    << ct.getName() << ">'s defence increase by 5"
    << std::endl;
    ct.setDra(ct.getDra() + 6);
}

void    NinjaTrap::healing(ClapTrap& ct) {
    std::cout << "N1nj4-TP <" << this->getName()
    << "> takes out a potion and dump it on <"
    << ct.getName() << ">'s head and heals <"
    << ct.getName() << "> by 10 hp."
    << std::endl;
    ct.repairCal(10);
}

void    NinjaTrap::ninjaShoeBox(ClapTrap& ct) {
        const int buff_TOTAL = 3;
        int       i;

        if (this->getEp() < 25)
            std::cout << "o...u..t ..o...f. ...e..n...e..r...g.." << std::endl;
        else {
            this->setEp(this->getEp() - 25);
            func_trick	buff_action[buff_TOTAL] =
            {
                { &NinjaTrap::mAtkbuff },
                { &NinjaTrap::drabuff },
                { &NinjaTrap::healing }
            };

            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<> uid(0, 1000);
            i = uid(gen) % 3;
            (*this.*buff_action[i].func)(ct);
        }
}