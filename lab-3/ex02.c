// Write a program to get the input from the user between 1 to 100 and check if the value is even or odd. If user inputs are not in between 1-100 then display that the
// number is out of range. (Use any variant of if-else statements. Ternary operator are forbidden)

#include <stdio.h>

int main ()
{
    int number;

    printf("Enter a number between 1 and 100 : ");
    scanf("%d", &number);

    if (number >= 1 && number <= 100){
        if (number % 2 == 0){
            printf("The number is even.\n");
        }
        else {
            printf("The number is odd.\n");
        }
    }
    else {
        printf("The number is out of range.\n");
    }

    return (0);
}