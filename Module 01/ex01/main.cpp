/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 01:50:57 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/29 12:02:18 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){

    Zombie *zombieSworm = zombieHorde(5, "Walking Dead");

    std::cout << "====================================" << std::endl;

    for (int i = 0; i < 5; i++){
        zombieSworm[i].announce();
    }

    std::cout << "====================================" << std::endl;


    delete[] zombieSworm;
    return 0;
}