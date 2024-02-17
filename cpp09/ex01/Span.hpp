/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:55:40 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/14 23:27:39 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
#define Span_HPP
#include<iostream>
#include <vector>

class Span
{
private:
    unsigned int N;
    std::vector<int> myVector;
public:
    Span(/* args */);
    Span(unsigned int N);
    Span(const  Span &ref);
    Span &operator=(const  Span &ref);
    ~Span();
    int shortestSpan();
    int longestSpan();
    void addNumber(int nbr);
    void addNumber(std::vector<int> range);
    class ContainerFull : public std::exception {
        public:
            virtual const char* what() const throw() { return "Error : Container is Full";}
    };
};


#endif