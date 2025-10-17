#include <stdio.h>

void sumevenodd(int arr[], int n, int *evenSum, int *oddSum) 
{
    int i;
    *evenSum = 0;
    *oddSum = 0;

    for (i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            *evenSum += arr[i];
        } 
        else 
        {
            *oddSum += arr[i];
        }
    }
}

int main() 
{
    int n, i;
    int arr[100];   
    int evenSum, oddSum;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Input: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

   sumevenodd(arr, n, &evenSum, &oddSum);

    printf("Output: Sum of even: %d\n", evenSum);
    printf("Sum of odd: %d\n", oddSum);

    return 0;
}
