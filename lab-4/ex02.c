// Using only while loop create a program to calculate the sum of 10 user input.

#include <stdio.h>

int main()
{
    int i = 0, nb, sum = 0;    

    while (i < 10)
    {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &nb);

        sum = sum + nb;
        i++;
    }

    printf("Total sum is : %d\n", sum);

    return 0;
}
