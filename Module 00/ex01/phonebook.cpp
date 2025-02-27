/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 19:16:18 by olaaroub          #+#    #+#             */
/*   Updated: 2025/02/22 22:54:21 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "tools.hpp"

void PhoneBook::add_contact(Contact contact)
{
    std::cout << "index is " << _i << std::endl;
    if (this->_i < 8)
    {
        this->_contacts[this->_i] = contact;
        this->_i++;
        if (_i == 8){_i = 0;}
    }
}
void PhoneBook::search_contact()
{
    std::string input;
    int index;
    std::cout << "     index|first name| last name|  surnom" << std::endl;
    for (int i = 0; i < 8; i++)
    {   if(this->_contacts[i].get_prenom() == "")
            continue;
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << this->_contacts[i].get_prenom().substr(0, 9) + "." << "|";
        std::cout << std::setw(10) << this->_contacts[i].get_nom().substr(0, 9) + "." << "|";
        std::cout << std::setw(10) << this->_contacts[i].get_surnom().substr(0, 9) + "." << std::endl;
    }
    if(getInput(&input, "Enter index: ", 1) == -69)
        return;
    if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
    {
        index = input[0] - '0';
        if (this->_contacts[index].get_prenom() != "")
        {
            std::cout << "last name: " << this->_contacts[index].get_nom() << std::endl;
            std::cout << "surnom: " << this->_contacts[index].get_surnom() << std::endl;
            std::cout << "phone number: " << this->_contacts[index].get_numero() << std::endl;
            std::cout << "darkest secret: " << this->_contacts[index].get_secret() << std::endl;
        }
    }
    else
        std::cout << "Invalid index" << std::endl;
}
