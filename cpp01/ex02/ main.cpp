/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    main.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:10:51 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/20 17:25:16 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main ()
{
    std::string A = "HI THIS IS BRAIN";
    std::string* stringPTR;
    stringPTR = &A;
    std::string &stringREF = A;
    std::cout << "The memory address of the string variable is : "<< stringPTR<<std::endl;
    std::cout <<"The memory address held by stringPTR is      : " << &stringPTR<<std::endl;
    std::cout << "The memory address held by stringREF is      : " << &stringREF<< std::endl;
    
    std::cout << "The value of the string variable             : " << A << std::endl;
    std::cout << "The value pointed to by stringPTR            : " << (*stringPTR) << std::endl;
    std::cout << "The value pointed to by stringREF            : " << stringREF << std::endl;
}