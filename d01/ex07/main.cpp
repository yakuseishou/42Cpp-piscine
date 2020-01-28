/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 01:17:50 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/04 06:44:38 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <algorithm> 
#include <iterator>
#include <string>

void    replace(char* s, std::string s1, std::string s2) {
    std::ifstream d_file(s);
    std::string fname(s);
    fname += ".replace";
    std::ofstream r_file(fname);
    
    if (d_file.is_open()) {
        if (r_file.is_open()) {
            std::string content;
            bool flag = false;
            while (std::getline(d_file, content)) {
                size_t index = 0;
                while (true) {
                    index = content.find(s1, index);
                    if (index == std::string::npos) break;
                    content.erase(content.begin()+index, content.begin() + index + s1.length());
                    content.insert(index, s2);
                    index += s2.length();
                }          
                if (flag == false) {
                    r_file << content;
                    flag = true;
                } else
                    r_file << '\n' << content;
            }
        }
        r_file.close();
    }
    d_file.close();
    return ;
} 

int     main(int ac, char **av) {
    if (ac == 4) {
        replace(av[1], av[2], av[3]);
    }
    else
        std::cout << "Useage: ./replace [filename] [string to be replace] [string to replace with]" << std::endl;
    return (0);
}