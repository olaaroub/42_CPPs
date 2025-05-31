/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:21:39 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/31 11:04:43 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point a;
    Point b(2, 0);
    Point c(1, 2);
    Point insidePoint(1.0f, 0.5f);
    Point closePoint(0.8, 0.8);
    Point edgePoint(1.0f, 0.0f);
    Point vertexPoint(0.0f, 0.0f);
    Point outsidePoint(1.0f, 3.0f);

    if (bsp(a, b, c, insidePoint))
        std::cout << "point inside\n";
    else
        std::cout << "point is not inside\n";
    return 0;
}