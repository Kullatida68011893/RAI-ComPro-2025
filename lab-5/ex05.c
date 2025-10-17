// Write a program that takes 8 numbers from the user and stores them in an array. Then find and print the smallest and largest numbers in the array.

#include <stdio.h>

int main() 
{
    int numbers[8];
    int i;
    int smallest, largest;

    for (i = 0; i < 8; i++) 
    {
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
    }

    smallest = numbers[0];
    largest = numbers[0];

    for (i = 1; i < 8; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("Smallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);

    return 0;
}
