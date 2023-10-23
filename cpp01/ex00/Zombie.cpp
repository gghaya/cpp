/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:58:57 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/23 18:09:50 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    this->set_name("Zombie");
}

Zombie::~Zombie()
{
    std::cout << this->get_name() << " has destroyed"<<std::endl;
}

std::string Zombie::get_name()
{
    return (this->name);
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

void Zombie::announce()
{
    std::cout<<this->get_name()<< ": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}