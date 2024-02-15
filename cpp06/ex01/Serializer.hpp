/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:55:40 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/06 13:28:28 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include<iostream>

struct Data {
    std::string data;
    Data* next;
};

class Serializer
{
private:
    /* data */
    Serializer(/* args */);
public:
    Serializer(const  Serializer &ref);
    Serializer &operator=(const  Serializer &ref);
    ~Serializer();
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};


#endif