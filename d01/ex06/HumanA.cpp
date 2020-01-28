/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 16:31:54 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/04 00:48:52 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string s, Weapon& w) : _w(w) {
    _name = s;
    return ;
}

HumanA::~HumanA() {
    return ;
}

void    HumanA::attack() {
    std::cout << _name << " attack with " << _w.getType() << std::endl;
    return ;
}