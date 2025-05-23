#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const & other);
        ~Cure();

        Cure & operator=(Cure const & other);

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif