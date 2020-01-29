/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 21:29:20 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/21 23:39:29 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Bureaucrat low = Bureaucrat("lowest", 150);
	Bureaucrat high = Bureaucrat("hiest", 1);
	Intern		a;

	std::cout << low;
	std::cout << high;
    
	std::cout << "---------------Inter create ShrubberyCreationForm------------------" << std::endl;
	Form *scf = nullptr;
	scf = a.makeForm("shrubbery creation", "TREeSSSSS");

	try {
		high.executeForm(*scf);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		high.signForm(*scf);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		high.executeForm(*scf);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "--------------Inter create RobotomyRequestForm------------------" << std::endl;
	Form *rrf = a.makeForm("robotomy request", "Robo");
	try {
		high.executeForm(*rrf);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		high.signForm(*rrf);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		high.executeForm(*rrf);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "----------------Inter create PresidentialPardonForm---------------------" << std::endl;

	Form* ppf = a.makeForm("presidential pardon", "PresPard");

	try {
		high.executeForm(*ppf);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		high.signForm(*ppf);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		high.executeForm(*ppf);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}