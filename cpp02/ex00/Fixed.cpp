/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:00:08 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/27 17:27:16 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout <<"Default constructor called"<<std::endl;
    this->value = 0;
}

Fixed::~Fixed()
{
     std::cout <<"destructor called"<<std::endl;
}

int Fixed::getValue()
{
     return (this->value);
}

int Fixed::getFractional_bits()
{
     return (this->fractional_bits);
}

int Fixed::getRawBits(void) const
{
     std::cout <<"getRawBits member function called"<<std::endl;
     return (this->value);
}

void Fixed::setRawBits(int const raw)
{
     this->value = raw;
}

Fixed::Fixed(const Fixed &ref) {
	std::cout << "Copy constructor called" << std::endl;
	 this->setRawBits(ref.getRawBits());
}

Fixed &Fixed::operator=(Fixed const &ref)
{
   std::cout << "Copy assignment operator called" << std::endl;
   if (this != &ref)
     this->setRawBits(ref.getRawBits());
     return (*this);
}


