/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:38:25 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/23 19:01:26 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
int main()
{
    Zombie *tb = NULL;
	int	N = 10;
	
	tb = tb->zombieHorde(N, "Zombie");
	for (int i = 0; i < N; i++)
		tb[i].announce();

	delete[] tb;
	while(1);
}