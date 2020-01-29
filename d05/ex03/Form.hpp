/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 23:43:38 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/21 20:49:32 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    const std::string   _Name;
    bool                _Signed;
    const int           _GSign;
    const int           _GExe;
    int                 _GMax;
    int                 _GMin;
public: 
    Form(void);
    Form(const std::string name, const int gSign, const int gExe);
    ~Form(void);
    Form(const Form& other);
    Form&      operator=(const Form& other);

    class GradeTooHighException : public std::exception {
        public:
            virtual const char  *what(void) const throw();
            GradeTooHighException(void);
            GradeTooHighException(const GradeTooHighException & copy);
            ~GradeTooHighException(void) throw();
            GradeTooHighException& operator=(const GradeTooHighException &);
    };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char  *what(void) const throw();
            GradeTooLowException(void);
            GradeTooLowException(const GradeTooLowException & copy);
            ~GradeTooLowException(void) throw();
            GradeTooLowException& operator=(const GradeTooLowException &);
    };

    std::string     getName() const;
    bool                  getSigned() const;
    int             getGSign() const;
    int             getGexe() const;

    void            beSigned(Bureaucrat& Brct);

    void            execute(Bureaucrat const & executor) const;
    virtual void    Action() const = 0;
};

std::ostream& operator<<( std::ostream& out, const Form& in );

#endif