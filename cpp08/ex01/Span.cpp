/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:59:52 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/06 13:26:39 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(/* args */)
{
}
Span::Span(unsigned int N)
{
    this->N = N;
}

Span::Span(const Span &ref)
{
    *this = ref;
}

Span &Span::operator=(const Span &ref)
{
    if (&ref != this)
    {
        N = ref.N;
        myVector = ref.myVector;
    }
    return(*this);
}

Span::~Span()
{
}
int Span::shortestSpan()
{
   std::sort(myVector.begin(), myVector.end(), std::greater<int>());
    int min = myVector[0] - myVector[1];
    int diff;
    for (int i = 1; i < myVector.size() - 1; ++i) {
        diff = myVector[i] - myVector[i + 1];
        if (diff < min)
            min =diff;
    }
    return (min);
}
int Span::longestSpan()
{
    std::sort(myVector.begin(), myVector.end());
    return ((myVector[myVector.size() - 1] -  myVector[0] ));
}
void Span::addNumber(int nbr)
{
    if (this->myVector.size() >= N)
        throw ContainerFull();
    this->myVector.push_back(nbr);
}

void Span::addNumber(std::vector<int> range)
{
    if (N - myVector.size() >= range.size())
        std::copy(range.begin(), range.end(), std::back_inserter(myVector));
    else
        throw ContainerFull();
}
