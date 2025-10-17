#include <stdio.h>

int main() 
{
    int array[] = { 3, 1, 2, 4, 5, 6 };
    int size = sizeof(array) / sizeof(array[0]);

    int *ptr = array;        
    int max = *ptr;      

    for (int i = 1; i < size; i++) 
    {
        if (*(ptr + i) > max) 
        {
            max = *(ptr + i);
        }
    }

    printf("Max value: %d\n", max);

    return 0;
}
