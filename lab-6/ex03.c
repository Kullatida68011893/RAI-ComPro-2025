// Write a program that receives 2 coordinates and stores in a struct with the following properties: x(float), y(float) and find the distance between these two points
// you can calculate the distance using this formula

#include <stdio.h>
#include <math.h>

struct Point 
{
    float x;
    float y;
};

int main() 
{
    struct Point p1, p2;

    p1.x = 2.3;
    p1.y = 1.5;
    p2.x = 0.0;
    p2.y = 4.0;

    float distance = sqrt((p2.x - p1.x) * (p2.x - p1.x) +
                          (p2.y - p1.y) * (p2.y - p1.y));

    printf("x1: %.1f\n", p1.x);
    printf("y1: %.1f\n", p1.y);
    printf("x2: %.1f\n", p2.x);
    printf("y2: %.1f\n", p2.y);
    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)\n",
           p1.x, p1.y, p2.x, p2.y, distance);

    return (0);
}
