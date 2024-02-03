/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:31:57 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/02 17:47:02 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_HPP
#define Intern_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
class AForm ;
class Intern {

public:
    Intern();
    ~Intern();
    Intern(const  Intern &ref);
    Intern &operator=(const  Intern &ref);
    AForm *makeForm(std::string formname,  std::string target);
};

#endif // Intern_HPP