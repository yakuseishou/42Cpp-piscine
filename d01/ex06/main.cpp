/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 16:24:06 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/04 01:03:54 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int     main() {
    {
        Weapon  club = Weapon("crude spiked club");
        
        HumanA  bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack(); 
    }
    {
        Weapon  club = Weapon("crude spiked club");

        HumanB  jim("jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}