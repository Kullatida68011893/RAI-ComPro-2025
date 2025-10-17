// Write a program to ask student’s name and mark in Calculus, Physic, and computer programming, then calculate the average and display the grade.

#include <stdio.h>

int main() {
    char name[50];
    float calculus, physics, programming;
    float average;
    char grade;

    printf("Enter student's name: ");
    fgets(name, sizeof(name), stdin);  
   
    printf("Enter Calculus mark: ");
    scanf("%f", &calculus);

    printf("Enter Physics mark: ");
    scanf("%f", &physics);

    printf("Enter Computer Programming mark: ");
    scanf("%f", &programming);

   
    average = (calculus + physics + programming) / 3.0;

    
    if (average >= 80) {
        grade = 'A';
    } else if (average >= 70) {
        grade = 'B';
    } else if (average >= 60) {
        grade = 'C';
    } else if (average >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

 
    printf("\nStudent Name: %s", name);
    printf("Average Mark: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}