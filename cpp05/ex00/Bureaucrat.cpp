/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:16:04 by gghaya            #+#    #+#             */
/*   Updated: 2024/01/22 16:09:41 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    this->name = "Default";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref)
{
    if (&ref != this)
    {
        this->name = ref.name;
        this->grade = ref.grade;  
    }
    return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ref;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    this->name = name;
    try {
        if (grade < 1) {
            throw GradeTooHighException();
        }
        else if (grade > 150) {
            throw GradeTooLowException();
        }
        else {
            this->grade = grade;
        }
    } 
    catch (const GradeTooHighException& e) {
        // Handle GradeTooHighException
        std::cout << e.what() << std::endl;
    } 
    catch (const GradeTooLowException& e) {
        // Handle GradeTooLowException
        std::cout << e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

std::string Bureaucrat::get_name() const
{
    return (this->name);
}

int Bureaucrat::get_grade() const
{
    return (this->grade);
}

void Bureaucrat::increment_grade()
{
    std::cout<<" increment grade"<<std::endl;
    try {
     if (this->grade <= 1) {
         throw GradeTooHighException();
     }
     else {
        this->grade--;
     }
    } 
    catch (const GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    } 
}

void Bureaucrat::decrement_grade()
{
    std::cout<<" decrement grade"<<std::endl;
    try {
     if (this->grade >= 150) {
         throw GradeTooLowException();
     }
     else {
        this->grade++;
     }
    } 
    catch (const GradeTooLowException& e) {
        // Handle GradeTooLowException
        std::cout << e.what() << std::endl;
    }
}


std::ostream& operator<<(std::ostream& o, const Bureaucrat& bureaucrat)
{
    o << bureaucrat.get_name();
    o <<" , bureaucrat grade ";
    o << bureaucrat.get_grade();
    o << std::endl; 
     return (o);
}