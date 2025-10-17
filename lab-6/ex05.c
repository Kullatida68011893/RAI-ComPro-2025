// Write a program that retrieve 3 time data inputs from user and stores it in a struct with the following properties: minute(int), seconds(int) and calculate total seconds from all inpu
// Expected output

#include <stdio.h>

struct time {
    int minute;
    int seconds;
};

int main() {
    struct time times[3];
    int totalseconds = 0;

    for (int i = 0; i < 3; i++) {
        printf("Time input (m:s): ");
        scanf("%d:%d", &times[i].minute, &times[i].seconds);
        totalseconds += times[i].minute * 60 + times[i].seconds;
    }
   
    printf("Total time elasped: %d second(s)\n", totalseconds);
    return 0;
}


