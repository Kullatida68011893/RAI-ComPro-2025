// S is structure which keep 3 numbers, write the program to collect the first and the second value into structure and
// calculate summation of 2 numbers and keep into the third number by using pointer to refer number.

#include <stdio.h>

struct numbers
{
    int a, b, sum;
};

int main ()
{
    struct numbers s;
    struct numbers *ptr = &s;

    printf("Enter first number: ");
    scanf("%d", &ptr -> a);

    printf("Enter second number: ");
    scanf("%d", &ptr -> b);

    ptr->sum = ptr->a +ptr->b;

    printf("First number: %d\n", ptr->a);
    printf("Second number: %d\n", ptr->b);
    printf("Summation: %d\n", ptr->sum);

    return(0);
}
