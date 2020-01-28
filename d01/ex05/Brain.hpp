/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 21:26:43 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/03 16:09:34 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
    private:
        std::string _texture;
        Brain* _brain;
    public:
        Brain();
        ~Brain();
        std::string    identify();
        Brain*  get_brain();
};

#endif