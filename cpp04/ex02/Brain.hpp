/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:57:16 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/04 20:00:28 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain 
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain &ref);
    Brain &operator=(const Brain &ref);
    ~Brain();
};

#endif