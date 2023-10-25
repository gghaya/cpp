/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:22:44 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/24 23:12:46 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
HumanB::HumanB(std::string name,  Weapon* type)
{
    if (type)
        this->weap = type;
    this->name = name;
}
void HumanB::setWeapon(Weapon &weap)
{
     this->weap = &weap;
}
HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weap = NULL;
}


HumanB::~HumanB()
{
}

void HumanB::attack()
{

    if (this->weap != NULL && this->weap->getType() != "")
        std::cout << this->name << " : attacks with their " << weap->getType()<< std::endl;
    else
        std::cout << this->name << " : Has no weapon"<< std::endl;
}