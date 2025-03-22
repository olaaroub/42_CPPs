/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 20:52:14 by olaaroub          #+#    #+#             */
/*   Updated: 2025/03/22 05:53:22 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <unistd.h>

int main(int ac, char **av){

    if(ac != 4 || !*av[1] || !*av[2] || !*av[3])
        throwError("Invalid Arguments", 1);

    std::string fileName = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    std::ifstream inputFile(fileName.c_str());
    if(!inputFile)
        return(throwError("Could not open the input file", 1));

    std::ofstream outputFile(fileName.append(".replace").c_str());
    if(!outputFile)
        return(throwError("Could not creat output file", 1));

    std::string line;
    while(std::getline(inputFile, line)){
        if(replaceOccurences(line, s1, s2) == -69)
            return (throwError("Error while reading the file", 1));
        outputFile << line;
        if(!inputFile.eof())
            outputFile << std::endl;
    }
    return 0;
}