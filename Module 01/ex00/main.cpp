/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 01:14:53 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/29 11:45:52 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){

    Zombie zombie("Z1");

    std::cout << "====================================" << std::endl;

    zombie.announce();
    zombie.setName("Z1.v2");
    zombie.announce();

    std::cout << "====================================" << std::endl;

    randomChump("Zombie from Stack");

    std::cout << "====================================" << std::endl;

    Zombie *heapZombie = newZombie("Zombie from Heap");
    heapZombie->announce();

    std::cout << "====================================" << std::endl;

    delete heapZombie;
    return 0;
}