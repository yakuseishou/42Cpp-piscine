/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 19:52:31 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/03 15:40:54 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "info.class.hpp"

void    fonbk::init_fname() {
    getline(std::cin, this->_fname);
    return ;
}

void    fonbk::init_lname() {
    getline(std::cin, this->_lname);
    return ;
}

void    fonbk::init_nickname() {
    getline(std::cin, this->_nickname);
    return ;
}

void    fonbk::init_login() {
    getline(std::cin, this->_login);
    return ;
}

void    fonbk::init_postal() {
    getline(std::cin, this->_postal);
    return ;
}

void    fonbk::init_email() {
    getline(std::cin, this->_email);
    return ;
}

void    fonbk::init_fonum() {
    getline(std::cin, this->_fonum);
    return ;
}

void    fonbk::init_bday() {
    getline(std::cin, this->_bday);
    return ;
}

void    fonbk::init_favorite() {
    getline(std::cin, this->_favorite);
    return ;
}

void    fonbk::init_panz() {
    getline(std::cin, this->_panz);
    return ;
}

void    fonbk::init_weakness() {
    getline(std::cin, this->_weakness);
    return ;
}

std::string    fonbk::get_fname( void ) {
    return _fname;
}

std::string    fonbk::get_lname( void ) {
    return _lname;
}

std::string    fonbk::get_nickname( void ) {
    return _nickname;
}

std::string    fonbk::get_login( void ) {
    return _login;
}

std::string    fonbk::get_postal( void ) {
    return _postal;
}

std::string    fonbk::get_email( void ) {
    return _email;
}

std::string    fonbk::get_fonum( void ) {
    return _fonum;
}

std::string    fonbk::get_bday( void ) {
    return _bday;
}

std::string    fonbk::get_favorite( void ) {
    return _favorite;
}

std::string    fonbk::get_panz( void ) {
    return _panz;
}

std::string    fonbk::get_weakness( void ) {
    return _weakness;
}

fonbk::fonbk(void) {
    this->_fname = "";
    this->_lname = "";
    this->_nickname = "";
    this->_login = "";
    this->_postal = "";
    this->_email = "";
    this->_fonum = "";
    this->_bday = "";
    this->_favorite = "";
    this->_panz = "";
    this->_weakness = "";
    return ;
}

fonbk::~fonbk(void) {
    return ;
}