/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:23:48 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/04 17:41:19 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// ***************************************** orthodox canonical form *********************************************************************

 WrongAnimal:: WrongAnimal()
{
    type = "Wrong Animal";
    std::cout << type <<" Default constructor called"<<std::endl;
}

WrongAnimal::~ WrongAnimal()
{
    std::cout << type  <<" Default destructor called"<<std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal &ref)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ref;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ref)
{
    std::cout << "Copy assignment operator called" << std::endl;
   if (&ref != this)
    {
        this->type = ref.type;
    }
    return (*this);
}

// ***************************************** Make sound *********************************************************************

void WrongAnimal::makeSound() const
{
    std::cout << this->type << " Make Sound " << std::endl;
}
std::string WrongAnimal::getType() const
{
    return (this->type);
}