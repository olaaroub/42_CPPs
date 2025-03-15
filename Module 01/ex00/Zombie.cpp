/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 23:52:23 by olaaroub          #+#    #+#             */
/*   Updated: 2025/03/15 01:41:35 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name): _name(name){}
Zombie::Zombie(): _name("Unknown"){}

void Zombie::announce(void){

    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){

    std::cout << "Zombie " << this->_name << " is dead" << std::endl;
}