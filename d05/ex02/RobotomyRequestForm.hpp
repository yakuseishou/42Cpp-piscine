/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 02:51:00 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/21 21:30:14 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form {
private:
    RobotomyRequestForm(void);
    std::string         _target;
public: 
    RobotomyRequestForm(const std::string name);
    ~RobotomyRequestForm(void);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    RobotomyRequestForm&      operator=(const RobotomyRequestForm& other);

    std::string         getTarget() const;

    void                Action() const;
};

std::ostream& operator<<( std::ostream& out, const RobotomyRequestForm& in );

#endif