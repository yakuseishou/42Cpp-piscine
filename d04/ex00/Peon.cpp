/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:26:17 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 17:45:58 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"

Peon::Peon(std::string name) : Victim(name) {
    _name = name;
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon& other) : Victim(other) {
    *this = other;
}

Peon& Peon::operator=(Peon& other) {
    if (this != &other) {
        this->_name = other._name;
    }
    return (*this);
}

void    Peon::getPolymorphed() const {
    std::cout << _name << " has been turned into a pink pony !"
        << std::endl;
}