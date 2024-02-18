/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:35:43 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/18 18:23:00 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
int operation(int i)
{
    if (i == '+' || i =='-' ||  i == '/' || i == '*')
        return(1);
    return(0);
}
int valide_parse(std::string str)
{
    int i = 0;
   while (str[i])
   {
    if ((str[i] == ' ' || str[i] == '\t'))
        i++;
    else if ((str[i] >= '0' && str[i] <= '9'))
        i++;
    else if ((str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'))
        i++;
    else
        return(0);
   }
   return(1);
}

int RPN (std::string str)
{
    int first;
    int second;
    int res = -1;
    std::stack<int> myStack;
    int i = 0;
    if(valide_parse(str) == 0)
    {
        std::cout<<"Error"<<std::endl;
        exit(1);
    }
    while (str[i])
    {
        if (isdigit(str[i]))
        {
            if (str[i] - '0' >= 0 && str[i] - '0' < 10)
                myStack.push(str[i] - '0');
            else
            {
                std::cout<<"Error"<<std::endl;
                exit(1);
            }
            
        }
        else if (operation(str[i]))
        {
            if (myStack.size() >= 2)
            {
                first = myStack.top();
                myStack.pop();
                second = myStack.top();
                myStack.pop();
                if (str[i] == '+')
                    res = first + second;
                else if (str[i] == '-')
                    res = second - first;
                else if (str[i] == '/')
                {
                    if(first != 0)
                        res = second / first;
                    else
                    {
                        std::cout<<"Error"<<std::endl;
                        exit(1);
                    }
                }
                else if (str[i] == '*')
                {
                    res = second * first;
                }
                myStack.push(res);
            }
            else
            {
                std::cout<<"Error"<<std::endl;
                exit(1);
            }
        }
        i++;
    }
    return(res);
}