/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 18:02:35 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/24 19:05:46 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main() {

std::cout << "----------------default example------------------------" << std::endl;

    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

std::cout << "-------------------try push into full array---------------------" << std::endl;
    try {
        sp.addNumber(13);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
std::cout << "-------------------try long & short with array too small---------------------" << std::endl;
    Span sp1 = Span(5);
    try {
        sp1.longestSpan();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        sp1.shortestSpan();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    sp1.addNumber(5);
    try {
        sp1.longestSpan();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        sp1.shortestSpan();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}