/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:49:39 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/18 23:22:26 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PMERGEME_HPP)
#define PMERGEME_HPP


#include<iostream>
#include <deque>
#include <utility> 
#include <deque>
#include <vector>
#include <algorithm>
#include <ctime>

class PmergeMe
{
private:
    std::vector<int> myVector;
    std::vector<int> mainV;
    std::vector<std::pair<int, int> > myVOfPairs;
    std::deque<int> myDeque;
    int struggler;
    std::deque<std::pair<int, int> > myDOfPairs;
    std::deque<int> mainDeque;
public:
    size_t size;
    PmergeMe(/* args */);
    int valide_args(char **str);
    void find_Vpairs();
    void find_Dpairs();
    void fill_containers(char **str, int len);
    void sorted_vector();
    void unsorted_vector();
    void sorted_deque();
    void unsorted_deque();
    ~PmergeMe();
};





#endif // PMERGEME_HPP
