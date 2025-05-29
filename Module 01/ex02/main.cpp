/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 03:44:56 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/29 17:36:57 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(){

    std::string test = "HI THIS IS BRAIN";
    std::string& stringREF = test;
    std::string* stringPTR = &test;

    std::cout << "The memory address of the string variable:	" << &test << std::endl;
    std::cout << "The memory address held by stringPTR:		"<< stringPTR << std::endl;
    std::cout << "The memory address held by stringREF:		" << &stringREF << std::endl;

    std::cout << "================================================================" << std::endl;

    std::cout << "The value of the string variable:		" << test << std::endl;
    std::cout << "The value pointed to by stringPTR:		" << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF:		" << stringREF << std::endl;

    return 0;
}