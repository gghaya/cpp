/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:43:09 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/01 21:21:51 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// ***************************************** orthodox canonical form *********************************************************************

FragTrap::FragTrap()
{
    std::cout <<"FragTrap constructor called"<<std::endl;
    this->Name = "Default name";
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}


FragTrap::FragTrap(const FragTrap &ref)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = ref;
}

FragTrap &FragTrap::operator=(const FragTrap &ref)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (&ref != this)
    {
        this->Name = ref.Name;
        this->Attack_damage = ref.Attack_damage;
        this->Hit_points = ref.Hit_points;
        this->Energy_points = ref.Energy_points;       
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout <<"FragTrap Default destructor called"<<std::endl;
}

// ***************************************** constructor &  member function *********************************************************************

FragTrap::FragTrap(std::string name)
{
    std::cout <<"FragTrap constructor called"<<std::endl;
     this->Name = name;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}
void FragTrap::highFivesGuys(void)
{
    if (this->Energy_points <= 0)
        std::cout<< "FragTrap "<< Name << " has no energie points" << std::endl;
    else
    {
        Energy_points -= 1;
        std::cout<< "FragTrap "<< Name << " high fives  every body" << std::endl;
    }
}
