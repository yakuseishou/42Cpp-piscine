/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 16:10:55 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/03 16:05:14 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
#include <random>

class zombieHorde {
    private:
        int         _num;
        zombie*    _zombiehorde;
    public:
        zombieHorde(int n);
        ~zombieHorde();
        std::string  randy(std::mt19937 gen);
        std::string  typing(std::mt19937 gen);
        void    announce();
        void    deadzombies();
};

#endif