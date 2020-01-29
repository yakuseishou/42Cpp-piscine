/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 16:49:23 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/24 19:00:27 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : _len(0), _t(0) {}
Span::Span(const unsigned int n) : _len(n){_t.reserve(n);}
Span::~Span(void) {}
Span::Span(const Span& other) {
    *this = other;
}
Span&       Span::operator=(const Span& other) {
    if (this != &other) {
        this->_len = other._len;
        this->_t = other._t;
    }
    return (*this);
}
void        Span::addNumber(int n) {
    if (_t.size() == _len)
        throw AddError();
    _t.push_back(n);
}
int        Span::shortestSpan() {
    if (_t.size() < 2)
        throw SpanNon();

    int     min = 2147483647;
    std::vector<int>copy = this->_t;
    std::sort(copy.begin(), copy.end());
    int     prev = *copy.begin();
    for (std::vector<int>::iterator it = copy.begin(); it != copy.end(); ++it) {
        if (it != copy.begin() && min > (*it) - prev)
            min = (*it) - prev;
        prev = *it;
    }
    return (min);
}
int        Span::longestSpan() {
    if (_t.size() < 2)
        throw SpanNon();
        
    int     max = 0;
    for (unsigned long i = 0; i < _t.size() - 1;i++) {
        if (_t[i] > _t[i + 1]) {
            if (max < _t[i] - _t[i + 1])
                max = _t[i] - _t[i + 1];
        } else if (_t[i] < _t[i + 1]) {
            if (max < _t[i + 1] - _t[i])
                max = _t[i + 1] - _t[i];
        }
    }
    return (max);
}

typedef Span::AddError AddError;
AddError::AddError(void) {}
AddError::AddError(const AddError & other) {*this = other;}
AddError::~AddError(void) throw() {}
AddError& AddError::operator=(const AddError &) {return *this;}
const char     *AddError::what(void) const throw() {
    return ("OverArrayLimit");
}

typedef Span::SpanNon SpanNon;
SpanNon::SpanNon(void) {}
SpanNon::SpanNon(const SpanNon & other) {*this = other;}
SpanNon::~SpanNon(void) throw() {}
SpanNon& SpanNon::operator=(const SpanNon &) {return *this;}
const char     *SpanNon::what(void) const throw() {
    return ("No Span");
}