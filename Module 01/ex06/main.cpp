/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:36:58 by olaaroub          #+#    #+#             */
/*   Updated: 2025/03/25 02:26:33 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int getKey(std::string input){
    if(input == "DEBUG")
        return 1;
    else if (input == "INFO")
        return 2;
    else if (input == "WARNING")
        return 3;
    else if (input == "ERROR")
        return 4;
    return 0;
}

void switchOff(int key){
    Harl flan;
    switch (key)
    {
        case 1:
           flan.complain("DEBUG");
        case 2:
           flan.complain("INFO");
        case 3:
           flan.complain("WARNING");
        case 4:
           flan.complain("ERROR");
            break;
        default:
           std::cerr << "[ Probably complaining about insignficant problems ]"
             << std::endl;
    }
}

int main(int ac, char **av){

    if(2 != ac || !av[1][0]){
        std::cerr << "Invalid Arguments!" << std::endl;
        return 1;
    }
    const int key = getKey(av[1]);
    switchOff(key);
    return 0;
}