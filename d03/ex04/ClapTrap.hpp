/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 21:43:03 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/14 18:37:19 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
protected:
    unsigned int _hp;
    unsigned int _mHP;
    unsigned int _ep;
    unsigned int _mEP;
    std::string _name;
    unsigned int _lv;
    unsigned int _mAtk;
    unsigned int _rAtk;
    unsigned int _dra;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& other);
    ClapTrap&  operator=( const ClapTrap& rhs );
    ~ClapTrap();

    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    unsigned int    dmgCal(unsigned int amount);
    void    takeDamage(unsigned int amount);
    void    repairCal(unsigned int amount);
    void    beRepaired(unsigned int amount);

    unsigned int    getHp();
    unsigned int getMhp() const;
    unsigned int    getEp();
    unsigned int getMep() const;
    std::string    getName();
    unsigned int    getLv();
    unsigned int    getMAtk();
    unsigned int    getRAtk();
    unsigned int    getDra();

    void    setHp(unsigned int n);
    void    setEp(unsigned int n);
    void    setName(std::string name);
    void    setLv(unsigned int n);
    void    setMAtk(unsigned int n);
    void    setRAtk(unsigned int n);
    void    setDra(unsigned int n);
    
    void    setMhp(unsigned int n);
    void    setMep(unsigned int n);
    
};

#endif
