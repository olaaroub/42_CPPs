/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 02:52:51 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/29 17:58:57 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name, Weapon* weapon){
    this->_name = name;
    this->_weapon = weapon;
}

HumanB::HumanB(std::string name)
    : _name(name), _weapon(NULL){}

void HumanB::attack() const{
    std::cout << this->_name << " attacks with their ";
    if(this->_weapon != NULL)
        std::cout << this->_weapon->getType() << std::endl;
    else
        std::cout << "left foot" << std::endl;
}


void HumanB::setWeapon(Weapon& weapon){
    this->_weapon = &weapon;
}

HumanB::~HumanB(){
    // std::cout << this->_name << " is Destroyed" << std::endl;
}