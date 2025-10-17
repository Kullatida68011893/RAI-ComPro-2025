#include <stdio.h>

int main() 
{
    int a = 0;
    int b = 5;

    printf("Before reverse: a = %d, b = %d\n", a, b);

    int *pa = &a;
    int *pb = &b;

    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    printf("After reverse: a = %d, b = %d\n", a, b);

    return 0;
}
