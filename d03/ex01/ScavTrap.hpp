/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 14:28:55 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/14 19:00:31 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class   ScavTrap {
private:
    unsigned int _hp;
    static const unsigned int _mHP;
    unsigned int _ep;
    static const unsigned int _mEP;
    std::string _name;
    unsigned int _lv;
    unsigned int _mAtk;
    unsigned int _rAtk;
    unsigned int _adr;
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

    unsigned int    getLv();
    unsigned int    getHp();
    unsigned int    getEp();
};

#endif
