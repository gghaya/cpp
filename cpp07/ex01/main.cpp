/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:54:37 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/07 13:06:01 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"iter.hpp"

int main()
{
    int arr[] = {0,2,7,8,5};
    std::string ar[] = {"A","aHSK","KJASHKJ"};
    iter(arr,5,printElement);
    std::cout<<std::endl;
    iter(ar,3,printElement);
    return(0);
}