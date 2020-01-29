/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 02:49:38 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/21 20:58:17 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form {
private:
    PresidentialPardonForm(void);
    std::string         _target;
public:
    PresidentialPardonForm(const std::string name);
    ~PresidentialPardonForm(void);
    PresidentialPardonForm(const PresidentialPardonForm& other);
    PresidentialPardonForm&      operator=(const PresidentialPardonForm& other);

    std::string         getTarget() const;

    void                Action() const;
};

std::ostream& operator<<( std::ostream& out, const PresidentialPardonForm& in );

#endif