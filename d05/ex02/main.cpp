/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 21:29:20 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/21 21:38:04 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat low = Bureaucrat("lowest", 150);
	Bureaucrat high = Bureaucrat("hiest", 1);

	std::cout << low;
	std::cout << high;
    
	std::cout << "---------------ShrubberyCreationForm------------------" << std::endl;
	ShrubberyCreationForm scf = ShrubberyCreationForm("TREeSSSSS");
	std::cout << scf << std::endl;

	try {
		high.executeForm(scf);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		high.signForm(scf);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		high.executeForm(scf);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "--------------RobotomyRequestForm------------------" << std::endl;
	RobotomyRequestForm rrf = RobotomyRequestForm("Robo");
	std::cout << rrf << std::endl;

	try {
		high.executeForm(rrf);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		high.signForm(rrf);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		high.executeForm(rrf);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "----------------PresidentialPardonForm---------------------" << std::endl;

	PresidentialPardonForm ppf = PresidentialPardonForm("PresPard");
	std::cout << ppf << std::endl;

	try {
		high.executeForm(ppf);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		high.signForm(ppf);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		high.executeForm(ppf);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}