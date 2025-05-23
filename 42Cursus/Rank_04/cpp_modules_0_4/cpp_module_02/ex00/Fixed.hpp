#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int value;
        static const int fractionalBits = 8;

    public:
        Fixed();
        Fixed(Fixed& oFixed);
        Fixed& operator=(const Fixed& oFixed);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);

};

#endif