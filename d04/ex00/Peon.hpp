/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:22:36 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 17:25:57 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim {
public:
    Peon(std::string name);
    ~Peon();
    Peon(Peon& other);
    Peon& operator=(Peon& other);

    void    getPolymorphed() const;
};

#endif