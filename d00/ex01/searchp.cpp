/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchp.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 19:55:02 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/03 15:44:07 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"



int     index_input(int j) {
    std::string s;

    std::cout << "Enter Index Number or q to exit search: ";
    std::cin >> s;
    if (s == "q")
        return (-1);
    int a = atoi(s.c_str()) - 1;
    while (a < 0 || a > j - 1) {
        std::cout << "Incorrect Index!!!\nEnter Index Number or q to exit search: ";
        std::cin >> s;
        if (s == "q")
            return (-1);
        a = atoi(s.c_str()) - 1;
    }
    return (a);
}

void    print_index(fonbk* arr, int j) {
    int a = index_input(j);
    if (a == -1)
        return ;
    std::cout << std::setw(15) << "First name" << ": " << arr[a].get_fname() << std::endl;
    std::cout << std::setw(15) << "Last name" << ": " << arr[a].get_lname() << std::endl;
    std::cout << std::setw(15) << "Nickname" << ": " << arr[a].get_nickname() << std::endl;
    std::cout << std::setw(15) << "Login" << ": " << arr[a].get_login() << std::endl;
    std::cout << std::setw(15) << "Postal address" << ": " << arr[a].get_postal() << std::endl;
    std::cout << std::setw(15) << "Email address" << ": " << arr[a].get_email() << std::endl;
    std::cout << std::setw(15) << "Phone number" << ": " << arr[a].get_fonum() << std::endl;
    std::cout << std::setw(15) << "Birthday date" << ": " << arr[a].get_bday() << std::endl;
    std::cout << std::setw(15) << "Underwear color" << ": " << arr[a].get_panz() << std::endl;
    std::cout << std::setw(15) << "Darkest secret" << ": " << arr[a].get_weakness() << std::endl;
    print_index(arr, j);
}

void    searchp(fonbk* arr, int* j) {
    std::cout << std::right << std::setw(10) << "index" << "| ";
    std::cout << std::right << std::setw(10) << "first name" << "| ";
    std::cout << std::right << std::setw(10) << "last name" << "| ";
    std::cout << std::right << std::setw(10) << "nickname" << "|" << std::endl;
    if (*j > 0) {
        for (int i = 0; i < *j; i++) {
            print_col(std::to_string(i + 1), 0);
            print_col(arr[i].get_fname(), 0);
            print_col(arr[i].get_lname(), 0);
            print_col(arr[i].get_nickname(), 1);
        }
    }
    print_index(arr, *j);
    return ;
}