/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 01:00:51 by olaaroub          #+#    #+#             */
/*   Updated: 2025/03/18 01:09:33 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){
    std::cout << "Weapon: " << type << " is Created" << std::endl;
}

const std::string& Weapon::getType() const{
    return  this->_type;
}

void    Weapon::setType(std::string type){
    this->_type = type;
}

Weapon::~Weapon(){
    std::cout << "Weapon: " << this->_type << " is Destroyed" << std::endl;
}

