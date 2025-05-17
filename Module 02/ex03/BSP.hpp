/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSP.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:27:10 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/17 21:28:37 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_HPP
# define BSP_HPP

#include "Fixed.hpp"


class Point
{
private:
    Fixed const _x;
    Fixed const _y;
public:
    Point();
    ~Point();

    Point(const float xVal, const float yVal);
    Point(const Point &obj);

    Point& operator=(const Point &obj);

    Fixed getX();
    Fixed getY();

};


bool bsp(Point const a, Point b, Point const c, Point const point);












#endif

