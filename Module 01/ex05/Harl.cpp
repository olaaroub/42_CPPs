/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:44:49 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/29 15:55:56 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(){

    std::cout << "\"DEBUG\": I love having extra bacon for my"
            << "7XL-double-cheese-triple-pickle-special-ketchup burger."
            << " I really do!" << std::endl;
}

void Harl::info(){

    std::cout << "\"INFO\": I cannot believe adding extra bacon costs more money."
            << " You didn't put enough bacon in my burger! If you did,"
            << " I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(){

    std::cout << "\"WARNING\": I think I deserve to have some extra bacon for free."
            << " I've been coming for years whearas you started working here"
            << " last month." << std::endl;
}

void Harl::error(){

    std::cout << "\"ERROR\": This is uneccaptable! I want to speak to the manager now."
            << std::endl;
}

void Harl::complain(std::string level){
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*pointerToMF[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level){
            (this->*pointerToMF[i])();
            return;
        }
    }
}