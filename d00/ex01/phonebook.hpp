/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 16:35:26 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/03 15:42:29 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "info.class.hpp"

const int T_TOTAL = 2;

/* main */
void    print_col(std::string str, int n);
void   addp(fonbk* arr, int* j);

/* searchp.cpp */
void   searchp(fonbk* arr, int* j);

typedef struct	s_hash
{
	std::string		key;
	void		(*func)(fonbk*, int*);
}				p_table;

static p_table	p_hash[T_TOTAL] =
{
	{ "ADD", addp },
	{ "SEARCH", searchp },
};

#endif