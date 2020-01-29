/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 19:10:51 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/24 20:24:00 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iterator>
# include <stack>

template< typename T >
class MutantStack : public std::stack<T> {
public:
    MutantStack(void) {};
    ~MutantStack(void) {};
    MutantStack(const MutantStack& other) {*this = other;}
    MutantStack& operator=(const MutantStack& other) {
        if (this != &other)
            std::stack<T>::operator=(other);
        return (other);
    }

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator    begin() {return std::begin(std::stack<T>::c);}
    iterator    end() {return std::begin(std::stack<T>::c);}
};

#endif