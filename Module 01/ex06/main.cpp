/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:36:58 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/29 16:25:20 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int ac, char **av){

    Harl H1;

    if(2 != ac || !*av[1]){
        std::cerr << "Invalid Arguments!" << std::endl;
        return 1;
    }
    std::string level = av[1];

    H1.complain(level);
    return 0;
}..