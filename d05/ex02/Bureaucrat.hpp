/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:41:27 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/21 01:39:16 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat {
    private:
        const std::string   _Name;
        int                 _Grade;
        int                 _Gmax;
        int                 _Gmin;
    public:
        Bureaucrat(void);
        Bureaucrat(const std::string name, const int n);
        ~Bureaucrat(void);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat&      operator=(const Bureaucrat& other);

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
    
        std::string     getName(void) const;
        int             getGrade(void) const;
        void            GradeIncrementor(void);
        void            GradeDecrementor(void);

        void            signForm(Form& Form);
        void            executeForm(Form const & form);
    
};

std::ostream& operator<<( std::ostream& out, const Bureaucrat& in );

#endif