/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:58:49 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/06 13:33:39 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
int main()
{
    Data *node;
    Data *n1;

    node->data = "serialized data";
    node->next= nullptr;
    uintptr_t output = Serializer::serialize(node);
    n1 = Serializer::deserialize(output);
    std::cout<<n1->data<<std::endl;
    return(0);
}
