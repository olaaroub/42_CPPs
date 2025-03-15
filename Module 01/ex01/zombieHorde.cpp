/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 01:48:39 by olaaroub          #+#    #+#             */
/*   Updated: 2025/03/15 02:38:36 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombiHorde(int N, std::string name){

    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        horde[i].setName(name);
    return horde;

}