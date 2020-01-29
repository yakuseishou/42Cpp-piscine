/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 21:29:20 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/20 23:28:59 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int     main() {
    try {
        Bureaucrat Low("Lowest", 150);
        Bureaucrat High("Highest", 1);
        Bureaucrat Mid = Bureaucrat("mid", 75);

        std::cout << Low;
        std::cout << High;
        std::cout << Mid;
        try {
            std::cout << "Try to Increment MAX" << std::endl;
            High.GradeIncrementor();
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        try {
            std::cout << "Try to Decrement MIN" << std::endl;
            Low.GradeDecrementor();
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        try {
            std::cout << "Try to Increment Min" << std::endl;
            Low.GradeIncrementor();
            std::cout << Low;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        try {
            std::cout << "Try to Decrement Max" << std::endl;
            High.GradeDecrementor();
            std::cout << High;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    } catch (std::exception &e) {
        std::cout << "should not print this error!!" << std::endl;
        std::cout << e.what() << std::endl;
    }
    try {
        std::cout << "Try to create overMIN" << std::endl;
        Bureaucrat overLow("overLow", 151);
        std::cout << overLow;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        std::cout << "Try to create overMAX" << std::endl;
        Bureaucrat overHigh("overHigh", 0);
        std::cout << overHigh;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}