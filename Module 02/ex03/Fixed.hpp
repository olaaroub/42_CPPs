/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:51:17 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/14 19:00:35 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{

private:
    int                 _value;
    static const int    _fractionalBits = 8;

public:
    Fixed();
    ~Fixed();

    Fixed(const int intValue);
    Fixed(const float floatValue);
    Fixed(const Fixed &obj);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    Fixed& operator=(const Fixed &obj);

    bool operator>(const Fixed &obj) const;
    bool operator<(const Fixed &obj) const;
    bool operator<=(const Fixed &obj) const;
    bool operator>=(const Fixed &obj) const;
    bool operator==(const Fixed &obj) const;
    bool operator!=(const Fixed &obj) const;

    Fixed operator+(const Fixed &obj) const;
    Fixed operator-(const Fixed &obj) const;
    Fixed operator*(const Fixed &obj) const;
    Fixed operator/(const Fixed &obj) const;

    Fixed& operator++(); // Pre-increment
    Fixed operator++(int); // Post-increment
    Fixed& operator--(); // Pre-decrement
    Fixed operator--(int); // Post-decrement

    static Fixed& min(Fixed& fixedPointOne, Fixed& fixedPointTwo);
    static const Fixed& min(const Fixed& fixedPointOne,const Fixed& fixedPointTwo);
    static Fixed& max(Fixed& fixedPointOne, Fixed& fixedPointTwo);
    static const Fixed& max(const Fixed& fixedPointOne,const Fixed& fixedPointTwo);

};

std::ostream& operator<<(std::ostream &ostream, Fixed const &o);

#endif