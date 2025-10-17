// Write a program to get integer input from the user and print whether the number is odd or even, exit the program if user input is 0 using do while loop 

#include <stdio.h>

int main()
{
    int nb;

    do
    {
        printf("Enter a number : ");
        scanf("%d", &nb);

        if (nb == 0)
        {
            printf("Exiting program...bye jaa\n");
        }
        else if (nb % 2 == 0)
        {
            printf("%d is Even.\n", nb);
        }
        else
        {
            printf("%d is Odd.\n", nb);
        }

    } while (nb != 0);

    return 0;
}
