/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:23:00 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/22 20:29:26 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &type):weap(type)
{
    this->name = name;
    weap = type;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << this->name << " : attacks with their " << weap.getType()<< std::endl;
}