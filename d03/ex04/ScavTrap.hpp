/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 14:28:55 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/16 15:16:05 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap {
public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    ScavTrap&  operator=( const ScavTrap& rhs );
    ~ScavTrap();

    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    challA();
    void    challB();
    void    challC();
    void    challengeNewcomer();
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif
