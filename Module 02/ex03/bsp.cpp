/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 20:57:18 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/31 11:04:34 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed calcArea(Point const p1, Point const p2, Point const p3)
{
    Fixed result;
    result = p1.getX() * (p2.getY() - p3.getY()) + p2.getX() * (p3.getY() - p1.getY()) + p3.getX() * (p1.getY() - p2.getY());

    if (result.getRawBits() < 0)
        result.setRawBits(-result.getRawBits());
    return (result);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{

    Fixed bigArea = calcArea(a, b, c);
    Fixed trOneArea = calcArea(a, b, point);
    if (trOneArea == 0)
        return false;
    Fixed trTwoArea = calcArea(a, c, point);
    if (trTwoArea == 0)
        return false;
    Fixed trThreeArea = calcArea(b, c, point);
    if (trThreeArea == 0)
        return false;
    if (bigArea == (trOneArea + trTwoArea + trThreeArea))
        return true;
    return false;
}
