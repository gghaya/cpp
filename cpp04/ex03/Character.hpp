/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:13:19 by gghaya            #+#    #+#             */
/*   Updated: 2023/11/08 13:38:12 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(CHARACTER)
#define CHARACTER

#include "ICharacter.hpp"
#include "AMateria.hpp"

// declarer AMateria as type
class AMateria;

class Character : public ICharacter
{
private:
    std::string name;
    AMateria* Inventory[4];
public:
    Character();
    Character(std::string name);
    ~Character();
    std::string const & getName() const ;
    void equip(AMateria* m) ;
    void unequip(int idx) ;
    void use(int idx, ICharacter& target) ;
    Character(const Character &ref);
    Character &operator=(const Character &ref);
};

#endif
