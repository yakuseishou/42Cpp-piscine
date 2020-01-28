/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 16:37:11 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/04 01:02:35 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {
    private:
        std::string _name;
        Weapon* _w;
    public:
        HumanB(std::string s);
        ~HumanB();
        void    setWeapon(Weapon& w);
        void    attack();
};

#endif