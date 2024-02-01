/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:52:22 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/01 14:21:31 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():gradeToSign(1),gradeToExecute(1),name("Default name")
{
    this->signedStatus = 0;
}

Form::Form(const std::string &name, const int gradeToSign, const int gradeToExecute): name(name) , gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    try{
        if (this->gradeToExecute < 1 || gradeToSign < 1)
            throw GradeTooHighException();
        else if (this->gradeToExecute > 150 || gradeToSign > 150)
            throw GradeTooLowException();
        this->signedStatus = 0;
    }
    catch (const GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    } 
    catch (const GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }
}

Form::Form(const Form &ref):gradeToExecute(ref.gradeToExecute), gradeToSign(ref.gradeToSign),name(ref.name)
{
    try{
        if (this->gradeToExecute < 1 || gradeToSign < 1)
            throw GradeTooHighException();
        else if (this->gradeToExecute > 150 || gradeToSign > 150)
            throw GradeTooLowException();
        this->signedStatus = ref.signedStatus;
    }
    catch (const GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    } 
    catch (const GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }
    this->signedStatus =  ref.signedStatus;
}

Form &Form::operator=(const Form &ref)
{
    this->signedStatus = ref.signedStatus;
    return (*this);
}

Form::~Form()
{
}
std::string Form::get_name() const
{
    return (this->name);
}
bool Form::get_signedStatus() const
{
    return this->signedStatus;
}

int Form::get_gradeToSign() const
{
    return this->gradeToSign;
}

int Form::get_gradeToExecute() const
{
    return this->gradeToExecute;
}

void Form::beSigned(Bureaucrat *B)
{
    try
    {
        if (B->get_grade() > this->gradeToSign)
            throw GradeTooLowException();
        // if (this->signedStatus != 1)
        // {
            this->signedStatus = 1;
            // B->signForm(this);
        // }
        
    }
    catch(const GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
}

std::ostream& operator<<(std::ostream& o, const Form& form)
{
    o << "Form name is :  " << form.get_name() << std::endl;
    o <<"Form is signed : " << form.get_signedStatus() << std::endl;
    o <<"Form grade to signed : " << form.get_gradeToSign() << std::endl;
    o <<"Form grade to execute : " << form.get_gradeToExecute() << std::endl;
    return (o);
}