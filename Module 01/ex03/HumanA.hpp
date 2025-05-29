/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 03:03:36 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/29 12:43:37 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP


#include "Weapon.hpp"

class HumanA
{

private:

    std::string _name;
    Weapon& _weapon;

public:

    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void attack(void) const;

};


#endif