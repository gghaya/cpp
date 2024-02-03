/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:29:42 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/02 19:47:07 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat B = Bureaucrat("Ghizlane", 180);
    std::cout<<B;
    B.decrement_grade();
    // std::cout<<B;
    B.increment_grade();
    std::cout<<B;
    return(0);
}