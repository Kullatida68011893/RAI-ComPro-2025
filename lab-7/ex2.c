// x and y is float variable, write the program to swap value of x and y by using pointer.

#include <stdio.h>

void swap(float *a, float *b)
{
    float temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    float x = 5.5, y = 6.3;

    printf("Before swap : x = %.2f, y = %.2f\n", x, y);
    swap (&x, &y);
    printf("After swap: x = %.2f, y = %.2f\n", x, y);
    return (0);
}
