/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:19:26 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/08 13:17:53 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// ***************************************** orthodox canonical form *********************************************************************

 Animal:: Animal()
{
    type = "Animal";
    std::cout << type <<" Default constructor called"<<std::endl;
}

Animal::~ Animal()
{
    std::cout <<"Animal Default destructor called"<<std::endl;
}


Animal::Animal(const Animal &ref)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ref;
}

Animal &Animal::operator=(const Animal &ref)
{
    std::cout << "Copy assignment operator called" << std::endl;
   if (&ref != this)
    {
        this->type = ref.type;
    }
    return (*this);
}

// ***************************************** Make sound *********************************************************************

std::string Animal::getType() const
{
    return (this->type);
}
