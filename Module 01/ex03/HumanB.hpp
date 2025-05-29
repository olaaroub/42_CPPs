/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 01:50:03 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/29 15:17:54 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{

private:

    std::string _name;
    Weapon* _weapon;

public:

    HumanB(std::string name);
    HumanB(std::string name, Weapon* weapon);
    void attack() const;
    void setWeapon(Weapon& weapon);
    ~HumanB();

};







#endif