/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:00:08 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/31 18:46:31 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// *********************************** constructors ***********************************

Fixed::Fixed()
{
    this->value = 0;
}

Fixed::Fixed(const Fixed &ref) {
	 this->setRawBits(ref.getRawBits());
}

Fixed::Fixed(const int number)
{
     this->value = (number << fractional_bits);
}

Fixed::Fixed(const float number)
{
     this->value =roundf(number * (1 << this->fractional_bits));
}

// *********************************** destructor ***********************************

Fixed::~Fixed()
{
}

// *********************************** copy assignment ***********************************
Fixed &Fixed::operator=(Fixed const &ref)
{
   if (this != &ref)
     this->value = ref.getRawBits();
     return (*this);
}

// *********************************** getter & setter ***********************************

int Fixed::getRawBits(void) const
{
     return (this->value);
}

void Fixed::setRawBits(int const raw)
{
     this->value = raw;
}

// *********************************** To functions ***********************************

float Fixed::toFloat(void) const
{
     return ((float)(this->getRawBits()) / (1 << fractional_bits));
}

int Fixed::toInt(void) const
{
     return (this->value >> this->fractional_bits);
}

// *********************************** overloaded operators ***********************************

std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
     o << fixed.toFloat();
     return (o);
}
bool Fixed::operator>(Fixed const &f1)
{
     return (this->getRawBits() > f1.getRawBits());
}

bool Fixed::operator<(Fixed const &f1)
{
     return (this->getRawBits() < f1.getRawBits());
}

bool Fixed::operator>=(Fixed const &f1)
{
     return (this->getRawBits() >= f1.getRawBits());
}

bool Fixed::operator<=(Fixed const &f1)
{
     return (this->getRawBits() <= f1.getRawBits());
}

bool Fixed::operator==(Fixed const &f1)
{
     return (this->getRawBits() == f1.getRawBits());
}

bool  Fixed::operator!=(Fixed const &f1)
{
     return (this->getRawBits() != f1.getRawBits());
}

// *********************************** arithmethic operators ***********************************

const Fixed Fixed::operator+(Fixed const &f1)
{
     this->setRawBits(this->getRawBits()+ f1.getRawBits());
     return (*this);
}

const Fixed Fixed::operator-(Fixed const &f1)
{
     this->setRawBits(this->getRawBits() - f1.getRawBits());
     return (*this);
}

 Fixed& Fixed::operator*(Fixed const &f1)
{
     this->value *= f1.value;
     this->value = this->toFloat();
     return (*this);
}

const Fixed Fixed::operator/(Fixed const &f1)
{
     this->value /= f1.value;
     this->value = this->toFloat();
     return (*this);
}
// *********************************** increment decrement operators ***********************************

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

// *********************************** min & max *************************************************

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

