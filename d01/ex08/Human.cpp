/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 07:04:06 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/06 18:20:53 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
    return ;
}
Human::~Human() {
    return ;
}

void    Human::meleeAttack(std::string const & target) {
    std::cout << "meleeAttacks <" << target << ">" << std::endl;
    return ;
}

void    Human::rangedAttack(std::string const & target) {
    std::cout << "rangedAttack <" << target << ">" << std::endl;
    return ;
}

void    Human::intimidatingShout(std::string const & target) {
        std::cout << "intimidatingShout <" << target << ">" << std::endl;
        return ;
}

typedef struct
{
	std::string		key;
	void		(Human::*func)(const std::string&);
}				func_atk;

void    Human::action(std::string const & action_name, std::string const & target) {
    const int atk_TOTAL = 3;

    func_atk	atk_action[atk_TOTAL] =
    {
    	{ "meleeAttack", &Human::meleeAttack },
    	{ "rangedAttack", &Human::rangedAttack },
        { "intimidatingShout", &Human::intimidatingShout }
    };

    for (int i = 0 ; i < atk_TOTAL; i++) {
        if (atk_action[i].key == action_name)
            (*this.*atk_action[i].func)(target);
    }
}