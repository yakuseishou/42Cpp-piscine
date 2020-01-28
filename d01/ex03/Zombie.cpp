/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 21:54:05 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/03 16:04:56 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

zombie::zombie( void ) {
    _name = "";
    _type = "";
    return ;
}

zombie::~zombie( void ) {
    std::cout << "\nBOOM!!!\n";
    std::cout << _name << " kicked the bucket!\n";
    return ;
}
        
void   zombie::init_zombie(std::string name, std::string type) {
    _name = name;
    _type = type;
    return ;
}

std::string  zombie::get_name() {
    return (_name);
}

std::string  zombie::get_type() {
    return (_type);
}

void    zombie::announce() {
    std::cout << "<" << _name << " (" << _type 
        << ")> Braiiiiiiinnnssss...\n";
    return ;
}