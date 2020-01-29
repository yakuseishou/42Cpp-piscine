/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:16:54 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 23:58:34 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon {
private:
    std::string _wName;
    int         _wDmg;
    int         _wAp;
public:
    AWeapon(std::string const & name, int apcost, int damage);
    virtual~AWeapon();
    AWeapon(AWeapon& other);
    AWeapon& operator=(AWeapon& other);

    std::string     getName() const;
    int             getAPCost() const;
    int             getDamage() const;

    void            setName(std::string const & name);
    void            setAPCost(int apcost);
    void            setDamage(int damage);

    virtual void    attack() const;
};

#endif