/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 19:16:18 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/22 22:52:28 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "tools.hpp"

void PhoneBook::add_contact(Contact contact)
{
    std::cout << "index is " << _i + 1 << std::endl;
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

    std::cout << "     index|first name| last name|  nickname" << std::endl;
    for (int i = 0; i < 8; i++){
       if(this->_contacts[i].getFirstName() == "")
            continue;
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << this->_contacts[i].getFirstName().substr(0, 9) + "." << "|";
        std::cout << std::setw(10) << this->_contacts[i].getlastName().substr(0, 9) + "." << "|";
        std::cout << std::setw(10) << this->_contacts[i].getNickName().substr(0, 9) + "." << std::endl;
    }
    if(getInput(&input, "Enter index: ", 1) == -69)
        return;
    if (input.length() == 1 && input[0] >= '1' && input[0] <= '8')
    {
        index = input[0] - '0';
        if (this->_contacts[index - 1 ].getFirstName() != "")
        {
            std::cout << "last name: " << this->_contacts[index].getlastName() << std::endl;
            std::cout << "nickname: " << this->_contacts[index].getNickName() << std::endl;
            std::cout << "phone number: " << this->_contacts[index].getPhoneNum() << std::endl;
            std::cout << "darkest secret: " << this->_contacts[index].getSecret() << std::endl;
        }
    }
    else
        std::cout << "Invalid index" << std::endl;
}
