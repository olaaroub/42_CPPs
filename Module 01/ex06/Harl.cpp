/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:44:49 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/29 16:22:13 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug(){
    std::cout << "[ DEBUG ] " << std::endl;
    std::cout << "I love having extra bacon for my"
            << "7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl
            << "I really do!" << std::endl << std::endl;
}

void Harl::info(){
    std::cout << "[ INFO ] " << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl
            << "You didn't put enough bacon in my burger! If you did,"
            << " I wouldn't be asking for more!" << std::endl << std::endl;
}

void Harl::warning(){
    std::cout << "[ WARNING ] " << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl
            << "I've been coming for years whearas you started working here"
            << " last month." << std::endl << std::endl;
}

void Harl::error(){
    std::cout << "[ ERROR ] " << std::endl;
    std::cout << "This is uneccaptable! I want to speak to the manager now."
            << std::endl;
}

void Harl::complain(std::string level){
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*pointerToMF[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    int i = 0;
    for (; i < 4; i++)
        if (levels[i] == level)
            break;
    switch (i)
    {
        case 0:
            (this->*pointerToMF[0])();
        case 1:
            (this->*pointerToMF[1])();
        case 2:
            (this->*pointerToMF[2])();
        case 3:
            (this->*pointerToMF[3])();
            break;
        default:
        std::cout << "[ Probably complaining about insignficant problems ]"
             << std::endl;
    }
}