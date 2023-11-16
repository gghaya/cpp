/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:56:13 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/08 14:00:21 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice()
{
    type =  "ice";
}

Ice::~Ice()
{
    // std::cout <<type<< " default destructor called"<< std::endl;
}

Ice::Ice(const Ice &ref)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ref;
}

Ice &Ice::operator=(const Ice &ref)
{
    std::cout << "Copy assignment operator called" << std::endl;
   if (&ref != this)
    {
        if (type == ref.type)
            this->type = ref.type;
    }
    return (*this);
}

Ice *Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at "<<target.getName()<<" *"<< std::endl;
}