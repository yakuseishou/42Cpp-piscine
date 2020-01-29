/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 16:44:32 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 17:45:28 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer {
protected:
    std::string _name;
    std::string _title;
public:
    Sorcerer(std::string name, std::string title);
    ~Sorcerer();
    Sorcerer(Sorcerer& other);
    Sorcerer& operator=(Sorcerer& other);

    std::string     getName();
    std::string     getTitle();

    void    polymorph(Victim const &vic) const;
    void    polymorph(Peon const &vic) const;
};

std::ostream& operator<<( std::ostream& out, Sorcerer& other );

#endif