/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 02:54:32 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/29 15:36:57 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int    throwError(std::string message, int exitCode){
    std::cerr << message << std::endl;
    return exitCode;
}

void     replaceOccurences(std::string& line, std::string s1, std::string s2){
    if(line.empty()) return;
    std::string::size_type pos = 0;
    while((pos = line.find(s1, pos)) != std::string::npos){
        line.erase(pos, s1.length());
        line.insert(pos, s2);
        pos += s2.length();
    }
    return ;
}
