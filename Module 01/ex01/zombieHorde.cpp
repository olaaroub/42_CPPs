/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 01:48:39 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/29 18:00:56 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){

    Zombie* horde = new Zombie[N];
    char c = 'A';               // please dont test with more than 26 zombies
    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name + '_' + c);
        c++;
    }
    return horde;
}