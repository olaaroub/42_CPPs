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
#include "tools.hpp"

static void add_contact(PhoneBook *book)
{
    Contact contact;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    if(getInput(&first_name, "First name: ", 1) == -69)
        return;
    if(getInput(&last_name, "Last name: ", 1) == -69)
        return;
    if(getInput(&nickname, "Nickname: ", 1) == -69)
        return;
    if(getInput(&phone_number, "Phone number: ", 1) == -69)
        return;
    if(getInput(&darkest_secret, "Darkest secret: ", 1) == -69)
        return;
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
    std::string line;

    while (1)
    {
        getInput(&line, "----------$> ", 0);
        if (line == "EXIT" || std::cin.eof())
            break;
        else if (line == "ADD")
           add_contact(&book);
        else if( line == "SEARCH")
            book.search_contact();
    }
    return 0;
}