// Create array A size 3x3 to collect numbers 1-9 and show the result in array by using pointer to refer

#include <stdio.h>

int main()
{
    int A[3][3];
    int *ptr = &A[0][0];

    for (int i = 0; i < 9; i++)
    {
        *(ptr + i) = i + 1;
    }

    printf("Array A (3x3) :\n");
    for (int i = 0; i < 9; i++)
    {
        printf("%d", *(ptr + i));
        
        if((i + 1) % 3 == 0)
        
        printf("\n");
    }
    return (0);
}