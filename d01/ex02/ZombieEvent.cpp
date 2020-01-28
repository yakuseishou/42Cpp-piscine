/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 22:14:29 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/03 16:03:10 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string  randy() {
    std::string arr[10] = {"Yi", "Kai", "kev", "VIC", "FLIP", "kou", "Ferry","jeff","ten","zen"};
    srand(time(NULL));
    int i = (rand() % 10);
    return (arr[i]);
}

std::string typing() {
    std::string arr[10] = {"flaming", "normal", "jumping", "flaming", "normal", "jumping", "flaming", "normal", "jumping", "normall"};
    srand(time(NULL));
    int i = (rand() % 10);
    return (arr[i]);
}

void    zombieEvent::kill_zombie(zombieEvent* tmp) {
    std::cout << "\nBOOM!!!!!\n\n";
    delete tmp;
    return ;
}

zombie* zombieEvent::randomChump() {
    std::string name = randy();
    _zombie = zombieEvent::newZombie(name);
    _zombie->announce();
    return (_zombie);
}

zombie* zombieEvent::newZombie(std::string name) {
    _zombie = new zombie;
    std::string type = typing();
    _zombie->init_zombie(name, type);
    return (_zombie);
}

zombieEvent::zombieEvent() {
    _zombie = new zombie;
    return ;
}

zombieEvent::~zombieEvent() {
    delete _zombie;
    return ;
}