/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSP.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:55:12 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/17 21:28:29 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSP.hpp"


Point::Point(): _x(0), _y(0){};
Point::~Point(){};

Point::Point(const float x, const float y): _x(x), _y(y){};

Point::Point(const Point &obj){
    *this = obj;
}

Point& Point::operator=(const Point &obj){
    if (this != &obj)
        return (*this);
    return (*this);
}


Fixed Point::getX(){
    return _x;
}

Fixed Point::getY(){
    return _y;
}


