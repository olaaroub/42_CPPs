/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:22:52 by olaaroub          #+#    #+#             */
/*   Updated: 2025/02/23 18:58:18 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

static void addContact(PhoneBook *book)
{
    Contact contact;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    std::cout << "First name: ";
    std::getline(std::cin, first_name);
    if (std::cin.eof())
        return;
    std::cout << "Last name: ";
    std::getline(std::cin, last_name);
    if (std::cin.eof())
        return;
    std::cout << "nickname: ";
    std::getline(std::cin, nickname);
    if (std::cin.eof())
        return;
    std::cout << "Phone number: ";
    std::getline(std::cin, phone_number);
    if (std::cin.eof())
        return;
    std::cout << "Darkest secret: ";
    std::getline(std::cin, darkest_secret);
    if (std::cin.eof())
        return;
    std::cout << std::endl;
    contact.set_first_name(first_name);
    contact.set_last_name(last_name);
    contact.set_nickname(nickname);
    contact.set_phone_number(phone_number);
    contact.set_darkest_secret(darkest_secret);
    book->addContact(contact);
}

bool isNonPrint(std::string line){
    for (size_t i = 0; i < line.length(); i++){
        if (!isprint(line[i]))
            return true;
    }
    return false;
}

bool isWhiteSpaces(std::string line)
{
    for (size_t i = 0; i < line.length(); i++)
    {
        if (!isspace(line[i]))
            return false;
    }
    return true;
}

void getInput(std::string line)
{
    std::string test;
    while (isNonPrint(test) || isWhiteSpaces(line))
    {
        std::cout << "->> ";
        std::getline(std::cin, test);
        if (std::cin.eof())
            exit(0);
    }
    line = test;
}

int main()
{
    PhoneBook book;
    std::string line;

    while (1)
    {
        getInput(line);
        if (line == "EXIT")
            break;
        else if (line == "ADD")
            addContact(&book);
        else if (line == "SEARCH")
            book.searchContact();
    }
    return 0;
}