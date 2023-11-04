/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:30:05 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/01 21:11:10 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
    ScavTrap Scav("Scav-3");
    Scav.attack("Enemy");
    Scav.takeDamage(50);
    Scav.beRepaired(3);
    Scav.guardGate();
    
    return 0;
}