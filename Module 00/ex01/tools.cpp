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
            exit(0);
        else if (std::cin.eof() && flag == 1)
            return -69;
    }
    *line = test;
    return 0;
}
