/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:23:58 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/04 19:16:31 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(WRONGCAT_HPP)
#define WRONGCAT_HPP

#include"WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    /* data */
public:
    WrongCat(/* args */);
    WrongCat(const WrongCat &ref);
    WrongCat &operator=(const WrongCat &ref);
    ~WrongCat();
    void makeSound() const;
};

#endif // WRONGCAT_HPP
