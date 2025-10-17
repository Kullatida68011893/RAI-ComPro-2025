#include <stdio.h>

int isPrime(int n) 
{
    if (n < 2) 
    {
        return 0;  
    }
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

void displayPrimes(int start, int end) 
{
    int i;
    printf("The prime numbers within the intervals are:\n");
    for (i = start; i <= end; i++) 
    {
        if (isPrime(i)) 
        {  
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() 
{
    int start, end;

    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);

    displayPrimes(start, end);

    return 0;
}
