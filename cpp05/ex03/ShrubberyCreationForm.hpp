/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:39:32 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/01 23:16:11 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
private:
    std::string target;
public:
    ShrubberyCreationForm(const std::string& target);
    virtual ~ShrubberyCreationForm();
    std::string get_target()const;
    virtual void execute(const Bureaucrat &B);
};

#endif // SHRUBBERYCREATIONFORM_HPP