/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:56:53 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/31 16:26:54 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
private:
    int value;
    static const int fractional_bits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &ref);
    Fixed & operator=(Fixed const & rhs);	
    int getFractional_bits();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed(const int);
    Fixed(const float);
    float toFloat( void ) const;
    int toInt( void ) const;
};
std::ostream& operator<<(std::ostream &o,  const Fixed &fixed);

#endif