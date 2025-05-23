#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(Animal const &oAnimal);
        Animal &operator=(Animal const &oAnimal);
        virtual ~Animal();

        std::string getType() const;
        virtual void makeSound() const;
};

#endif