/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:33:02 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/01 23:43:43 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include "Form.hpp"
#include <iostream>

class Form ;
class  Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(const  Bureaucrat &ref);
    Bureaucrat &operator=(const  Bureaucrat &ref);
    ~ Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    std::string get_name() const;
    int  get_grade()const;
    void increment_grade();
    void decrement_grade();
    void signForm(Form &F);
    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw() {
                return "Grade is too high";
            }
    };
    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw() {
                return "Grade is too low";
            }
    };
};
    std::ostream& operator<<(std::ostream &o,  const Bureaucrat &Bureaucrat);

#endif 