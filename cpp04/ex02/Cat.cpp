/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:20:25 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/05 14:27:08 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// ***************************************** orthodox canonical form *********************************************************************

 Cat::Cat()
{
    this->type = "Cat";
    brain = new Brain();
    std::cout << type <<" Default constructor called"<<std::endl;
}

Cat::~ Cat()
{
    delete(brain);
    std::cout << type <<" Default destructor called"<<std::endl;
}


Cat::Cat(const Cat &ref)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ref;
}

Cat &Cat::operator=(const Cat &ref)
{
    std::cout << "Copy assignment operator called" << std::endl;
   if (&ref != this)
    {
        this->type = ref.type;
        brain = new Brain();
        *brain = *(ref.brain);
    }
    return (*this);
}
// ***************************************** Make sound *********************************************************************

void Cat::makeSound() const
{
    std::cout << this->type << " meowing " << std::endl;
}