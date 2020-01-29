/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 02:51:08 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/21 21:30:19 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form {
private:
    ShrubberyCreationForm(void);
    std::string         _target;
public:
    ShrubberyCreationForm(const std::string name);
    ~ShrubberyCreationForm(void);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm&      operator=(const ShrubberyCreationForm& other);

    std::string         getTarget() const;

    void                Action() const;
};

std::ostream& operator<<( std::ostream& out, const ShrubberyCreationForm& in );

#endif