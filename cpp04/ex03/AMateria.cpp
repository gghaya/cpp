/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:04:56 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/08 13:28:25 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
    this->type = type;
    // std::cout << "Constructor called"<< std::endl;
}

std::string const &AMateria::getType() const
{
    return(type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << type << "use function called" << std::endl;
}
// ***************************************** orthodox canonical form *********************************************************************

 AMateria:: AMateria()
{
    type = "AMateria";
    // std::cout << type <<" Default constructor called"<<std::endl;
}

AMateria::~ AMateria()
{
    // std::cout <<" Default destructor called"<<std::endl;
}


AMateria::AMateria(const AMateria &ref)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ref;
}

AMateria &AMateria::operator=(const AMateria &ref)
{
    std::cout << "Copy assignment operator called" << std::endl;
   if (&ref != this)
    {
        if (type == ref.type)
            this->type = ref.type;
    }
    return (*this);
}
