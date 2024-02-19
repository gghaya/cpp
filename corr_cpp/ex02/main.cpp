/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:58:49 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/18 23:29:43 by gghaya           ###   ########.fr       */
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

    
    std::cout << "****************** Vector ******************" << std::endl;
    P.unsorted_vector();
    P.sorted_vector();
    float Vduration = ((Vend - Vstart) / (float)CLOCKS_PER_SEC)*1000;
    std::cout << "Time to process a range of "  << P.size << " elements with std::Vector : "<< Vduration << " micro seconds" << std::endl;

    
    std::cout << "****************** Deque ******************" << std::endl;
    P.unsorted_deque();
    P.sorted_deque();
    float Dduration = ((Dend - Dstart) / (float)CLOCKS_PER_SEC)*1000;
    std::cout << "Time to process a range of "  << P.size << " elements with std::Deque : "<<  Dduration << " micro seconds" << std::endl;

    return 0;
}