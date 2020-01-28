/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 09:17:44 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/06 18:59:12 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>

class Logger {
    private:
        void            logToConsole(std::string);
        void            logToFile(std::string);
        std::string     makeLogEntry(std::string);
        std::string     _name;
        std::ofstream   _file;

    public:
        Logger();
        ~Logger();
        void            log(std::string const & dest, std::string const & message);
};

#endif