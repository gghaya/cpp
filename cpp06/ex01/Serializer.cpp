/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:59:52 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/06 13:26:39 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serializer.hpp"

Serializer::Serializer(/* args */)
{
}

Serializer::Serializer(const Serializer &ref)
{
    *this = ref;
}

Serializer &Serializer::operator=(const Serializer &ref)
{
    (void)ref;
    return(*this);
}

Serializer::~Serializer()
{
}
uintptr_t Serializer::serialize(Data *ptr)
{
    return uintptr_t(reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}
