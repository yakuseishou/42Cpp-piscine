/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:57:32 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/16 00:11:43 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) {
    _hp = hp;
    _type = type;
}

Enemy::~Enemy() {}

Enemy::Enemy(Enemy& other) {
    *this = other;
}

Enemy&          Enemy::operator=(Enemy& other) {
    if (this != &other) {
        _hp = other._hp;
        _type = other._type;
    }
    return (*this);
}

std::string     Enemy::getType() const {
    return (_type);
}

int             Enemy::getHP() const {
    return (_hp);
}

void            Enemy::setType(std::string const & type) {
    _type = type;
}

void            Enemy::setHp(int hp) {
    _hp = hp;
}

void            Enemy::takeDamage(int dmg) {
    _hp -= dmg;
    if (_hp <= 0) {
        delete this;
    }
}
