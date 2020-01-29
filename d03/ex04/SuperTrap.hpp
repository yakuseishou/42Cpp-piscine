/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 00:39:22 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/16 15:54:19 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
    SuperTrap(void);
    SuperTrap(std::string name);
    SuperTrap(const SuperTrap& other);
    SuperTrap&  operator=( const SuperTrap& rhs );
    ~SuperTrap();

    using   FragTrap::rangedAttack;
    using   NinjaTrap::meleeAttack;
    using   FragTrap::takeDamage;
    using   NinjaTrap::beRepaired;
};

#endif