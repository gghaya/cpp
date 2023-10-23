/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:25:34 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/23 19:36:25 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef void (Harl::*p_func)( void );

void Harl::debug(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"<<std::endl;
}

void Harl::info(void)
{
    std::cout<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" <<std::endl;
}

void Harl::warning(void)
{
    std::cout<< "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." <<std::endl;
}

void Harl::error(void)
{
    std::cout<< "This is unacceptable! I want to speak to the manager now." <<std::endl;
}

void Harl::complain(std::string level)
{
    p_func a[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string names[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    for(int i = 0; i < 4; i++)
    {
        if (level.compare(names[i]) == 0)
           return((this->*a[i])());
    }
}
