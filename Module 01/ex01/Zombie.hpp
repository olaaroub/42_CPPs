/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 01:44:59 by olaaroub          #+#    #+#             */
/*   Updated: 2025/03/15 02:37:51 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

private:
    std::string _name;

public:
    Zombie();
    void setName(std::string name);
    void    announce( void );
    Zombie* zombiHorde(int N, std::string name);
    Zombie(std::string name);
    ~Zombie();
};


#endif
