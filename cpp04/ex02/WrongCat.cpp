/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:23:54 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/04 19:55:36 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// ***************************************** orthodox canonical form *********************************************************************

 WrongCat:: WrongCat()
{
    type = "Wrong Cat";
    std::cout << type <<" Default constructor called"<<std::endl;

}

WrongCat::~ WrongCat()
{
    std::cout << type  <<"Default destructor called"<<std::endl;
}

WrongCat::WrongCat(const WrongCat &ref)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ref;
}

WrongCat &WrongCat::operator=(const WrongCat &ref)
{
    std::cout << "Copy assignment operator called" << std::endl;
   if (&ref != this)
    {
        this->type = ref.type;
    }
    return (*this);
}

// ***************************************** Make sound *********************************************************************

void WrongCat::makeSound() const
{
    std::cout << this->type << " Moewing " << std::endl;
}