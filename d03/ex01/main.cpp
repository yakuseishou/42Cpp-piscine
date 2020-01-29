/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 00:06:41 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/13 21:34:12 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int     main() {
    std::cout << "************************FragTrap*************************" << std::endl;
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

    std::cout << "*********************************************************" << std::endl;
    std::cout << "**********************ScavTrap***************************" << std::endl;
    ScavTrap test2("Joe");

    test2.meleeAttack("Enemy A");
    test2.rangedAttack("Enemy B");
    std::cout << std::endl;

    test2.takeDamage(7);
    ScavTrap b = ScavTrap(test2);
    b.takeDamage(11);
    std::cout << b.getHp() << std::endl;

    b.beRepaired(5);

    std::cout << b.getHp() << std::endl;
    std::cout << b.getEp() << std::endl;

    test2.challengeNewcomer();
    test2.challengeNewcomer();
    test2.challengeNewcomer();
    std::cout << test.getEp() << std::endl;
    test2.challengeNewcomer();

    std::cout << std::endl;
    std::cout << "*********************************************************" << std::endl;

    return (0);
}