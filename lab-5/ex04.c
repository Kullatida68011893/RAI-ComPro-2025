// Write a program that takes 10 integers from the user and stores them in an array. Then count and print how many numbers are even and how many are odd.

#include <stdio.h>

int main()
{
    int value[10];
    int even = 0;
    int odd = 0;
    int i;

    for  (i = 0; i < 10; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf ("%d", &value[i]);

        if(value[i] % 2 == 0)
        even++;
        else
        odd++;
    }

        printf("even number : %d\n", even);
        printf("Odd number : %d\n", odd);

        return 0;
}

