// Write a program to get 10 integers from the user and store them in an int array named values. Then print the array.

#include <stdio.h>

int main()
{
    int values [10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Enter the value %d here :", i + 1);
        scanf("%d", &values[i]);
    }
    printf("\nValues in array are:");
    for(i = 0; i < 10; i++)
    {
    printf("value[%d] = %d\n", i, values[i]);
    }
    return 0;
}

