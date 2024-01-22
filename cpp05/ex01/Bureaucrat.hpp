/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:33:02 by gghaya            #+#    #+#             */
/*   Updated: 2024/01/22 17:31:56 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined( Bureaucrat_HPP)
#define BUREAUCRAT_HPP

#include <iostream>

class  Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const  Bureaucrat &ref);
    Bureaucrat &operator=(const  Bureaucrat &ref);
    ~ Bureaucrat();
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
    // void set_grade(int grade);
    std::string get_name() const;
    int  get_grade()const;
    void increment_grade();
    void decrement_grade();
};
    std::ostream& operator<<(std::ostream &o,  const Bureaucrat &Bureaucrat);

#endif 