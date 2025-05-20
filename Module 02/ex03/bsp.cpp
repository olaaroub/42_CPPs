/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 20:57:18 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/20 20:35:21 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float calcArea(Point const a, Point const b, Point const c)
{
    float res;

    res = (
    ( a.getX().getRawBits() * (b.getY().getRawBits() - c.getY().getRawBits())
    + b.getX().getRawBits() * (c.getY().getRawBits() - a.getY().getRawBits())
    + c.getX().getRawBits() * (a.getY().getRawBits() - b.getY().getRawBits()) )
    / 2.0);
;
    if (res < 0)
        res *=-1;
    return (res);
}

// Fixed   calcArea(Point const A, Point const B, Point const Point){

//     Fixed x1 = A.getX();
//     Fixed y1 = A.getY();

//     Fixed x2 = B.getX();
//     Fixed y2 = B.getY();

//     Fixed x3 = Point.getX();
//     Fixed y3 = Point.getY();

//     Fixed area;

//     area = (x1 * (y2 - y3)) + (x2 * (y3 - y1)) + ( x3 * (y1 - y2));

//     if (area.getRawBits() < 0)
//         area = area * -1;
//     area = area
//     return (area / 2);
// }


bool  bsp(Point const a, Point const b, Point const c, Point const point){

    float bigArea = calcArea(a, b, c);
    float trOneArea = calcArea(a, b, point);
    if (trOneArea == 0)
        return false;
    float trTwoArea = calcArea(a, c, point);
    if(trTwoArea == 0)
        return false;
    float trThreeArea = calcArea(b, c, point);
    if(trThreeArea == 0)
        return false;
    if (bigArea == (trOneArea + trTwoArea + trThreeArea))
        return true;
    return false;
}