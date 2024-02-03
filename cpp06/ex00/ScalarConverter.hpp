/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:01:07 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/03 12:33:25 by gghaya           ###   ########.fr       */
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
    //**************Exceptions classes*************
    class InfinityException : public std::exception {
    public:
         virtual const char* what() const throw() {
            return "Infinity Exception: The value is either +inf or -inf.";
        }
    };
    class NaNException : public std::exception {
    public:
         virtual const char* what() const throw() {
            return "NaN Exception: The value is not a number (NaN).";
        }
    };
    class NonDisplayableCharacterException : public std::exception {
    public:
         virtual const char* what() const throw() {
            return "Non-Displayable Character Exception: The character is not displayable.";
        }
    };
    class TypeConversionException : public std::exception {
    public:
         virtual const char* what() const throw() {
            return "Type Conversion Exception: Conversion is impossible.";
        }
    };
};


#endif