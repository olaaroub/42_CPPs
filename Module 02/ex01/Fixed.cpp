/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:43:45 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/03 12:24:21 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(){
    _value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value){
    _value = value << _fractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value){
    _value = (int)(roundf(value * (1 << _fractionalBits)));
    std::cout << "Float constructor called" << std::endl;
}


Fixed::Fixed(const Fixed& obj){
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        _value = obj.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const{
    // std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits(int const raw){
    // std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

float Fixed::toFloat(void) const{
    return (float)_value / (1 << _fractionalBits);
}

int Fixed::toInt(void) const{
    return _value >> _fractionalBits;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;

}

std::ostream &operator<<(std::ostream &ostream, const Fixed &o)
{
    ostream << o.toFloat();
    return (ostream);
}