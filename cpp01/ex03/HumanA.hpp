/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:22:56 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/22 20:29:07 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#if !defined(HUMANA_HPP)
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &weap;
public:
    HumanA(std::string name, Weapon &type);
    ~HumanA();
    void attack();
};



#endif
