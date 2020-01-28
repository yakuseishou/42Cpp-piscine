/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 18:24:51 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/06 19:00:00 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Logger.hpp"

int     main()
{
    Logger* x = new Logger();
    std::string msg;

    getline(std::cin, msg);
    while (msg != "EXIT") {
        x->log("logToConsole", msg);
        x->log("logToFile", msg);
        getline(std::cin, msg);
    }
    delete x;
    return (0);
}