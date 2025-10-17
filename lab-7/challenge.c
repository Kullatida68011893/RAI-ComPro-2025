#include <stdio.h>

int main()
{
    int arr[5];
    int *p = arr;

    printf("Enter 5 integers : \n");
    for (int i; i < 5; i++)
    {
        scanf("%d", (p+1));
    }

    for (int pass = 0; pass < 4; pass++)
    {
        for (int j = 0; j < 4 - pass; j++)
        {
            if (*(p+j) > *(p+j+1))
            {
                int temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
        }
    }
    printf("\n Sorrted numbers : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", *(p+i));
    }
    printf("\n");

    return (0);
}
