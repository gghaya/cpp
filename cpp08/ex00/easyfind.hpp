/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:01:07 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/08 10:18:03 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef easyfind_HPP
#define easyfind_HPP
#include <iostream>
#include <algorithm>

  class ElementNotFound : public std::exception {
        public:
            virtual const char* what() const throw() { return "Error : Element not found";}
    };

template<typename T>
typename T::iterator easyfind(T &Container, int element)
{
    typename T::iterator it = std::find(Container.begin(), Container.end(), element);
    try{
        if (it != Container.end()) {
            std::cout << "Element found at index: " << std::distance(Container.begin(), it)<< std::endl;
        } else {
            throw ElementNotFound();
        }
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (it);
}


#endif