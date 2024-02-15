/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:03:15 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/08 11:22:49 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <string>
#include <sstream>
#include <iomanip>

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &ref)
{
    *this = ref;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &ref)
{
    return (*this);
}

bool is_char (std::string param)
{
    if (param.length() == 1 && !isdigit(param[0]))
        return(true);
    return(false);
}

int ft_atoi(std::string str) {
    int result = 0;
    int sign = 1;
    size_t index = 0;

    if (index < str.length() && (str[index] == '-' || str[index] == '+')) {
        if((str[index] = '-'))
            sign = -1;
        index++;
    }

    while (index < str.length() && str[index] >= '0' && str[index] <= '9') {
        result = result * 10 + (str[index] - '0');
        index++;
    }
    return sign * result;
}

bool is_int(std::string param)
{
    int result = 0;
    int sign = 1;
    size_t index = 0;

    if (index < param.length() && (param[index] == '-' || param[index] == '+')) {
        if((param[index] = '-'))
            sign = -1;
        index++;
    }

    while (index < param.length()) {
        if (param[index] >= '0' && param[index] <= '9')
            result = result * 10 + (param[index] - '0');
        else
            return (false);
        index++;
    }
    // if ((sign * result) > 2147483647 || (sign * result) < -2147483648)
	// 	return (false);
    return true;
}



bool is_double(const std::string input) {
    size_t index = 0;
    bool hasDot = false;
    bool hasDigits = false;

    // Check for optional sign
    if (input[index] == '+' || input[index] == '-') {
        index++;
    }

    // Check for digits before the dot
    while (index < input.length() && input[index] != '.') {
        if(std::isdigit(input[index]))
            index++;
        else
            return(false);
        hasDigits = true;
    }

    if (input[index] == '.') {
        hasDot = true;
        index++;

        while (std::isdigit(input[index])) {
            hasDigits = true;
            index++;
        }
    }
    return index == input.length() && hasDigits && hasDot;
}

bool is_float(std::string param)
{
   if (is_double(param.substr(0,param.length()- 1)) && param[param.length() - 1] == 'f')
        return(true);
    return(false);
}
bool not_type(std::string param)
{
    if (param == "nan" || param == "+inf" || param == "-inf")
    {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << param << "f" << std::endl;
         std::cout << "double: " << param << std::endl;
    }
    return(false);
}


void cast_char(std::string param)
{
    char c;
    int n;
    float f;
    double d;
    
    c = static_cast<char>(param[0]);
    if(c < 32 || c == 127)
        std::cout << "char : " << "Non displayable" << std::endl;
    else
        std::cout << "char : " << c << std::endl;
    n = static_cast<int>(c);
    std::cout << "int : " << n << std::endl;
    f = static_cast<float>(c);
    std::cout << "float : " << f <<".f"<< std::endl;
    d = static_cast<double>(c);
    std::cout << "double : " << d <<".0"<< std::endl;
}

void cast_int(std::string param)
{
    char c;
    int n;
    float f;
    double d;
    
    n = static_cast<int>(ft_atoi(param));
    c = static_cast<char>(c);
    if(c < 32 || c == 127)
        std::cout << "char : " << "Non displayable" << std::endl;
    else
        std::cout << "char : " << c << std::endl;
    if (n > 2147483647 || n < -2147483648)
        std::cout << "int : " << "Impossible" << std::endl;
    else
        std::cout << "int : " << n << std::endl;
    f = static_cast<float>(c);
    std::cout << "float : " << f <<".0f"<< std::endl;
    d = static_cast<double>(c);
    std::cout << "double : " << d <<".0"<< std::endl;
}

void cast_float(std::string param)
{
    double f;
    size_t decimalPos = param.find('.');
    size_t numDecimalPlaces = param.length() - decimalPos;
    f = std::stod(param);
    std::cout.precision(numDecimalPlaces); 
    char c = static_cast<char>(f);
    if(c < 32 || c > 126)
        std::cout << "char: " << "Non displayable" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
    if (f > MAXFLOAT || f < INT_MIN)
        std::cout << "float: " << "impossible" << std::endl;
    else
        std::cout << "float: "<< std::fixed << std::setprecision(numDecimalPlaces) << "f"<< std::endl;
    if (f > INT_MAX || f < INT_MIN)
        std::cout << "int: " << "impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(f) << std::endl;
    std::cout << "double: "  << static_cast<double>(f) << std::endl;

}

void cast_double(std::string param)
{
    double f;
    size_t decimalPos = param.find('.');
    size_t numDecimalPlaces = param.length() - decimalPos;
    f = std::stod(param);
    std::cout.precision(numDecimalPlaces); 

    char c = static_cast<char>(f);
    if(c < 32 || c > 126)
        std::cout << "char: " << "Non displayable" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "double: "  << static_cast<double>(f) << std::endl;
    if (f > MAXFLOAT || f < INT_MIN)
        std::cout << "float: " << "impossible" << std::endl;
    else
        std::cout << "float: "  << std::fixed << std::setprecision(numDecimalPlaces)<< "f" << std::endl;
    if (f > INT_MAX || f < INT_MIN)
        std::cout << "int: " << "impossible" << std::endl;
    else
        std::cout << "int: " << std::fixed << std::setprecision(numDecimalPlaces) << std::endl;
}
void ScalarConverter::convert(std::string param)
{
    try
    {
        not_type(param);
        if (is_char(param))
            cast_char(param);
        else if (is_int(param))
           cast_int(param);
        else if (is_float(param))
            cast_float(param);
        else if (is_double(param))
            cast_double(param);
            
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}