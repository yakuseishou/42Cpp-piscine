/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 22:03:31 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/03 16:03:34 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int     main() {
    zombieEvent* tmp = new zombieEvent;
    tmp->randomChump();
    tmp->kill_zombie(tmp);
    return (0);
}