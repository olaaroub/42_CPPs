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

static void add_contact(PhoneBook *repertoire)
{
    Contact contact;
    std::string prenom;
    std::string nom;
    std::string surnom;
    std::string numero;
    std::string secret;

    if(getInput(&prenom, "Prénom: ", 1) == -69)
        return;
    if(getInput(&nom, "Nom de famille: ", 1) == -69)
        return;
    if(getInput(&surnom, "Surnom: ", 1) == -69)
        return;
    if(getInput(&numero, "Numéro de télé: ", 1) == -69)
        return;
    if(getInput(&secret, "Ton lourd secret: ", 1) == -69)
        return;
    contact.set_prenom(prenom);
    contact.set_nom(nom);
    contact.set_surnom(surnom);
    contact.set_numero(numero);
    contact.set_secret(secret);
    repertoire->add_contact(contact);
}

int main()
{
    PhoneBook repertoire;
    std::string line;

    while (1)
    {
        getInput(&line, "----------$> ", 0);
        if (line == "EXIT" || std::cin.eof())
            break;
        else if (line == "ADD")
           add_contact(&repertoire);
        else if( line == "SEARCH")
            repertoire.search_contact();
    }
    return 0;
}