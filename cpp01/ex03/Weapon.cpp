/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:33:55 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/22 20:34:40 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"
Weapon::Weapon()
{
    this->type = "default type";
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}
Weapon::~Weapon()
{
}

std::string Weapon::getType()
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}