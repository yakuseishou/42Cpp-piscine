/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 21:54:41 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/16 00:01:57 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy {
public:
    RadScorpion();
    ~RadScorpion();
    RadScorpion(RadScorpion& other);
    RadScorpion& operator=(RadScorpion& other);

    // virtual void    takeDamage(int dmg);
};

#endif