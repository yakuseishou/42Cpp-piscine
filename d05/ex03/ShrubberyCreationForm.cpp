/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:31:43 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/21 21:33:21 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) 
    : Form::Form("ShrubberyCreationForm", 25, 5) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) 
    : Form::Form("ShrubberyCreationForm", 25, 5), _target(target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) {
    *this = other;
}

ShrubberyCreationForm&     ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        this->_target = other._target;
    }
    return (*this);
}

std::string         ShrubberyCreationForm::getTarget() const {
    return (_target);
}

void                        ShrubberyCreationForm::Action() const{
    std::ifstream in("AsciiTree.txt");
    std::string cont((std::istreambuf_iterator<char>(in)), 
    std::istreambuf_iterator<char>());

    std::string fname(_target);
    fname += "_shrubbery";
    std::ofstream r_file(fname);
    if (r_file.is_open()) {
       r_file << cont;
    }
    r_file.close();
}

std::ostream& operator<<( std::ostream& out, const ShrubberyCreationForm& in ) {
    std::cout << "Target: " << in.getTarget() << std::endl 
        << ", Form: " << in.getName() << " SignGrade: " << in.getGSign() 
        << " ExeGrade : " << in.getGexe() << std::endl;
    return (out);
}