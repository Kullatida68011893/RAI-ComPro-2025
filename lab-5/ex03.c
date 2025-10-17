// Write a program to calculate total marks and highest mark among 5 students using array

#include <stdio.h>

int main() 
{
    int marks[5];        
    int total = 0;       
    int highest = 0;     
    int i;

    for (i = 0; i < 5; i++) 
    {
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);

        total += marks[i];                
        if (marks[i] > highest) 
        {         
            highest = marks[i];
        }
    }

   
    printf("Total Marks : %d\n", total);
    printf("Highest Marks: %d\n", highest);

    return 0;
}
