/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 16:39:31 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/03 15:57:57 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    pony::runs() {
    std::cout << _name << " is running on the field\n";
    return ;
}

void    pony::eats() {
    std::cout << _name << " is eating grass\n";
    return ;
}

std::string  pony::get_name() {
    return (_name);
}

int     pony::get_height() {
    return (_height);
}

int     pony::get_weight() {
    return (_weight);
}

std::string  pony::get_color() {
    return (_color);
}

void   pony::create_pony() {
    std::string s;
    
    std::cout << "Enter name: ";
    std::cin >> _name;
    std::cout << "Enter Color: ";
    std::cin >> _color;
    std::cout << "Enter height: ";
    std::cin >> s;
    _height = atoi(s.c_str());
    std::cout << "Enter weight: ";
    std::cin >> s;
    _weight = atoi(s.c_str());
    return ;
}

pony::pony( void )
{
    _name = "";
    _color = "";
    _height = 0;
    _weight = 0;
    return ;
}

pony::~pony(void) {
    std::cout << _name << " has run away!!!" << std::endl;
    return ;
}