// Write a program that asks the user for a number and prints its multiplication table from 1 to 12

#include <stdio.h>

int main()
{
    int nb;

    printf("Enter a number: ");
    scanf("%d", &nb);

    for (int i = 1; i <= 12; i++)
    {
        printf("%d x %d = %d\n", nb, i, nb * i);
    }

    return 0;
}
