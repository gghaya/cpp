/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:28:24 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/07 19:24:51 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ICHARACTER_HPP)
#define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
class AMateria;
class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};


#endif // ICHARACTER_HPP
