#include <stdio.h>
#define PI 3.1416

double circumference(double r)
{
    return 2 * PI * r;
}

double area(double r)
{
    return PI * r * r;
}

int main ()
{
    double radius;

    printf("Enter the radius in cm : ");
    scanf("%lf", &radius);

    printf("Circumference : %.2f\n", circumference(radius));
    printf("Area : %.2f\n", area(radius));

    return (0);
}