/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:52:37 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 23:32:56 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy {
private:
    int             _hp;
    std::string     _type;
public:
    Enemy(int hp, std::string const & type);
    virtual~Enemy() = 0;
    Enemy(Enemy& other);
    Enemy& operator=(Enemy& other);
    std::string     getType() const;
    int             getHP() const;

    void            setType(std::string const & type);
    void            setHp(int hp);

    virtual void    takeDamage(int dmg);
};

#endif