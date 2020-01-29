/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 00:06:41 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/13 21:13:03 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int     main() {
    FragTrap test("Bob");

    test.meleeAttack("Enemy A");
    test.rangedAttack("Enemy B");
    std::cout << std::endl;

    test.vaulthunter_dot_ext("Enemy A");
    test.vaulthunter_dot_ext("Enemy B");
    std::cout << test.getEp() << std::endl;
    test.vaulthunter_dot_ext("Enemy C");
    test.vaulthunter_dot_ext("Enemy A");
    test.vaulthunter_dot_ext("Enemy B");
    test.vaulthunter_dot_ext("Enemy C");
    std::cout << std::endl;

    test.takeDamage(6);
    FragTrap a = FragTrap(test);
    a.takeDamage(10);
    std::cout << a.getHp() << std::endl;

    a.beRepaired(2);

    std::cout << a.getHp() << std::endl;
    std::cout << a.getEp() << std::endl;

    return (0);
}