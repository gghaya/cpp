/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 23:39:31 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/01 21:16:01 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ***************************************** orthodox canonical form *********************************************************************

 ClapTrap:: ClapTrap()
{
    std::cout <<"Default constructor called"<<std::endl;
    this->Name = "Default name";
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::~ ClapTrap()
{
    std::cout <<"Default destructor called"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ref;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
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

// ***************************************** constructor *********************************************************************

 ClapTrap:: ClapTrap(std::string name)
{
    std::cout<<"constructor called"<<std::endl;
    this->Name = name;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

// ***************************************** member functions *********************************************************************

 void ClapTrap::attack(const std::string &target)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        Energy_points-=1;
        std::cout<< "ClapTrap " << this->Name << " attacks "<<target<< " , causing  "<< this->Attack_damage << " points of damage!"<<std::endl;
    }
    else
        std::cout<< "ClapTrap " << this->Name <<" has no energy points or hit points left"<< std::endl;
}

 void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points >= amount  && Hit_points > 0)
    {
            Hit_points -= amount;
            std::cout << "ClapTrap " << Name << " takes " << amount << " damage and now has " << Hit_points << " hit points." << std::endl;
    } 
    else 
        std::cout << "ClapTrap " << Name << " is already out of hit points." << std::endl;
}

 void ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit_points > 0 && Energy_points > 0 && amount <  2147483647)
    {
        Hit_points += amount;
        Energy_points-=1;
        std::cout<< "ClapTrap " << this->Name << " repaired it self  with "<< amount << " points!"<<std::endl;
    }
    else
        std::cout<< "ClapTrap " << this->Name << " cant be repaired"<<std::endl;
}

// ***************************************** getter and setter *********************************************************************

void ClapTrap::setAttakDamage(unsigned int damage)
{
    if (damage < 2147483647 )
        this->Attack_damage = damage;
}

unsigned int ClapTrap::getAttackDamage()
{
    return (Attack_damage);
}
