/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 23:01:44 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/02 17:32:21 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
private:
    std::string target;
public:
    PresidentialPardonForm(const std::string& target);
    PresidentialPardonForm(const  PresidentialPardonForm &ref);
    PresidentialPardonForm &operator=(const  PresidentialPardonForm &ref);
    virtual ~PresidentialPardonForm(); 
    std::string get_target()const;
    virtual void execute(const Bureaucrat &B);
};

#endif // PresidentialPardonForm_HPP