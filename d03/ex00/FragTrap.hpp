/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 01:31:09 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/14 22:32:23 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class   FragTrap {
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
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);
    FragTrap&  operator=( const FragTrap& rhs );
    ~FragTrap();
    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    vaulthunter_dot_ext(std::string const & target);
    void    missed(std::string const & target);
    void    spAtkA(std::string const & target);
    void    spAtkB(std::string const & target);
    unsigned int    getLv();
    unsigned int    getHp();
    unsigned int    getEp();
};

#endif