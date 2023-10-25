/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:01:16 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/23 20:59:16 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

      
#if !defined(ZOMBIE_HPP)
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    std::string get_name();
    void set_name(std::string name);
    void announce();
    Zombie* newZombie( std::string name );
    void randomChump( std::string name );

};

#endif
