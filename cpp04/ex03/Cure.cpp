/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:05:10 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/08 14:00:03 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    type =  "cure";
}

Cure::~Cure()
{
}

Cure::Cure(const Cure &ref)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ref;
}

Cure &Cure::operator=(const Cure &ref)
{
    std::cout << "Copy assignment operator called" << std::endl;
   if (&ref != this)
    {
        if (type == ref.type)
            this->type = ref.type;
    }
    return (*this);
}

Cure *Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals "<<target.getName()<<"’s wounds *"<< std::endl;
}