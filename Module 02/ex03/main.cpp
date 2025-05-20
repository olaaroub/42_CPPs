/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:21:39 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/20 19:15:18 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point a;
    Point b(2, 0);
    Point c(1, 2);
    Point point(0.8, 0.8);

    if (bsp(a, b, c, point))
        std::cout << "point inside\n";
    else
        std::cout << "point is not inside\n";

}