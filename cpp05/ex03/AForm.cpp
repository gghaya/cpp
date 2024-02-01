/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:12:48 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/01 18:41:28 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm():gradeToSign(1),gradeToExecute(1),name("Default name")
{
    this->signedStatus = 0;
}

AForm::AForm(const std::string &name, const int gradeToSign, const int gradeToExecute): name(name) , gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
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

AForm::AForm(const AForm &ref):gradeToExecute(ref.gradeToExecute), gradeToSign(ref.gradeToSign),name(ref.name)
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

AForm &AForm::operator=(const AForm &ref)
{
    this->signedStatus = ref.signedStatus;
    return (*this);
}

AForm::~AForm()
{
}
std::string AForm::get_name() const
{
    return (this->name);
}
bool AForm::get_signedStatus() const
{
    return this->signedStatus;
}

int AForm::get_gradeToSign() const
{
    return this->gradeToSign;
}

int AForm::get_gradeToExecute() const
{
    return this->gradeToExecute;
}

void AForm::beSigned(Bureaucrat *B)
{
    try
    {
        if (B->get_grade() > this->gradeToSign)
            throw GradeTooLowException();
        // if (this->signedStatus != 1)
        // {
            this->signedStatus = 1;
            // B->signAForm(this);
        // }
        
    }
    catch(const GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
}

std::ostream& operator<<(std::ostream& o, const AForm& Aform)
{
    o << "Aform name is :  " << Aform.get_name() << std::endl;
    o <<"Aform is signed : " << Aform.get_signedStatus() << std::endl;
    o <<"Aform grade to signed : " << Aform.get_gradeToSign() << std::endl;
    o <<"Aform grade to execute : " << Aform.get_gradeToExecute() << std::endl;
    return (o);
}