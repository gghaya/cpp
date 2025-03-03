/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:01:07 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/08 10:18:03 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <stdexcept>

class  ScalarConverter
{
private:
    /* data */
    ScalarConverter(/* args */);
public:
    ~ ScalarConverter();
    ScalarConverter(const  ScalarConverter &ref);
    ScalarConverter &operator=(const  ScalarConverter &ref);
    static void convert(std::string param);
};


#endif