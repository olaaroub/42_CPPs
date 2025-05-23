#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const &oDog);
        Dog &operator=(Dog const &oDog);
        ~Dog();

        std::string getType() const;
        void makeSound() const;
        
};

#endif