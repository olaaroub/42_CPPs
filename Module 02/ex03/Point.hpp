/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:27:10 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/31 11:04:49 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    Fixed const _x;
    Fixed const _y;

public:
    Point();
    ~Point();

    Point(const float x, const float y);
    Point(const Point &obj);

    Point &operator=(const Point &obj);

    Fixed getX() const;
    Fixed getY() const;
};

bool bsp(Point const a, Point b, Point const c, Point const point);

#endif
