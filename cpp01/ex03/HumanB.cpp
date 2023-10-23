/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:22:44 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/22 17:05:35 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
// HumanB::HumanB(std::string name, std::string* type)
// {
//     Weapon(type);
//     this->name = name;
// }
void HumanB::setWeapon(Weapon weap)
{
    this->weap = &weap;
}
HumanB::HumanB(std::string name)
{
    this->name = name;
}


HumanB::~HumanB()
{
}

void HumanB::attack()
{
    std::cout << this->name << " : attacks with their " << weap->getType()<< std::endl;
}