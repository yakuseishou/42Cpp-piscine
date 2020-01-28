/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 22:11:33 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/03 16:01:28 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class zombieEvent {
    private:
        zombie* _zombie;
    public:
        zombieEvent();
        ~zombieEvent();
        void    setZombieType();
        void    kill_zombie(zombieEvent* tmp);
        zombie* newZombie(std::string name);
        zombie* randomChump();
};

#endif