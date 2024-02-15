/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:43:36 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/06 20:13:30 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Base_HPP
#define Base_HPP
#include<iostream>

struct Data {
    std::string data;
    Data* next;
};

class Base
{
private:
public:
    virtual ~Base();
};


#endif