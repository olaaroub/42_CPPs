/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:22:52 by olaaroub          #+#    #+#             */
/*   Updated: 2025/02/22 21:44:25 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

static void add_contact(PhoneBook *book)
{
    Contact contact;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    std::cout << "First name: ";
    std::getline(std::cin, first_name);
    if(std::cin.eof())
        return;
    std::cout << "Last name: ";
    std::getline(std::cin, last_name);
    if(std::cin.eof())
        return;
    std::cout << "nickname: ";
    std::getline(std::cin, nickname);
    if(std::cin.eof())
        return;
    std::cout << "Phone number: ";
    std::getline(std::cin, phone_number);
    if(std::cin.eof())
        return;
    std::cout << "Darkest secret: ";
    std::getline(std::cin, darkest_secret);
    if(std::cin.eof())
    return;
    std::cout << std::endl;
    contact.set_first_name(first_name);
    contact.set_last_name(last_name);
    contact.set_nickname(nickname);
    contact.set_phone_number(phone_number);
    contact.set_darkest_secret(darkest_secret);
    book->add_contact(contact);
}

int main()
{
    PhoneBook book;
    std::string pr;

    while (1)
    {
        std::cout << "$> ";
        std::getline(std::cin, pr);
        if (pr == "EXIT" || std::cin.eof())
            break;
        else if (pr == "ADD")
           add_contact(&book);
        else if( pr == "SEARCH")
            book.search_contact();
    }
    return 0;
}