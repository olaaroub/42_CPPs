#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const &oCat);
        Cat &operator=(Cat const &oCat);
        ~Cat();

        std::string getType() const;
        void makeSound() const;
};

#endif