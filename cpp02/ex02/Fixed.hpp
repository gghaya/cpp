/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:11:43 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/31 18:09:46 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed
{
private:
    int value;
    static const int fractional_bits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &ref);
    Fixed & operator=(Fixed const &f1);	
    int getFractional_bits();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed(const int number);
    Fixed(const float number);
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed & operator++();
    Fixed  operator++(int post);
    Fixed & operator--();
    Fixed  operator--(int post);
    static Fixed & min(Fixed  & f1,Fixed  & f2);
    static const Fixed & min(Fixed const & f1,Fixed const & f2);
    static const Fixed & max(Fixed const  & f1,Fixed  const & f2);
    static Fixed & max(Fixed  & f1,Fixed  & f2);
    bool operator>(Fixed const &f1) ;
    bool operator<(Fixed const &f1) ;
    bool operator>=(Fixed const &f1) ;
    bool operator<=(Fixed const &f1) ;
    bool operator==(Fixed const &f1) ;
    bool operator!=(Fixed const &f1) ;
    const Fixed operator+(Fixed const &f1) ;
    const Fixed operator-(Fixed const &f1) ;
    Fixed& operator*(Fixed const &f1);
    const Fixed operator/(Fixed const &f1);
};
    std::ostream& operator<<(std::ostream &o,  const Fixed &fixed);
#endif