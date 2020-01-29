/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 00:20:11 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/21 02:14:59 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _Name("N/A"), _Signed(false), _GSign(1), _GExe(1) {}

Form::Form(const std::string name, const int gSign, const int gExe)
    : _Name(name), _Signed(false), _GSign(gSign), _GExe(gExe),
    _GMax(1), _GMin(150) {
    if (gSign < _GMax || gExe < _GMax)
        throw GradeTooHighException();
    if (gSign > _GMin || gExe > _GMin)
        throw GradeTooLowException();
}

Form::~Form(void) {}

Form::Form(const Form& other) : _Name(other._Name), _GSign(other._GSign),
    _GExe(other._GExe) {//, _Signed(other._Signed), _GMax(other._GMax),
    //_GMin(other._GMin) {
    *this = other;
}

Form&      Form::operator=(const Form& other) {
    if (this != &other) {
        if (other._GSign < _GMax || other._GExe < _GMax) {
            throw GradeTooHighException();
        } if (other._GSign > _GMin || other._GExe > _GMin) {
            throw GradeTooLowException();
        } else {
            *this = other;
        }
    }
    return (*this);
}

typedef Form::GradeTooHighException GradeTooHighException;

GradeTooHighException::GradeTooHighException(void) { }
GradeTooHighException::GradeTooHighException(const GradeTooHighException & copy) {
	*this = copy;
}

GradeTooHighException::~GradeTooHighException(void) throw() { }
GradeTooHighException& GradeTooHighException::operator=(const GradeTooHighException &) { 
	return *this;
}

const char     *GradeTooHighException::what(void) const throw() {
    return("Grade Too High");
}

typedef Form::GradeTooLowException GradeTooLowException;

GradeTooLowException::GradeTooLowException(void) { }
GradeTooLowException::GradeTooLowException(const GradeTooLowException & copy) {
	*this = copy;
}

GradeTooLowException::~GradeTooLowException(void) throw() { }
GradeTooLowException& GradeTooLowException::operator=(const GradeTooLowException &) { 
	return *this;
}

const char     *GradeTooLowException::what(void) const throw() {
    return("Grade Too Low");
}


std::string   Form::getName() const {
    return (_Name);
}

bool                Form::getSigned() const {
    return (_Signed);
}

int           Form::getGSign() const {
    return (_GSign);
}

int           Form::getGexe() const {
    return (_GExe);
}

void                Form::beSigned(Bureaucrat& Brct) {
    if (Brct.getGrade() <= _GSign)
        _Signed = true;
    else
        throw GradeTooLowException();
}


std::ostream& operator<<( std::ostream& out, const Form& in ) {
    out << "Form <" << in.getName() << ">, Signed?: " << in.getSigned()
        <<  ", Signed require: " << in.getGSign() << ", Execute require: "
        << in.getGexe() << std::endl;
    return (out);
}