/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:09:39 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/08 12:49:45 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(DOG_HPP)
#define DOG_HPP

#include <iostream>
#include"Animal.hpp"

class Dog : public Animal
{

public:
    Dog();
    Dog(const Dog &ref);
    Dog &operator=(const Dog &ref);
    ~Dog();
    void makeSound() const;
};

#endif