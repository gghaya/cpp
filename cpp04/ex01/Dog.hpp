/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:09:39 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/08 13:09:03 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(DOG_HPP)
#define DOG_HPP

#include <iostream>
#include"Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *brain;
public:
    Dog(/* args */);
    Dog(const Dog &ref);
    Dog &operator=(const Dog &ref);
    ~Dog();
    void makeSound() const;
};

#endif