// Write a program to calculate and return the sum of squares of two user given
// numbers using functions.

#include <stdio.h>


int sumofsquares(int a, int b) 
{
    return (a * a) + (b * b);
}

int main() 
{
    int num1, num2, result;

    printf("Enter the two integers: ");
    scanf("%d %d", &num1, &num2);

    result = sumofsquares(num1, num2);

    printf("Sum of squares of %d and %d is %d\n", num1, num2, result);

    return 0;
}
