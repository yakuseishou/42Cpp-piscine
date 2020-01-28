/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 16:19:59 by kchen2            #+#    #+#             */
/*   Updated: 2019/12/27 21:23:58 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main(int ac, char **av) {
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    for (int i = 1; i < ac; i++) {
        for (int j = 0; av[i][j] != '\0'; j++) {
            if (av[i][j] >= 'a' && av[i][j] <= 'z')
                std::cout << (char)(av[i][j] - 32);
            else
                std::cout << av[i][j];
        }
    }
    std::cout << "\n";
    return (0);
}