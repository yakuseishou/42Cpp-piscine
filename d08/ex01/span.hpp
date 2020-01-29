/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 16:49:27 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/24 18:16:23 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>

class Span {
private:
    unsigned int     _len;
    std::vector<int>     _t;
public:
    Span(void);
    Span(const unsigned int n);
    ~Span(void);
    Span(const Span& other);
    Span&      operator=(const Span& other);
    void       addNumber(int n);
    int        shortestSpan();
    int        longestSpan();
    class AddError : public std::exception {
        public:
            virtual const char  *what(void) const throw();
            AddError(void);
            AddError(const AddError & copy);
            ~AddError(void) throw();
            AddError& operator=(const AddError &);
    };

    class SpanNon : public std::exception {
        public:
            virtual const char  *what(void) const throw();
            SpanNon(void);
            SpanNon(const SpanNon & copy);
            ~SpanNon(void) throw();
            SpanNon& operator=(const SpanNon &);
    };

};

#endif