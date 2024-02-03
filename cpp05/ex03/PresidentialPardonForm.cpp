#include "PresidentialPardonForm.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:15:15 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/01 18:15:16 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):AForm("PresidentialPardon", 25, 5)
{
    this->target = target;
}

void PresidentialPardonForm::execute(const Bureaucrat &B)
{
    try{
        if (B.get_grade() > this->get_gradeToExecute())
            throw GradeTooLowException();
        std::cout << get_target() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    catch (const GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }
}

std::string PresidentialPardonForm::get_target() const
{
    return (this->target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref):AForm(ref), target(ref.target)
{
    try{
        if (this->get_gradeToExecute() < 1 || this->get_gradeToSign() < 1)
            throw GradeTooHighException();
        else if (ref.get_gradeToExecute() > 150 || ref.get_gradeToSign() > 150)
            throw GradeTooLowException();
    }
    catch (const GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    } 
    catch (const GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &ref)
{
    *this = ref;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
