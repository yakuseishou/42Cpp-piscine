/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:26:27 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/21 21:29:59 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <random>

RobotomyRequestForm::RobotomyRequestForm(void) 
    : Form::Form("RobotomyRequestForm", 25, 5) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) 
    : Form::Form("RobotomyRequestForm", 25, 5), _target(target) {
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) {
    *this = other;
}

RobotomyRequestForm&     RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        this->_target = other._target;
    }
    return (*this);
}

std::string         RobotomyRequestForm::getTarget() const {
    return (_target);
}

void                        RobotomyRequestForm::Action() const{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> uid(1, 2);
    std::cout << "Buzz..purr...buzz... zap..clunk...screech.....boom..." << std::endl;
    if (uid(gen) % 2 == 0)
        std::cout << _target << " has been robotomized!!!" << std::endl;
    else
        std::cout << "Error...Erra..." << _target << " robotomization FAILURE..."
            << " EMERGENCY SHUT OFF!" << std::endl;
}

std::ostream& operator<<( std::ostream& out, const RobotomyRequestForm& in ) {
    std::cout << "Target: " << in.getTarget() << std::endl 
        << ", Form: " << in.getName() << " SignGrade: " << in.getGSign() 
        << " ExeGrade : " << in.getGexe() << std::endl;
        return (out);
}