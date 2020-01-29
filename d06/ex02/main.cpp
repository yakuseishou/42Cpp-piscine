/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 23:22:01 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/22 23:40:03 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <random>

Base* randyBase() {
    Base *base = nullptr;
    std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> uid(1, 1000);
	int n = uid(gen) % 3;

    switch (n) {
        case 0:
            base = new A();
            break;
        case 1:
            base = new B();
            break;
        case 2:
            base = new C();
            break;
    }
    return (base);
}

void identify_from_pointer( Base * p ) {
    if (A *a = dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (B *b = dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (C *c = dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

void identify_from_reference( Base & p ) {
    try {
        (void)dynamic_cast<A & >(p);
        std::cout << "A" << std::endl;
    } catch (std::bad_cast&) {
        try {
            (void)dynamic_cast<B & >(p);
            std::cout << "B" << std::endl;
        } catch (std::bad_cast&) {
            try {
                (void)dynamic_cast<C & >(p);
                std::cout << "C" << std::endl;
            } catch (std::bad_cast&) {}
        }
    }
}

int     main() {
    Base* a = new A();
    Base* b = new B();
    Base* c = new C();

    Base* rdm = randyBase();

    identify_from_pointer(a);
    identify_from_pointer(b);
    identify_from_pointer(c);
    std::cout << "----------------------" << std::endl;
    identify_from_pointer(rdm);
    std::cout << "----------------------" << std::endl;
    identify_from_reference(*a);
    identify_from_reference(*b);
    identify_from_reference(*c);
    std::cout << "----------------------" << std::endl;
    identify_from_reference(*rdm);
    return (0);
}