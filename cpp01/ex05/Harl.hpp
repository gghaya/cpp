/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Harl.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:25:37 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/21 16:40:18 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(HARL_HPP)
#define HARL_HPP
#include <iostream>
class  Harl
{
private:
     void debug( void );
     void info( void );
     void warning( void );
     void error( void );
public:
    void complain( std::string level );
};

#endif // HARL_HPP