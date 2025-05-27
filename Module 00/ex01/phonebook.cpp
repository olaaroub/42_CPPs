/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 19:16:18 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/27 21:46:22 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "tools.hpp"

void PhoneBook::add_contact(Contact contact)
{
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

    if(this->_contacts[0].getFirstName() == ""){
        std::cout << "Your Phonebook is empty" << std::endl;
        return;
    }
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
    for (int i = 0; i < 8; i++){
        if (this->_contacts[i].getFirstName() == "")
            continue;
        std::cout << "|" << std::setw(10) << i + 1 << "|";
        std::cout << formatField(this->_contacts[i].getFirstName()) << "|";
        std::cout << formatField(this->_contacts[i].getlastName()) << "|";
        std::cout << formatField(this->_contacts[i].getNickName()) << "|" << std::endl;
    }
    if(getInput(&input, "Enter index: ", 1) == -69)
        return;
    if (input.length() == 1 && input[0] >= '1' && input[0] <= '8')
    {
        index = input[0] - '0';
        if (this->_contacts[index - 1 ].getFirstName() != "")
        {
            std::cout << "last name: " << this->_contacts[index - 1].getlastName() << std::endl;
            std::cout << "nickname: " << this->_contacts[index - 1].getNickName() << std::endl;
            std::cout << "phone number: " << this->_contacts[index - 1].getPhoneNum() << std::endl;
            std::cout << "darkest secret: " << this->_contacts[index - 1].getSecret() << std::endl;
        }
    }
    else
        std::cout << "Invalid index" << std::endl;
}
