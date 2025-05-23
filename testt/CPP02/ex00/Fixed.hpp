#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
    private:
        int  fixed_point;
        static const int   n_fractional_bits;
    
    public:
        Fixed();
        Fixed(const Fixed &obj);
        Fixed& operator=(const Fixed& obj);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif