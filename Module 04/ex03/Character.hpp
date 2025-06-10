/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:04:40 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/09 17:42:50 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria *_slot[4];

public:
    Character();
    Character(std::string name);
    Character(const Character &obj);
    Character &operator=(const Character &obj);
    ~Character();

    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
    AMateria *getMateria(int idx);
};

#endif