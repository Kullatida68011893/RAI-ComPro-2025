// Write a program to reverse the elements in a given array

#include <stdio.h>

int main() 
{
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;

    printf ("Reverse Array: ");

    for(i = 8; i >= 0; i--)
    {
        printf ("%d", original[i]);
        if(i > 0)
        {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
