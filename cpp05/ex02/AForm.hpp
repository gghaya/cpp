/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:12:36 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/02 13:31:54 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined( AForm_HPP)
#define AForm_HPP
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat ;
class  AForm
{
private:
    const std::string name;
    bool signedStatus;
    const int gradeToSign;
    const int gradeToExecute;
    AForm();
public:
    AForm(const std::string &name, const int gradeToSign, const int gradeToExecute);
    AForm(const  AForm &ref);
    AForm &operator=(const  AForm &ref);
    virtual ~ AForm();
    std::string get_name() const;
    bool get_signedStatus() const;
    int get_gradeToSign() const;
    int get_gradeToExecute() const;
    void beSigned(const Bureaucrat& bureaucrat);
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
    virtual void execute(const Bureaucrat &B) = 0;
};
    std::ostream& operator<<(std::ostream &o,  const AForm &Aform);
#endif 