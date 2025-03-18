/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 00:54:48 by olaaroub          #+#    #+#             */
/*   Updated: 2025/03/18 03:09:40 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>


class Weapon
{

private:

    std::string _type;

public:

    Weapon(std::string type);
    const std::string&    getType() const;
    void            setType(std::string type);
    ~Weapon();
};












#endif
