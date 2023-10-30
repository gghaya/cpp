/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:00:08 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/30 23:34:06 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
     o << fixed.toFloat();
     return (o);
}


Fixed::Fixed()
{
    this->value = 0;
}

Fixed::~Fixed()
{
}


int Fixed::getRawBits(void) const
{
     return (this->value);
}

void Fixed::setRawBits(int const raw)
{
     this->value = raw;
}

Fixed::Fixed(const Fixed &ref) {
	 this->setRawBits(ref.getRawBits());
}

Fixed &Fixed::operator=(Fixed const &ref)
{
   if (this != &ref)
     this->value = ref.getRawBits();
     return (*this);
}


Fixed::Fixed(const int number)
{
     this->value = (number << fractional_bits);
}

Fixed::Fixed(const float number)
{
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


const  bool Fixed::operator>(Fixed const &f1)
{
     return (this->getRawBits() > f1.getRawBits());
}

const  bool Fixed::operator<(Fixed const &f1)
{
     return (this->getRawBits() < f1.getRawBits());
}

const  bool Fixed::operator>=(Fixed const &f1)
{
     return (this->getRawBits() >= f1.getRawBits());
}

const  bool Fixed::operator<=(Fixed const &f1)
{
     return (this->getRawBits() <= f1.getRawBits());
}

const  bool Fixed::operator==(Fixed const &f1)
{
     return (this->getRawBits() == f1.getRawBits());
}

 const bool  Fixed::operator!=(Fixed const &f1)
{
     return (this->getRawBits() != f1.getRawBits());
}

const Fixed Fixed::operator+(Fixed const &f1)
{
     Fixed f = Fixed();
     f.setRawBits(f1.getRawBits()+ f1.getRawBits());
     return (f);
}

const Fixed Fixed::operator-(Fixed const &f1)
{
     Fixed f= Fixed();
     f.setRawBits(f1.getRawBits() - f1.getRawBits());
     return (f);
}

 Fixed& Fixed::operator*(Fixed const &f1)
{
     //  Fixed f = Fixed();
     // f.setRawBits(());
     // return (f);
     this->value *= f1.value;
     this->value = this->toFloat();
     return (*this);
}

const Fixed Fixed::operator/(Fixed const &f1)
{
     Fixed f= Fixed();
     if (this->getRawBits() != 0)
          f.setRawBits(this->getRawBits() / f1.getRawBits());
     return (f);
}

Fixed &Fixed::operator++()
{
     ++this->value;
     return (*this);
}

Fixed Fixed::operator++(int post)
{
     Fixed f = *this;
     this->value+=1;
     return (f);
}

Fixed & Fixed::operator--()
{
     --this->value;
     return (*this);
}

Fixed Fixed::operator--(int post)
{
     Fixed f = *this;
     this->value-=1;
     return (f);
}

const Fixed &Fixed::min(Fixed const &f1, Fixed const &f2)  
{
     if (f1.getRawBits() < f2.getRawBits())
          return (f1);
     else
          return (f2);
}

Fixed &Fixed::min(Fixed  &f1, Fixed  &f2)
{
     if (f1.getRawBits() < f2.getRawBits())
          return (f1);
     else
          return (f2);
}

 const Fixed &Fixed::max(Fixed const &f1, Fixed const &f2) 
{
     if (f1.getRawBits() >= f2.getRawBits())
          return (f1);
     else
          return (f2);
}
Fixed &Fixed::max(Fixed  &f1, Fixed  &f2) 
{
     if (f1.getRawBits() >= f2.getRawBits())
          return (f1);
     else
          return (f2);
}

