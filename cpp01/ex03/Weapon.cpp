/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:33:55 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/24 22:58:05 by gghaya           ###   ########.fr       */
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

const std::string& Weapon::getType()
{
    return(this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}