/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:22:38 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/22 20:31:12 by gghaya           ###   ########.fr       */
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
    // HumanB(std::string name, std::string* type);
    void setWeapon (Weapon weap);
    ~HumanB();
    void attack();
};



#endif