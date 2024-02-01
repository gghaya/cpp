/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 23:01:44 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/01 23:02:12 by gghaya           ###   ########.fr       */
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
    virtual ~PresidentialPardonForm();
    std::string get_target()const;
    virtual void execute(const Bureaucrat &B);
};

#endif // PresidentialPardonForm_HPP