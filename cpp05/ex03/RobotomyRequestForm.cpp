/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:53:28 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/02 17:41:29 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref):AForm(ref), target(ref.target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &ref)
{
    *this = ref;
    return (*this);
}

std::string RobotomyRequestForm::get_target() const
{
    return (this->target);
}

void RobotomyRequestForm::execute(const Bureaucrat &B)
{
    try{
        if (B.get_grade() > this->get_gradeToExecute())
            throw GradeTooLowException();
        std::cout<<"Makes Noises"<<std::endl;
        bool success = (rand() % 2 == 0);
        if (success) {
            std::cout << get_target() << " has been robotomized successfully!" << std::endl;
        }
        else {
            std::cout << "Robotomy failed for " << get_target() << "." << std::endl;
        }
    }
    catch (const GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }
}


RobotomyRequestForm::~RobotomyRequestForm()
{
}