/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:36:58 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/29 15:55:15 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(){

    Harl obj;
    std::string level;

    std::cout << "Enter a level: ";
    std::cin >> level;
    obj.complain(level);
}