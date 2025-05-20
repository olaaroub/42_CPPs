/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 20:57:18 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/20 21:32:18 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// float calcArea(Point const a, Point const b, Point const c)
// {
//     float res;

//     res = (
//     ( a.getX().getRawBits() * (b.getY().getRawBits() - c.getY().getRawBits())
//     + b.getX().getRawBits() * (c.getY().getRawBits() - a.getY().getRawBits())
//     + c.getX().getRawBits() * (a.getY().getRawBits() - b.getY().getRawBits()) )
//     / 2.0);
// ;
//     if (res < 0)
//         res *=-1;
//     return (res);
// }

Fixed   calcArea(Point const p1, Point const p2, Point const p3)
{
    Fixed result;
    result = p1.getX() * (p2.getY() - p3.getY())
    + p2.getX() * (p3.getY() - p1.getY())
    + p3.getX() * (p1.getY() - p2.getY());

    if (result.getRawBits() < 0)
        result.setRawBits(-result.getRawBits());
    return (result);
}

bool  bsp(Point const a, Point const b, Point const c, Point const point){

    Fixed bigArea = calcArea(a, b, c);
    Fixed trOneArea = calcArea(a, b, point);
    if (trOneArea == 0)
        return false;
    Fixed trTwoArea = calcArea(a, c, point);
    if(trTwoArea == 0)
        return false;
    Fixed trThreeArea = calcArea(b, c, point);
    if(trThreeArea == 0)
        return false;
    std::cout << "bigArea: " << bigArea  << std::endl;
    std::cout << "sum: " << trOneArea + trTwoArea + trThreeArea << std::endl;
    if (bigArea == (trOneArea + trTwoArea + trThreeArea))
        return true;
    return false;
}

// bool  bsp(Point const a, Point const b, Point const c, Point const point){

//  Fixed tmp;

//     tmp =  calcArea(a,b,point) + calcArea(a,point,c) + calcArea(point,b,c);
//     if (!calcArea(a,b,point).getRawBits() || !calcArea(a,point,c).getRawBits()
//         || !calcArea(point,b,c).getRawBits())
//         return (false);
//     // std::cout << calcArea(a, b, point) << std::endl;
//     // std::cout << calcArea(a, point, c) << std::endl;
//     // std::cout << calcArea(point, b, c) << std::endl;
//     if (tmp == calcArea(a,b,c))
//         return (true);

//     return (false);
// }



// bool bsp(Point const a, Point const b, Point const c, Point const point)
// {
//     Fixed tmp;

//     tmp =  calcArea(a,b,point) + calcArea(a,point,c) + calcArea(point,b,c);
//     if (!calcArea(a,b,point).getRawBits() || !calcArea(a,point,c).getRawBits()
//         || !calcArea(point,b,c).getRawBits())
//         return (false);
//     std::cout << calcArea(a, b, point) << std::endl;
//     std::cout << calcArea(a, point, c) << std::endl;
//     std::cout << calcArea(point, b, c) << std::endl;
//     if (tmp == calcArea(a,b,c))
//         return (true);
//     return (false);
// }