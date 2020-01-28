/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 21:50:13 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/03 16:04:35 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iomanip>
# include <iostream>

class zombie {
    private:
        std::string  _name;
        std::string  _type;

    public:
        zombie( void );
        ~zombie( void );
        
        void    init_zombie(std::string name, std::string type);
        std::string  get_name();
        std::string  get_type();
        void    announce();
};

#endif