/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 03:16:36 by olaaroub          #+#    #+#             */
/*   Updated: 2025/03/18 01:06:47 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon){}

void HumanA::attack(){
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}



HumanA::~HumanA(){
    std::cout << this->_name << " is Destroyed" << std::endl;
}

