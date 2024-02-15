/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:54:37 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/08 14:55:17 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
    // Test default constructor
    // Array<int> arr1[2];
    // std::cout << "Size of arr1: " << arr1.size() << std::endl;

    // Test parameterized constructor
    Array<int> arr2(5);
    std::cout << "Size of arr2: " << arr2.size() << std::endl;
    arr2[0] = 12;
    arr2[1] = 13;
    std::cout << " arr2[0] " << arr2[1] << std::endl;

    return 0;
}