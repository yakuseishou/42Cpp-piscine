/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:54:56 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/21 21:15:33 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _Name("N"), _Gmax(0), _Gmin(0) {}

Bureaucrat::Bureaucrat(const std::string name, const int n)
    : _Name(name), _Gmax(1), _Gmin(150) {
    if (n < _Gmax) {
        throw GradeTooHighException();
    } if (n > _Gmin) {
        throw GradeTooLowException();
    } else {
        _Grade = n;
    }
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
    : _Name(other._Name), _Gmax(other._Gmax), _Gmin(other._Gmin) {
    *this = other;
}

Bureaucrat&      Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        if (other._Grade < _Gmax) {
            throw GradeTooHighException();
        } if (other._Grade > _Gmin) {
            throw GradeTooLowException();
        } else {
            *this = other;
        }
    }
    return (*this);
}

std::string     Bureaucrat::getName(void) const {
    return (_Name);
}

int             Bureaucrat::getGrade(void) const {
    return (_Grade);
}

void            Bureaucrat::GradeIncrementor(void) {
    if (_Grade - 1< _Gmax)
        throw GradeTooHighException();
    --_Grade;
}

void            Bureaucrat::GradeDecrementor(void) {
    if (_Grade + 1 > _Gmin)
        throw GradeTooLowException();
    ++_Grade;
}

typedef Bureaucrat::GradeTooHighException GradeTooHighException;

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

typedef     Bureaucrat::GradeTooLowException GradeTooLowException;

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

std::ostream& operator<<( std::ostream& out, const Bureaucrat& in ) {
        out << "<" << in.getName() << ">, bureaucrat grade <" << in.getGrade() << ">" << std::endl;
    return (out);
}

void                Bureaucrat::signForm(Form& form) {
    try {
        form.beSigned(*this);
        std::cout << "<" << _Name << "> signs <" << form.getName() << ">." << std::endl;
    } catch (Form::GradeTooHighException &e) {
        std::cout << "<" << _Name << "> cannot sign <" << form.getName() << "> because "
            << e.what() << std::endl;
    } catch (Form::GradeTooLowException &e) {
        std::cout << "<" << _Name << "> cannot sign <" << form.getName() << "> because "
            << e.what() << std::endl;
    }
}

void            Bureaucrat::executeForm(Form const &form) {
    try {
        form.execute(*this);
        std::cout << "<" << this->getName() << "> executed <" << form.getName() << ">." << std::endl;
    } catch (const char *reason) {
        std::cout << "<" << this->getName() << "> cannot execute <" << form.getName() << "> because "
            << reason << std::endl;
    }
}
