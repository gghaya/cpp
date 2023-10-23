/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:00:54 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/23 18:13:17 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main ()
{
    Zombie foo = Zombie("fzombie");
	Zombie *zoo = NULL;
	
	foo.randomChump("zombie1");
	zoo = zoo->newZombie("zombie2");
	zoo->announce();
	delete(zoo);
}