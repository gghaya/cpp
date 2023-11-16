/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:57:16 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/08 13:07:24 by gghaya           ###   ########.fr       */
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
    virtual ~Brain();
};

#endif