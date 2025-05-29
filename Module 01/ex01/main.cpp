/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 01:50:57 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/29 18:01:19 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){

    Zombie *zombieSwarm = zombieHorde(5, "Walking Dead");

    std::cout << "====================================" << std::endl;

    // std::cout << "Announcing first Zombie: ";
    // zombieSwarm->announce();

    for (int i = 0; i < 5; i++){
        zombieSwarm[i].announce();
    }

    std::cout << "====================================" << std::endl;


    delete[] zombieSwarm;
    return 0;
}