/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 10:56:02 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/06 19:00:35 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <ctime>
#include <fstream>

Logger::Logger() {
    _name = "log.txt";
    _file.open(_name, std::ios_base::app);
    if (!(_file.is_open()))
        std::cout << "ERROR with openning file\n";
    return ;
}

Logger::~Logger() {
    _file.close();
    return ;
}

void            Logger::logToConsole(std::string msg) {
    std::cout << msg << std::endl;
    return ;
}

void            Logger::logToFile(std::string msg) {
    _file << msg << std::endl;
    return ;
}

std::string     Logger::makeLogEntry(std::string msg) {
    time_t  raw;
    struct  tm* timeinfo;
    char    buff[80];

    time(&raw);
    timeinfo = localtime(&raw);

    strftime(buff, sizeof(buff), "%d-%m-%Y",timeinfo);
    std::string str(buff);
    str += " \"" + msg + "\"";
    return (str);
}

typedef struct
{
	std::string		key;
	void		(Logger::*func)(const std::string);
}				func_log;

void            Logger::log(std::string const & dest, std::string const & message) {
    const int log_TOTAL = 2;
    std::string msg = this->makeLogEntry(message);

    func_log	log_tab[log_TOTAL] =
    {
        { "logToConsole", &Logger::logToConsole },
        { "logToFile", &Logger::logToFile },
    };

    for (int i = 0 ; i < log_TOTAL; i++) {
        if (log_tab[i].key == dest)
            (*this.*log_tab[i].func)(msg);
    }

}