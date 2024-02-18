/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:29:42 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/17 13:49:54 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac , char *av[]) {
    if (ac == 2)
    {
        BitcoinExchange B = BitcoinExchange();
        B.read_csv("data.csv");
        B.read_input(av[1]);
    }
    else if (ac == 1)
        std::cout<< "Error: could not open file."<<std::endl;
    return(0);
}