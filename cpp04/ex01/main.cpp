/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:07:54 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/08 13:11:32 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    // Animal* Animals[10];
    // for(int i = 0; i < 5 ; i++)
    // {
    //     Animals[i] = new Cat();
    // }
    // for(int i = 5 ; i < 10 ; i++)
    // {
    //     Animals[i] = new Dog();
    // }
    // for(int i = 0; i < 10 ; i++)
    // {
    //      delete Animals[i];
    // }
    return (0);
}