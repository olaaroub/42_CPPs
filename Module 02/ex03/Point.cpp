/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:55:12 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/20 18:50:14 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point(): _x(0), _y(0){};

Point::Point(const float x, const float y): _x(x), _y(y) {};
Point::Point(const Point &obj): _x(obj._x), _y(obj._y) {
    *this = obj;
}

Point& Point::operator=(const Point &obj){
    (void)obj;
    return *this;
}


Fixed Point::getX() const {
    return _x;
}

Fixed Point::getY() const {
    return _y;
}

Point::~Point(){};
