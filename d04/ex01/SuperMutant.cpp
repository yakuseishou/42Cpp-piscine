/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:08:08 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 19:18:34 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
    this->setHp(170);
    this->setType("Super Mutant");
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant& other) : Enemy(other) {
    *this = other;
}

SuperMutant&    SuperMutant::operator=(SuperMutant& other) {
    if (this != &other) {
        this->setHp(other.getHP());
        this->setType(other.getType());
    }
    return (*this);
}

void            SuperMutant::takeDamage(int dmg) {
    dmg -= 3;
    if (this->getHP() <= 0 || dmg <= 0)
        return ;
    else
        this->setHp(this->getHP() - dmg);
}
