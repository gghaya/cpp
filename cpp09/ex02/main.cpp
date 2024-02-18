/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:58:49 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/18 02:51:57 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

int main (int ac, char **av)
{
    PmergeMe P = PmergeMe();
    P.fill_containers(av, ac);
    
    clock_t Dstart = clock();
    P.find_Dpairs();
    clock_t Dend = clock();
    
    clock_t Vstart = clock();
    P.find_Vpairs();
    clock_t Vend = clock();
    P.unsorted_containers();
    P.sorted_containers();
    double Dduration = ((Dend - Dstart) / (double)CLOCKS_PER_SEC)*60;
    std::cout << "Time to process a range of  : "  << Dduration << " micro seconds" << std::endl;
    double Vduration = ((Vend - Vstart) / (double)CLOCKS_PER_SEC)*60;
    std::cout << "Time to process a range of : "  << Vduration << " micro seconds" << std::endl;

    return 0;
}