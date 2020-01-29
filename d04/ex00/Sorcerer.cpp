/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 16:51:14 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 17:44:32 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) {
    _name = name;
    _title = title;
    std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer() {
    std::cout << _name << ", " << _title 
        << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer& other) {
    *this = other;
}

Sorcerer& Sorcerer::operator=(Sorcerer& other) {
    if (this != &other) {
        this->_name = other._name;
        this->_title = other._title;
    }
    return (*this);
}

std::string     Sorcerer::getName() {
    return (_name);
}

std::string     Sorcerer::getTitle() {
    return (_title);
}

void    Sorcerer::polymorph(Victim const &vic) const {
    std::cout << _name << ", " << _title << ", polymorphed "
        << vic.getName() << std::endl;
    vic.getPolymorphed();
}

void    Sorcerer::polymorph(Peon const &vic) const {
    std::cout << _name << ", " << _title << ", polymorphed "
        << vic.getName() << std::endl;
    vic.getPolymorphed();
}

std::ostream& operator<<( std::ostream& out, Sorcerer& in ) {
    out << "I am " << in.getName() << ", " << in.getTitle()
        << ", and I like ponies !" << std::endl;
    return (out);
}
