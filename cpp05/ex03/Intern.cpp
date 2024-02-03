/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:31:21 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/02 17:49:37 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <string>

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &ref)
{
    *this = ref;
}

Intern &Intern::operator=(const Intern &ref)
{
   (void)ref;
   return (*this);
}

 AForm * Intern::makeForm(std::string formname, const std::string target)
{
   AForm*    forms[] = {
        new RobotomyRequestForm( target ),
        new PresidentialPardonForm( target ),
        new ShrubberyCreationForm( target )
    };
    std::string names[] = { "robotomy request", "presidential pardon", "shrubbery creation"};
    for(int i = 0; i < 3; i++)
    {
        if (formname.compare(names[i]) == 0)
        {
            std::cout << "Intern creates " << forms[i]->get_name()<< std::endl;
           return((forms[i]));
        }
    }
    std::cout << "the form name passed as parameter doesn’t exist " << std::endl;   
   return (nullptr);
}