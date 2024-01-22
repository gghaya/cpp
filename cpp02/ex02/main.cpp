/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:11:20 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/31 18:46:54 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"




int main( void ) {
Fixed  a;
Fixed  c(50);
Fixed  d(5.05f);
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
// std::cout << Fixed::min( a, b ) << std::endl;
// std::cout <<"c/d "<< c/d << std::endl;
// std::cout <<"d/c "<< d/c << std::endl;
// std::cout <<"d+c "<< d+c << std::endl;
// std::cout <<" d-c"<< d-c << std::endl;
// std::cout <<"d>c  "<< (c > d) << std::endl;
// std::cout <<"d<=c"<< d <= c << std::endl;
return 0;
}
