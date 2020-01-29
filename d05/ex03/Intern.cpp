/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:54:40 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/22 00:04:41 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::~Intern(void) {}

Intern::Intern(const Intern& other) {
    *this = other;
}

Intern&      Intern::operator=(const Intern& other) {
    (void)other;
    return (*this);
}

// typedef struct {
//     std::string     name;
// 	Form            *(*form)(std::string target);
// }				    func_form;

// #define form_TOTAL 3

// func_form	create_form[form_TOTAL] = {
// 	{ 
//         "shrubbery creation", 
//         [](std::string target) { 
//             return ( (Form*) new ShrubberyCreationForm(target) ); 
//         } 
//     },
// 	{ "robotomy request", [](std::string target) { 
//             return ( (Form*) new RobotomyRequestForm(target) ); 
//         } 
//     },
//     { "presidential pardon", [](std::string target) { 
//             return ( (Form*) new PresidentialPardonForm(target) );
//         } 
//     }
// };

// Form        *Intern::makeForm(std::string form, std::string target) {
//     Form    *newForm;
    
//     for (int i = 0; i < form_TOTAL; i++) {
//         if ((form.compare(create_form[i].name)) == 0) {
//             try {
//                 newForm = create_form[i].form(target);
//                 std::cout << "Intern creates <" 
//                     << newForm->getName() << ">." << std::endl;
//             } catch (std::bad_alloc &e) {
//                 std::cout << "malloc error form not created." << std::endl;
//             }
//             return (newForm);
//         }
//     }
//     std::cout << "Unkown type of form, can't not create!" << std::endl;
//     return NULL;
// }

Form        *Intern::makeForm(std::string form, std::string target) {
    Form    *newF = nullptr;
    if (form == "shrubbery creation")
        newF = new ShrubberyCreationForm(target);
    else if (form == "robotomy request")
        newF = new RobotomyRequestForm(target);
    else if (form == "presidential pardon")
        newF =  new PresidentialPardonForm(target);
    else
        std::cout << "Unkown type of form, can't not create!" << std::endl;
    return (newF);
}
