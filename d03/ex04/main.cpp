/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 00:06:41 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/16 15:24:36 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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
    test.takeDamage(10);
    std::cout << test.getHp() << std::endl;

    test.beRepaired(2);

    std::cout << test.getHp() << std::endl;
    std::cout << test.getEp() << std::endl;

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
    std::cout << test2.getEp() << std::endl;
    test2.challengeNewcomer();

    std::cout << std::endl;
    std::cout << "*********************************************************" << std::endl;

    std::cout << "**********************NinjaTrap**************************" << std::endl;
    NinjaTrap test3("Kazu");

    test3.meleeAttack("Enemy A");
    test3.rangedAttack("Enemy B");
    std::cout << std::endl;

    test3.takeDamage(7);
    NinjaTrap c = NinjaTrap(test3);
    c.takeDamage(11);
    std::cout << c.getHp() << std::endl;

    c.beRepaired(5);

    std::cout << c.getHp() << std::endl;
    std::cout << c.getEp() << std::endl;

    test3.ninjaShoeBox(test);
    test3.ninjaShoeBox(test3);
    test3.ninjaShoeBox(test2);
    std::cout << test3.getEp() << std::endl;
    test3.ninjaShoeBox(test);

    std::cout << std::endl;
    std::cout << "*********************************************************" << std::endl;
    std::cout << "************************SuperTrap*************************" << std::endl;
    SuperTrap test4("Kou");

    std::cout << test4.getMAtk() << std::endl;
    std::cout << test4.getName() << std::endl;
    test4.meleeAttack("Enemy A");
    test4.rangedAttack("Enemy B");
    std::cout << std::endl;

    test4.vaulthunter_dot_ext("Enemy A");
    test4.vaulthunter_dot_ext("Enemy B");
    std::cout << test4.getEp() << std::endl;
    test4.vaulthunter_dot_ext("Enemy C");
    std::cout << std::endl;

    test4.ninjaShoeBox(test);
    test4.ninjaShoeBox(test4);
    test4.ninjaShoeBox(test2);
    std::cout << test4.getEp() << std::endl;
    test3.ninjaShoeBox(test3);
    std::cout << std::endl;



    test4.takeDamage(6);
    test4.takeDamage(10);
    std::cout << test4.getHp() << std::endl;

    test4.beRepaired(2);

    std::cout << test4.getHp() << std::endl;
    std::cout << test4.getEp() << std::endl;

    FragTrap d = FragTrap(test4);
    d.takeDamage(10);
    std::cout << d.getHp() << std::endl;

    d.beRepaired(2);

    std::cout << d.getHp() << std::endl;
    std::cout << d.getEp() << std::endl;

    std::cout << "*********************************************************" << std::endl;
    return (0);
}