/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 02:52:51 by olaaroub          #+#    #+#             */
/*   Updated: 2025/03/18 20:51:04 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name, Weapon* weapon)
    : _name(name), _weapon(weapon){}

HumanB::HumanB(std::string name)
    : _name(name), _weapon(NULL){}

void HumanB::attack(){
    if(this->_weapon != NULL)
        std::cout << this->_name << " attacks with their "
                << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " has no weapon to attack" << std::endl;
}


void HumanB::setWeapon(Weapon& weapon){
    this->_weapon = &weapon;
}

HumanB::~HumanB(){
    std::cout << this->_name << " is Destroyed" << std::endl;
}