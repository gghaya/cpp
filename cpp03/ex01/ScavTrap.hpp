/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:49:40 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/01 19:50:33 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(SCAVTRAP_HPP)
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &ref);
        ScavTrap &operator=(const ScavTrap &ref);
        ~ScavTrap();
        void guardGate();
        void attack(const std::string& target);
        // int getHit_points();
        // void setHit_points(int hitpoint);
        // int getEnergy_points();
        // void setEnergy_points(int Energypoints);
        
};

#endif // SCAVTRAP_HPP
