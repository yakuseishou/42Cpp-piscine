/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 17:46:29 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/23 20:47:03 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template< typename T>
class Array {
private:
    T*              _Arr;
    unsigned int    _n;
public:
    Array<T>(void) :
        _Arr(nullptr),
        _n(0) {};
    Array<T>(unsigned int n) {
        _Arr = new T[n];
        _n = n;
        // for (unsigned int i = 0; i < n; i++) {
        //     _Arr[i] = NULL;
        // }
    };
    ~Array<T>(void) {
        if (_Arr != NULL)
            delete [] _Arr;
    };
    Array<T>(Array &other) {
        _Arr = new T[other._n];
        for (unsigned int i = 0; i < other._n; i++) {
            _Arr[i] = other._Arr[i];
        }
        _n = other._n;
    };
    Array<T> & operator=(Array &other) {
        if (this != &other) {
            if (_Arr != NULL)
                delete [] _Arr;
            _Arr = new T[other._n];
            for (unsigned int i = 0; i < other._n; i++) {
                _Arr[i] = other._Arr[i];
            }
            _n = other._n;
        }
        return (*this);
    };
    T & operator[](unsigned int n) {
        if (n >= _n || !_Arr) {
            throw overLimit();
        }
        return (_Arr[n]);
    }
    unsigned int    size(void) const {
        return (_n);
    };
    class overLimit : public std::exception {
        public:
            virtual const char  *what(void) const throw() {
                return ("Invalid Index");
            };
            overLimit(void) {};
            overLimit(const overLimit & other) {
                *this = other;
            };
            ~overLimit(void) throw() {};
            overLimit& operator=(const overLimit &) {
                return (*this);
            };
    };
};

#endif