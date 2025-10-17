#include <stdio.h>

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    switch (num) {
        case 0 ... 100:
        switch (num % 2) {
                case 0:
                    printf("The number is even.\n");
                    break;
                case 1:
                    printf("The number is odd.\n");
                    break;
            }
        break;
        default: printf("The number is out of range.\n");
    }

    return 0;
}
