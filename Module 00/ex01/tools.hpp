/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:33:42 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/23 12:05:02 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_HPP
#define TOOLS_HPP

#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>

bool isWhiteSpaces(std::string line);
bool isNonPrint(std::string line);
int getInput(std::string *line, std::string message, int flag);
std::string formatField(const std::string& field);


#endif