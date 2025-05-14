/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:06:05 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/14 19:06:50 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    _value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intValue){
    _value = intValue << _fractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatValue){
    _value = (int)(roundf(floatValue * (1 << _fractionalBits)));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj){
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
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


std::ostream &operator<<(std::ostream &ostream, const Fixed &o)
{
    ostream << o.toFloat();
    return (ostream);
}

bool Fixed::operator<(const Fixed &obj) const{

    return (this->_value < obj._value);
}

bool Fixed::operator>(const Fixed &obj) const{

    return (this->_value > obj._value);
}

bool Fixed::operator<=(const Fixed &obj) const{

    return (this->_value <= obj._value);
}

bool Fixed::operator>=(const Fixed &obj) const{

    return (this->_value >= obj._value);
}

bool Fixed::operator==(const Fixed &obj) const{

    return (this->_value == obj._value);
}

bool Fixed::operator!=(const Fixed &obj) const{

    return( this->_value != obj._value);
}

Fixed Fixed::operator+(const Fixed &obj) const{

    return (this->_value + obj._value);
}

Fixed Fixed::operator-(const Fixed &obj) const{

    return ( this->_value - obj._value);
}

Fixed Fixed::operator*( const Fixed &obj) const{
    Fixed newObj(this->toFloat() * obj.toFloat());
    return( newObj);
}

Fixed Fixed::operator/(const Fixed &obj) const{

    Fixed newObj(this->toFloat() / obj.toFloat());
    return (newObj);
}

Fixed& Fixed::operator++(){

    ++this->_value;
    return(*this);
}

Fixed Fixed::operator++(int){

    Fixed newObj(*this);
    newObj._value = this->_value++;
    return(newObj);
}

Fixed& Fixed::operator--(){

    --this->_value;
    return(*this);
}

Fixed Fixed::operator--(int){

    Fixed newObj(*this);
    newObj._value = this->_value--;
    return newObj;
}

Fixed& Fixed::min(Fixed& fixedPointOne, Fixed& fixedPointTow){

    if(fixedPointOne._value < fixedPointTow._value)
        return fixedPointOne;
    return fixedPointTow;
}

const Fixed& Fixed::min(const Fixed& fixedPointOne, const Fixed& fixedPointTwo){

    if(fixedPointOne._value < fixedPointTwo._value)
        return fixedPointOne;
    return fixedPointTwo;
}

Fixed& Fixed::max(Fixed& fixedPointOne, Fixed& fixedPointTwo)
{
    if(fixedPointOne._value < fixedPointTwo._value)
        return fixedPointTwo;
    return fixedPointOne;
}

const Fixed& Fixed::max(const Fixed& fixedPointOne, const Fixed& fixedPointTwo)
{
    if(fixedPointOne._value < fixedPointTwo._value)
        return fixedPointTwo;
    return fixedPointOne;
}