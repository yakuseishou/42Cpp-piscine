/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 20:39:43 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/16 15:54:15 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"

class NinjaTrap : public virtual ClapTrap {
public:
    NinjaTrap(void);
    NinjaTrap(std::string name);
    NinjaTrap(const NinjaTrap& other);
    NinjaTrap&  operator=( const NinjaTrap& rhs );
    ~NinjaTrap();

    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    void    mAtkbuff(ClapTrap& ct);
    void    drabuff(ClapTrap& ct);
    void    healing(ClapTrap& ct);
    void    ninjaShoeBox(ClapTrap& ct);
};

#endif