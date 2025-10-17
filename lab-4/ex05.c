// // Ask the user for a positive integer and calculate its factorial using a for loop.

#include <stdio.h>

int main() {
    int num;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive number.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is: %d\n", num, factorial);
    }

    return 0;
}
