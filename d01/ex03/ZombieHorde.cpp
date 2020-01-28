/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 16:41:38 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/08 21:05:20 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string  zombieHorde::randy(std::mt19937 gen) {
    std::string arr[10] = {"Yi", "Kai", "kev", "VIC", "FLIP", "kou", "Ferry","jeff","ten","zen"};
    std::uniform_int_distribution<> uid(0, 1000);
    int i = uid(gen) % 10;
    return (arr[i]);
}

std::string zombieHorde::typing(std::mt19937 gen) {
    std::string arr[10] = {"flaming", "normal", "jumping", "flaming", "normal", "jumping", "flaming", "normal", "jumping", "normall"};
    std::uniform_int_distribution<> uid(0, 1000);
    int i = uid(gen) % 10;
    return (arr[i]);
}

void    zombieHorde::announce() {
    for (int i = 0; i < _num; i++) {
        _zombiehorde[i].announce();
    }
    return ;
}

zombieHorde::zombieHorde(int n) {
    _num = n;
    _zombiehorde = new zombie[n];
    for (int i = 0; i < n; i++) {
        std::random_device rd;
        std::mt19937 gen(rd());
        _zombiehorde[i].init_zombie(randy(gen), typing(gen));
    }
    announce();
    return ;
}

zombieHorde::~zombieHorde() {
    delete [] (_zombiehorde);
    return ;
}