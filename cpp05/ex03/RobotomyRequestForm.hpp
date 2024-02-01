/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:13:32 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/01 22:59:58 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
private:
    std::string target;
public:
    RobotomyRequestForm(const std::string& target);
    virtual ~RobotomyRequestForm();
    std::string get_target()const;
    virtual void execute(const Bureaucrat &B);
};

#endif // RobotomyRequestForm_HPP