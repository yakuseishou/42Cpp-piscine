/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 01:31:09 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/16 15:53:55 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class   FragTrap : public virtual ClapTrap {
public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);
    FragTrap&  operator=( const FragTrap& rhs );
    ~FragTrap();

    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    missed(std::string const & target);
    void    spAtkA(std::string const & target);
    void    spAtkB(std::string const & target);
    void    vaulthunter_dot_ext(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif