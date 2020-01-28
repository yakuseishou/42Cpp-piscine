/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 16:21:00 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/04 00:40:36 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
    private:
        std::string _type;
    public:
        Weapon(std::string str);
        ~Weapon();
        std::string getType();
        void    setType(std::string str);
};

#endif