/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:18:13 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/01 14:18:37 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined( Form_HPP)
#define Form_HPP
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat ;
class  Form
{
private:
    const std::string name;
    bool signedStatus;
    const int gradeToSign;
    const int gradeToExecute;
public:
    Form();
    Form(const std::string &name, const int gradeToSign, const int gradeToExecute);
    Form(const  Form &ref);
    Form &operator=(const  Form &ref);
    ~ Form();
    std::string get_name() const;
    bool get_signedStatus() const;
    int get_gradeToSign() const;
    int get_gradeToExecute() const;
    void beSigned(Bureaucrat *B);
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
    std::ostream& operator<<(std::ostream &o,  const Form &form);
#endif 