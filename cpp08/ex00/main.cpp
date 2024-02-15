/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:29:42 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/14 23:18:18 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include<list>

int main() {
    // Initializing vector without initializer list
    int arr[] = {10, 20, 30, 40, 50};
    std::vector<int> myVector(arr, arr + sizeof(arr) / sizeof(arr[0]));

    // Initializing list without initializer list
    int arr2[] = {5, 10, 15, 20};
    std::list<int> myList(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));

    // Testing with a vector
    easyfind(myVector, 30);  // Element found at index: 2
    easyfind(myList, 25);    // Element not found.
    easyfind(myVector, 60);  // Element not found.
    easyfind(myList, 20);    // Element found at index: 2

    // Testing with a list

    return 0;
}