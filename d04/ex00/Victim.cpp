/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:06:53 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 17:41:22 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) {
    _name = name;
    std::cout << "Some random victim called " << _name
        << " just popped !" << std::endl;
}

Victim::~Victim() {
    std::cout << "Victim " << _name
        << " just died for no apparent reason !" << std::endl;
}

Victim::Victim(Victim& other) {
    *this = other;
}

Victim&     Victim::operator=(Victim& other) {
    if (this != &other) {
        this->_name = other._name;
    }
    return (*this);
}

std::string Victim::getName() const {
    return (_name);
}

void    Victim::getPolymorphed() const {
    std::cout << _name << " has been turned into a cute little sheep !" 
        << std::endl;
}

std::ostream& operator<<( std::ostream& out, Victim& in ) {
    out << "I'm " << in.getName()
        << " and I like otters !" << std::endl;
    return (out);
}