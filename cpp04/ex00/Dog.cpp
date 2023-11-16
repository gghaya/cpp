/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:20:30 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/08 12:50:35 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

// ***************************************** orthodox canonical form *********************************************************************

 Dog:: Dog()
{
    type = "Dog";
    std::cout << type <<" Default constructor called"<<std::endl;
}

Dog::~ Dog()
{
    std::cout << type<<" Default destructor called"<<std::endl;
}


Dog::Dog(const Dog &ref)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ref;
}

Dog &Dog::operator=(const Dog &ref)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (&ref != this)
    {
        this->type = ref.type;
    }
    return (*this);
}

// ***************************************** Make sound *********************************************************************

void Dog::makeSound() const
{
    std::cout << this->type << " Barking " << std::endl;
}
