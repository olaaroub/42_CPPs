/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:22:52 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/28 19:47:23 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"
#include "tools.hpp"

static void printHelp(void){
    std::cout << "Available commands:" << std::endl;
    std::cout << "ADD: Add a new contact" << std::endl;
    std::cout << "SEARCH: Search for a contact" << std::endl;
    std::cout << "EXIT: Exit the program" << std::endl;

}

static void add_contact(PhoneBook *repertoire)
{
    Contact contact;
    std::string lastName;
    std::string name;
    std::string nickName;
    std::string phoneNum;
    std::string secret;

    if(getInput(&name, "Name: ", 1) == -69)
        return;
    if(getInput(&lastName, "Last Name: ", 1) == -69)
        return;
    if(getInput(&nickName, "Nickname: ", 1) == -69)
        return;
    if(getInput(&phoneNum, "Phone number: ", 1) == -69)
        return;
    if(getInput(&secret, "Your darkest secret: ", 1) == -69)
        return;
    contact.setFirstName(name);
    contact.setlastName(lastName);
    contact.setNickName(nickName);
    contact.setPhoneNum(phoneNum);
    contact.setSecret(secret);
    repertoire->add_contact(contact);
}

int main()
{
    PhoneBook repertoire;
    std::string line;

    printHelp();
    while (1)
    {
        getInput(&line, "=> ", 0);
        if (line == "EXIT" || std::cin.eof())
            break;
        else if (line == "ADD")
           add_contact(&repertoire);
        else if( line == "SEARCH")
            repertoire.search_contact();
    }
    return 0;
}