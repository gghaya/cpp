/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:15:54 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/08 14:01:15 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    name = "Default name";
    for (int i = 0; i < 4; i++) {
            Inventory[i] = nullptr;
        }
}

Character::Character(std::string name)
{
    this->name = name;
    for (int i = 0; i < 4; i++) {
        Inventory[i] = nullptr;
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; i++) 
    {
        if (Inventory[i])
            delete(Inventory[i]);
    }
    // std::cout << name << " : destructor called"<< std::endl;
}

std::string const &Character::getName() const
{
   return (name);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++) 
    {
        if (Inventory[i] == NULL)
        {
            Inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (Inventory[idx])
    {
        delete(Inventory[idx]);
        Inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (Inventory[idx])
        Inventory[idx]->use(target);
}

Character::Character(const Character &ref)
{
    *this = ref;
}

Character &Character::operator=(const Character &ref)
{
    if (this != &ref)
    {
        this->name = ref.name;
        for (int i = 0; i < 4; i++) 
        {
            Inventory[i] = ref.Inventory[i];
        }
    }
    return (*this);
}
