/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 03:20:20 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/21 20:58:42 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) 
    : Form::Form("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) 
    : Form::Form("PresidentialPardonForm", 25, 5), _target(target) {
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) {
    *this = other;
}

PresidentialPardonForm&     PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this != &other) {
        this->_target = other._target;
    }
    return (*this);
}

std::string         PresidentialPardonForm::getTarget() const {
    return (_target);
}

void                        PresidentialPardonForm::Action() const {
    std::cout << _target << " had been pardoned by Zaphod Beeblerox." << std::endl;
}

std::ostream& operator<<( std::ostream& out, const PresidentialPardonForm& in ) {
    std::cout << "Target: " << in.getTarget() << std::endl 
        << ", Form: " << in.getName() << " SignGrade: " << in.getGSign() 
        << " ExeGrade : " << in.getGexe() << std::endl;
    return (out);
}
