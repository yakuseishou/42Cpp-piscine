/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 23:02:53 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/16 00:24:09 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int     main() {
    Character* zaz = new Character("zaz");

    std::cout << *zaz;

    Enemy* a = new SuperMutant();
    Enemy* b = new RadScorpion();

    AWeapon* pr = new PlasmaRiffle();
    AWeapon* pf = new PowerFist();

    zaz->attack(b);
    std::cout << *zaz;
    
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);

    zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;

    zaz->attack(a);
    std::cout << *zaz;
    zaz->attack(a);
    std::cout << *zaz;
    zaz->attack(a);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(a);
    std::cout << *zaz;

    zaz->recoverAP();
    zaz->attack(a);
    std::cout << *zaz;
    std::cout << a->getHP() << std::endl;

    delete zaz;
    delete pr;
    delete pf;
    if (b->getHP() > 0)
        delete b;
    if (a->getHP() > 0)
        delete a;
    return (0);
}