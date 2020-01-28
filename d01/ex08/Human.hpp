/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 06:48:03 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/06 18:20:02 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>

class Human {
    private:
        void    meleeAttack(std::string const & target);
        void    rangedAttack(std::string const & target);
        void    intimidatingShout(std::string const & target);
    public:
        Human();
        ~Human();
        void    action(std::string const & action_name, std::string const & target);
};

#endif