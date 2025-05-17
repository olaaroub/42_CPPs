/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSP.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:55:12 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/17 21:50:15 by olaaroub         ###   ########.fr       */
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


Fixed Point::getX() const {
    return _x;
}

Fixed Point::getY() const {
    return _y;
}

bool  bsp(Point const a, Point const b, Point const c, Point const point){

    Fixed area = a.getX() * (b.getY() - c.getY())
                + b.getX() * (c.getY() - a.getY())
                + c.getX() * (a.getY() - b.getY())
}