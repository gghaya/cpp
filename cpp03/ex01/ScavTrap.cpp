/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:49:35 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/01 21:21:06 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ***************************************** orthodox canonical form *********************************************************************

ScavTrap::ScavTrap()
{
    std::cout <<"ScavTrap constructor called"<<std::endl;
    Name = "default name";
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout <<"ScavTrap constructor called"<<std::endl;
    Name = name;
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &ref)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ref;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref)
{
    std::cout << "Copy assignment operator called" << std::endl;
   if (&ref != this)
    {
        this->Name = ref.Name;
        this->Attack_damage = ref.Attack_damage;
        this->Hit_points = ref.Hit_points;
        this->Energy_points = ref.Energy_points;       
    }
    return (*this);
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap Default constructor called"<<std::endl;
}

// ***************************************** others *********************************************************************

 void ScavTrap::guardGate()
{
    std::cout << Name << "  ScavTrap is now in Gate keeper mode"<<std::endl;
}


void  ScavTrap::attack(const std::string& target)
{
    if ( this->Hit_points > 0 && this->Energy_points > 0)
    {
        this->Energy_points-=1;
        std::cout<< "ScavTrap " << this->Name << " attacks "<<target<< " , causing  "<< this->Attack_damage << " points of damage!"<<std::endl;
    }
    else
        std::cout<< "ScavTrap " << this->Name <<" has no energy points or hit points left"<< std::endl;
}
