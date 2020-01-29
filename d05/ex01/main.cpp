/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 21:29:20 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/21 02:42:23 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat low = Bureaucrat("lowest", 150);
	Bureaucrat high = Bureaucrat("hiest", 1);

	std::cout << low;
	std::cout << high;
	std::cout << "--------------Sign Form----------------------" << std::endl;

	Form form = Form("Form(1, 1)", 1, 1);
	low.signForm(form);
	high.signForm(form);
	Bureaucrat *tooLow;
	try {
		tooLow = new Bureaucrat("tolow(152)", 152);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	if (tooLow != nullptr)
		delete tooLow;
	try {
		tooLow = new Bureaucrat("tohi(-1)", -1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	if (tooLow != nullptr)
		delete tooLow;
	std::cout << "--------------Incre&Decre---------------------" << std::endl;
	try {
		low.GradeDecrementor();
	} catch (std::exception &e) {
		std::cout << "decre 150 " << e.what() << std::endl;
	}

	try {
		high.GradeIncrementor();
	} catch (std::exception &e) {
		std::cout << "incre 1 " << e.what() << std::endl;
	}

	std::cout << "----------------InitForm-------------------" << std::endl;
	Form f = Form("Form(150, 5)", 150, 5);
	std::cout << f << std::endl;

	std::cout << "----------------Incorroct Form grade---------------------" << std::endl;

	Form *formtooformlow = nullptr;
	try {
		formtooformlow = new Form("tolow", 152, 150);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	if (formtooformlow != nullptr)
		delete formtooformlow;
	try {
		formtooformlow = new Form("toohig", 10, -1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	if (formtooformlow != nullptr)
		delete formtooformlow;
        
	return 0;
}