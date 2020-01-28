/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 21:39:10 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/03 16:09:52 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iomanip>
#include <string>
#include <sstream>

Brain::Brain() {
    _texture = "soft";
    _brain = this;
    return ;
}

Brain::~Brain() {
    return ;
}

Brain*  Brain::get_brain() {
    return (_brain);
}

std::string    Brain::identify() {
    std::stringstream stream;
    uintptr_t a = (uintptr_t)this;
    stream << std::hex << a;
    std::string result = "0x";
    result.append(stream.str());
    return (result);
}