/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 01:46:53 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/29 12:00:45 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name): _name(name){}
Zombie::Zombie(): _name("Unknown Zombie"){}


void Zombie::setName(std::string name){
    this->_name = name;
}
void Zombie::announce(void) const{

    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){
    std::cout << "Zombie " << this->_name << " is dead" << std::endl;
}