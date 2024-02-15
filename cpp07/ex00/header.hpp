/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:07:28 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/07 12:09:29 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
template<typename T>

void swap (T &a, T &b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template<typename T>

T min (T a, T b)
{
    if(b <=  a)
        return(b);
    return(a);
}

template<typename T>

T max (T a, T b)
{
    if(b >=  a)
        return(b);
    return(a);
}

#endif