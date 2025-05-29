/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 23:50:55 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/29 11:27:44 by olaaroub         ###   ########.fr       */
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
    Zombie(std::string name);
    void setName(std::string name);
    void    announce( void ) const;
    ~Zombie();
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);


#endif