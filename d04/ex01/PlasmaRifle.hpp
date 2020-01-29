/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:31:06 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 23:14:12 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRiffle : public AWeapon {
public:
    PlasmaRiffle();
    ~PlasmaRiffle();
    PlasmaRiffle(PlasmaRiffle& other);
    PlasmaRiffle& operator=(PlasmaRiffle& other);
    
    void    attack() const;
};

#endif