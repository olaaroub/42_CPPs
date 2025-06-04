/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 22:34:45 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/04 23:44:20 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout<< "[ Brain ] default constructor called!" << std::endl;
    for(int i =0 ; i< 100 ; i++){
        _ideas[i] = "";
    }
}

Brain::Brain(std::string name){
    std::cout<< "[ Brain ] name constructor called!" << std::endl;

    for(int i = 0; i < 100 ; i++){
        _ideas[i] = name;
    }
}

Brain::Brain(const Brain& obj){
    std::cout<< "[ Brain ] copy constructor called!" << std::endl;
    for(int i = 0; i < 100 ; i++){
        _ideas[i] = obj._ideas[i];
    }
}

Brain& Brain::operator=(const Brain& obj){
    std::cout<< "[ Brain ] assignment operator called!" << std::endl;
    if(this != &obj){
        for (size_t i = 0; i < 100; i++){
            _ideas[i] = obj._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain(){
    std::cout<< "[ Brain ] destructor called!" << std::endl;
}
