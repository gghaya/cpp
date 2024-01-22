/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Form.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:18:13 by gghaya            #+#    #+#             */
/*   Updated: 2024/01/22 20:29:05 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined( Form_HPP)
#define Form_HPP

#include <iostream>

class  Form
{
private:
    const std::string name;
    bool signedStatus;
    const int gradeToSign;
    const int gradeToExecute;
public:
    Form();
    Form(const std::string &name,bool signedStatus, const int gradeToSign, const int gradeToExecute);
    Form(const  Form &ref);
    Form &operator=(const  Form &ref);
    ~ Form();
    std::string get_name() const;
    bool get_signedStatus();
    int get_gradeToSign() const;
    int get_gradeToExecute() const;
 
};
    std::ostream& operator<<(std::ostream &o,  const Bureaucrat &Bureaucrat);
#endif 