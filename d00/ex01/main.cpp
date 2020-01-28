/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 23:51:18 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/13 23:51:20 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void   addp(fonbk* arr, int* j) {
    fonbk x;
    
    if (*j < 8) {
        std::cout << "first name: ";
        x.init_fname();
        std::cout << "last name: ";
        x.init_lname();
        std::cout << "nickname: ";
        x.init_nickname();
        std::cout << "login: ";
        x.init_login();
        std::cout << "postal address: ";
        x.init_postal();
        std::cout << "email address: ";
        x.init_email();
        std::cout << "phone number: ";
        x.init_fonum();
        std::cout << "birthday date: ";
        x.init_bday();
        std::cout << "underwear color: ";
        x.init_panz();
        std::cout << "darkest secret: ";
        x.init_weakness();
        arr[*j] = x;
        *j += 1;
    }
    else
        std::cout << "Maxium Contacts Reached Unable to Save More\n";
    return ;
}

void    print_col(std::string str, int n) {
    if (str.length() <= 10)
        std::cout << std::right << std::setw(10) << str;
    else
        std::cout << std::right << std::setw(9) << str.substr(0, 9) << ".";
    if (n == 1)
        std::cout << "|" << std::endl;
    else
        std::cout << "| ";
    return ;
}

int     main() {
    fonbk arr[8];
    int     j = 0;

    for (std::string line; getline(std::cin, line);) {
        if (!(line.compare("EXIT")))
            exit(0);
        for (int i = 0; i < T_TOTAL; i++) {
            if (!(line.compare(p_hash[i].key))) {
                p_hash[i].func(arr, &j);
                break ;
            }
        }
    }
    return (0);
}