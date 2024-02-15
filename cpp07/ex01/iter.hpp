/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:07:28 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/07 13:05:05 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
template<typename T>

void printElement(T &x) {
    std::cout << x << " ";
}

template<typename T>

void iter(T *array, int len, void(*fct)(T&))
{
    int i = 0;
    while (i < len)
    {
        fct(array[i]);
        i++;
    }
}


#endif