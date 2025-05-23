#include <iostream>
#include <math.h>
#include "Point.hpp"
#include <iostream>


int main( void )
{
    Point a;
    Point b(2, 0);
    Point c(1, 2);
    Point point(0.8, 0.8);

    if (bsp(a, b, c, point))
        std::cout << "point inside\n";
    else
        std::cout << "point is out\n";
}