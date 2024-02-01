/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:16:04 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/01 23:33:19 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref)
{
    if (&ref != this)
    {
        this->grade = ref.grade;  
    }
    return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ref;
}

Bureaucrat::Bureaucrat(std::string name, int grade):name(name)
{
    try {
        if (grade < 1) {
            throw GradeTooHighException();
        }
        else if (grade > 150) {
            throw GradeTooLowException();
        }
        this->grade = grade;
    } 
    catch (const GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    } 
    catch (const GradeTooLowException& e) {
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
        if (grade <= 1) {
            throw GradeTooHighException();
        }
        else if (grade > 150) {
            throw GradeTooLowException();
        }
        this->grade--;
    } 
    catch (const GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    } 
    catch (const GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }
}

void Bureaucrat::decrement_grade()
{
    std::cout<<" decrement grade"<<std::endl;
    try {
        if (grade < 1) {
            throw GradeTooHighException();
        }
        else if (grade >= 150) {
            throw GradeTooLowException();
        }
        this->grade++;
    } 
    catch (const GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    } 
    catch (const GradeTooLowException& e) {
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

void Bureaucrat::executeForm(AForm const &form)
{
    try {
        if (grade > get_gradeToExecute()) {
            throw GradeTooLowException();
        }
        std::cout<<this->get_name()<<" executed "<< form.get_name<<std::endl;
    } 
    catch (const GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }
}
