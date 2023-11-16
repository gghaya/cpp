/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:29:23 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/08 14:00:36 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        templates[i]= NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if ( templates[i])
           delete(templates[i]);
    }
}

MateriaSource::MateriaSource(const MateriaSource &ref)
{
    *this = ref;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &ref)
{
    for (int i =0; i < 4 ; i++)
    {
        templates[i] = ref.templates[i];
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria * m)
{
    for (int i =0; i < 4 ; i++)
    {
        if (templates[i] == NULL)
        {
            templates[i] = m;
            return ;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0 ; i < 4 ; i++)
    {
        if (templates[i] && templates[i]->getType() == type)
            return (templates[i]->clone());
    }
    return (0);
}