/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/31 16:24:24 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/03 15:53:46 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//pony small breed of hourse, 58inches and under, 

#ifndef PONY_HPP
# define PONY_HPP

# include <iomanip>
# include <iostream>

class pony {
    private:
        std::string  _name;
        std::string  _color;
        int     _height;
        int     _weight;

    public:
        pony( void );
        ~pony( void );

        void    eats();
        void    runs();
        
        void   create_pony();

        std::string  get_name();
        int     get_height();
        int     get_weight();
        std::string  get_color();


};

#endif