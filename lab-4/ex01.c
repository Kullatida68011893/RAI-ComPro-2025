// Write a program to get 10 integers from the user and print their sum and average using only for loop.

#include <stdio.h>

int main()
{
    int nb, sum = 0;
    float average;

    for (int i = 1; i <= 10; i++)
    {
        printf("Enter the number %d :", i);
        scanf("%d", &nb);

        sum = sum + nb;
    }
    average = sum / 10.0; 

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return (0);
}