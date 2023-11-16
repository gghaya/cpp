/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:20:30 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/05 13:53:52 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

// ***************************************** orthodox canonical form *********************************************************************

 Dog:: Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << type <<" Default constructor called"<<std::endl;
}

Dog::~ Dog()
{
    delete(brain);
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
        brain = new Brain();
        *brain = *(ref.brain);
    }
    return (*this);
}

// ***************************************** Make sound *********************************************************************

void Dog::makeSound() const
{
    std::cout << this->type << " Barking " << std::endl;
}
