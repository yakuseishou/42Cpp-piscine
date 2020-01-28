/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 18:11:47 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/03 15:58:43 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

pony*    ponyOnTheHeap() {
    pony* heap = new pony;
    heap->create_pony();
    heap->runs();
    return (heap);     
}

pony    ponyOnTheStack() {
    pony stack;
    stack.create_pony();
    stack.eats();
    return (stack);
}

int     main() {
    pony* a = ponyOnTheHeap();
    std::cout << "\n";
    pony b = ponyOnTheStack();
    std::cout << "\n";
    delete a;
    return (0);
}