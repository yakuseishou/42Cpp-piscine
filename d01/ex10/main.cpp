/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 20:30:00 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/06 21:15:42 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void    file_out(char *s) {
    std::string     line;
    std::ifstream   file(s);

    if (file.is_open()) {
        while (getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    } else {
        std::cout << "Unable to Open File" << std::endl;
    }
    return ;
}

int     main(int ac, char *av[]) {
    if (ac > 1) {
        for (int i = 1; i < ac; i++) {
            file_out(av[i]);
        }
    }
    else {
        std::string s;
        while (getline(std::cin, s)) {
            std::cout << s << std::endl;
        }
    }
    return (0);
}