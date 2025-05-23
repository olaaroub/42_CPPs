/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:33:38 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/23 12:01:25 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include "tools.hpp"

bool isWhiteSpaces(std::string line){
    for (size_t i = 0; i < line.length(); i++)
    {
        if (!std::isspace(line[i]))
            return false;
    }
    return true;
}

bool isNonPrint(std::string line){
    for (size_t i = 0; i < line.length(); i++)
    {
        if (!std::isprint(line[i]))
            return true;
    }
    return false;

}

int getInput(std::string *line, std::string message, int flag){
    std::string test;

    while(isWhiteSpaces(test) || isNonPrint(test)){
        std::cout << message;
        std::getline(std::cin, test);
        if (std::cin.eof() && flag == 0)
            std::exit(0);
        else if (std::cin.eof() && flag == 1)
            return -69;
    }
    *line = test;
    return 0;
}

std::string formatField(const std::string& field) {
    if (field.length() > 10)
        return field.substr(0, 9) + ".";
    return std::string(10 - field.length(), ' ') + field;  // pad left with spaces
}