/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:43:15 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/01 20:39:46 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(Fragtrap_hpp)
#define Fragtrap_hpp

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &ref);
        FragTrap &operator=(const FragTrap &ref);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif // Fragtrap_hpp
