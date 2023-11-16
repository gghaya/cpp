/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:24:40 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/04 19:15:23 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
private:
    /* data */
public:
    Cat();
    Cat(const Cat &ref);
    Cat &operator=(const Cat &ref);
    ~Cat();
    void makeSound() const;
};


#endif

