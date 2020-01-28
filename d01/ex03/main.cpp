/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 22:03:31 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/03 16:07:16 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int     main() {
    srand(time(NULL));
    int i = (rand() % 10 + 1);
    zombieHorde *horde = new zombieHorde(i);
    delete horde;
    return (0);
}