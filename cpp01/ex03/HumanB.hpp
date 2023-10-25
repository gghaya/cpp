/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:22:38 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/24 14:19:11 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(HUMANB_HPP)
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *weap;
public:
    HumanB(std::string name);
    HumanB(std::string name,  Weapon * type);
    void setWeapon (Weapon &weap);
    ~HumanB();
    void attack();
};



#endif