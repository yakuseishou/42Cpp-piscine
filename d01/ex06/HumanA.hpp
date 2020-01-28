/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 16:37:57 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/04 00:48:18 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {
    private:
        std::string _name;
        Weapon& _w;
    public:
        HumanA(std::string s, Weapon& w);
        ~HumanA();
        void    attack();
};

#endif