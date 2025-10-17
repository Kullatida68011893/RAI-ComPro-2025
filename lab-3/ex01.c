// Write a program to compare two integer inputs from the user and check if two inputs match or not.
// **IMPORTANT**: Flowchart is required for this exercise

#include <stdio.h>

int main()
{
    int num1;
    int num2;

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter a number:");
    scanf("%d", &num2);

    if (num1 == num2)
    {
        printf("The number match.\n");
    }
    else 
    {
        printf("The number do not match.\n");
    }
    return(0);
}
