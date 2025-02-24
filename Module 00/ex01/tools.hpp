#ifndef TOOLS_HPP
#define TOOLS_HPP

#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>

bool isWhiteSpaces(std::string line);
bool isNonPrint(std::string line);
int getInput(std::string *line, std::string message, int flag);


#endif