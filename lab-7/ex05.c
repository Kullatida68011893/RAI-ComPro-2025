#include <stdio.h>

int main() 
{
    int size = 6;
    int array[] = { 3, 1, 2, 4, 5, 6 };

    int sum = 0;
    int *ptr = array;   

    for (int i = 0; i < size; i++) 
    {
        sum += *(ptr + i);  
    }

    printf("The sum of array is: %d\n", sum);

    return 0;
}
