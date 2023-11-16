/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:28:48 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/08 13:51:15 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(MATERIASOURCE_HPP)
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class AMateria;
class MateriaSource : public IMateriaSource
{
private:
    AMateria *templates[4];
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &ref);
    MateriaSource &operator=(const MateriaSource &ref);
    void learnMateria(AMateria* m) ;
    AMateria* createMateria(std::string const & type) ;
    
};

#endif // MATERIASOURCE_HPP
        