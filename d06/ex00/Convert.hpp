/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 02:45:59 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/22 20:51:55 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <exception>

class Convert {
    private:
        std::string _in;
        double      _inD;
    public:
        Convert(void);
        Convert(std::string s);
        ~Convert(void);
        Convert(Convert& other);
        Convert& operator=(Convert& other);

        void    ToChar(void);
        void    ToInt(void);
        void    ToFloat(void);
        void    ToDouble(void);
        void    prinConvert(void);
};

#endif