/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 08:57:30 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/04 09:04:37 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int     main() {
    Human a = Human();

    a.action("meleeAttack", "wolf");
    a.action("rangedAttack", "wolf");
    a.action("intimidatingShout", "wolf");
    return (0);
}