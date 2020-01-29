/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:49:42 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 23:13:36 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
    PowerFist();
    ~PowerFist();
    PowerFist(PowerFist& other);
    PowerFist& operator=(PowerFist& other);
    
    void    attack() const;
};

#endif