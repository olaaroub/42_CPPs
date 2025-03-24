/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:36:58 by olaaroub          #+#    #+#             */
/*   Updated: 2025/03/24 03:28:35 by olaaroub         ###   ########.fr       */
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

int main(int ac, char **av){

    if(2 != ac || !av[1][0]){
        std::cerr << "Invalid Arguments!" << std::endl;
        return 1;
    }
    const int key = getKey(av[1]);

    switch (key)
    {
        case 1:
            Harl().complain("DEBUG");
            break;
        case 2:
            Harl().complain("INFO");
            break;
        case 3:
            Harl().complain("WARNING");
            break;
        case 4:
            Harl().complain("ERROR");
            break;
        default:
           std::cerr << "[ Probably complaining about insignficant problems ]"
             << std::endl;
    }
    return 0;
}