/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:10:40 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/05 14:30:49 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// ***************************************** orthodox canonical form *********************************************************************

 Brain:: Brain()
{
    std::cout <<" Brain Default constructor called"<<std::endl;
}

Brain::~ Brain()
{
    std::cout <<"Brain Default destructor called"<<std::endl;
}


Brain::Brain(const Brain &ref)
{
    std::cout << " Brain Copy constructor called" << std::endl;
    *this = ref;
}

Brain &Brain::operator=(const Brain &ref)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
   if (&ref != this)
    {
        for (int i = 0; i < 100 ; i++)
        {
            this->ideas[i] = ref.ideas[i]; 
        }
    }
    return (*this);
}
