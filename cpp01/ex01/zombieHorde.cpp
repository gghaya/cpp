/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:31:52 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/23 18:39:57 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *Zombie::zombieHorde(int N, std::string name)
{
   Zombie* Zombies = new Zombie[N];

   for (int i = 0 ; i < N ; i++)
   {
      Zombies[i].set_name(name);
   }
   return (Zombies);
}
