/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:04:08 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/15 17:41:21 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class   Victim {
protected:
    std::string _name;
public:
    Victim(std::string name);
    ~Victim();
    Victim(Victim& other);
    Victim& operator=(Victim& other);

    std::string getName() const;
    void    getPolymorphed() const;
};

std::ostream& operator<<( std::ostream& out, Victim& other );

#endif