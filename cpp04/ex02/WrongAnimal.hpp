/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:23:51 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/04 19:16:13 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(WRONGANIMAL_HPP)
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal(/* args */);
    WrongAnimal(const WrongAnimal &ref);
    WrongAnimal &operator=(const WrongAnimal &ref);
    ~WrongAnimal();
    std::string getType () const;
    void makeSound() const;
};


#endif 