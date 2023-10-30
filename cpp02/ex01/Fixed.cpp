/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:00:08 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/30 23:29:07 by gghaya           ###   ########.fr       */
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


int Fixed::getRawBits(void) const
{
     // std::cout <<"getRawBits member function called"<<std::endl;
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
     this->value = ref.getRawBits();
     return (*this);
}


Fixed::Fixed(const int number)
{
     std::cout << "Int constructor called" << std::endl;
     this->value = (number << fractional_bits);
}

Fixed::Fixed(const float number)
{
     std::cout << "Float constructor called" << std::endl;
     this->value =roundf(number * (1 << this->fractional_bits));
}

float Fixed::toFloat(void) const
{
     return ((float)(this->getRawBits()) / (1 << fractional_bits));
}

int Fixed::toInt(void) const
{
     return (this->value >> this->fractional_bits);
}

std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
     o << fixed.toFloat();
     return (o);
}