#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called." << std::endl;
    this->type = "Cat";
    this->oBrain = new Brain();
    // Brain oBrain = Brain();
}

Cat::Cat(Cat const &oCat) : Animal(oCat)
{
    std::cout << "Cat copy constructor called." << std::endl;
    this->type = oCat.type;
    this->oBrain = new Brain();
    // Brain oBrain = Brain();
}

Cat &Cat::operator=(Cat const &oCat)
{
    std::cout << "Cat copy assignment operator called." << std::endl;
    this->type = oCat.type;
    this->oBrain = new Brain(*oCat.oBrain);
    return (*this);
}

Cat::~Cat()
{
    delete oBrain;
    std::cout << "Cat destructor called." << std::endl;
}

std::string Cat::getType() const
{
    return (this->type);
}

void Cat::makeSound() const
{
    std::cout << "Meeeeeeeeooooow..." << std::endl;
}