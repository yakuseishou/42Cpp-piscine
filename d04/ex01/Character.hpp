/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 22:28:08 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 23:50:34 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
private:
    std::string _cName;
    int         _cAp;
    AWeapon*    _aw;
public:
    Character(std::string const & name);
    ~Character();
    Character(Character& other);
    Character& operator=(Character& other);

    void            recoverAP();
    void            equip(AWeapon* aw);
    void            attack(Enemy* en);
    
    std::string     getName() const;
    AWeapon*        getWeapon() const;
    int             getAp() const;
};

std::ostream& operator<<( std::ostream& out, Character& in );

#endif