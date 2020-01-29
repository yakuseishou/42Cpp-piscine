/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 22:21:31 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/16 00:01:30 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
    this->setHp(80);
    this->setType("RadScorpion");
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion& other) : Enemy(other) {
    *this = other;
}

RadScorpion&    RadScorpion::operator=(RadScorpion& other) {
    if (this != &other) {
        this->setHp(other.getHP());
        this->setType(other.getType());
    }
    return (*this);
}

// void            RadScorpion::takeDamage(int dmg) {
//     dmg -= 3;
//     if (this->getHP() <= 0 || dmg <= 0)
//         return ;
//     else
//         this->setHp(this->getHP() - dmg);
// }