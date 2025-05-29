/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 03:16:36 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/29 15:26:07 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weapon)
    : _name(name), _weapon(weapon){}

void HumanA::attack() const{
    std::cout << this->_name << " attacks with their "
            << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA(){
    // std::cout << this->_name << " is Destroyed" << std::endl;
}

