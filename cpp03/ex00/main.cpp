/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 23:39:17 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/01 21:05:59 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main() {
    ClapTrap claptrap("claptrap-3");
    // claptrap.setAttakDamage(50);
    claptrap.attack("Enemy");
    claptrap.takeDamage(0);
    claptrap.beRepaired(0);
    return 0;
}