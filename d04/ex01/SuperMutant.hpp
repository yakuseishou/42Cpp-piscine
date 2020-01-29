/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:05:32 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 19:18:39 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy {
public:
    SuperMutant();
    ~SuperMutant();
    SuperMutant(SuperMutant& other);
    SuperMutant& operator=(SuperMutant& other);

    virtual void    takeDamage(int dmg);
};

#endif