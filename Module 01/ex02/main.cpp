/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 03:44:56 by olaaroub          #+#    #+#             */
/*   Updated: 2025/03/16 00:34:30 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(){

    std::string test = "HI THIS IS BRAIN";
    std::string& stringREF = test;

    std::string* stringPTR = &test;

    std::cout << "address of string via ptr : "<< stringPTR << std::endl;
    std::cout << "address of string directly : "<< &test << std::endl;
    std::cout << "address of the pointer: " << &stringPTR << std::endl;
    std::cout << "value of the referencer: " << stringREF << std::endl;
    std::cout << "address of the referencer: " << &stringREF << std::endl;

    std::cout << test << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return 0;
}